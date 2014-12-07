note
	description : "The main class of the demo. Sets up the router and instanciates the controllers and database."
	author		: "hce"

class
	APPLICATION

inherit
	WSF_DEFAULT_SERVICE
		redefine
			initialize
		end

	WSF_ROUTED_SERVICE
		-- a routed_service implements the execute loop
		-- but it expectes us to implement

	WSF_URI_TEMPLATE_HELPER_FOR_ROUTED_SERVICE
		-- for the routing we use uri templates
		-- thus we can have "varialbes" in the uris

create
	make_and_launch


feature {NONE} -- Initialization

	path_to_db_file: STRING
		-- calculates the path to the demo.db file, based on the location of the .ecf file
		-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		once
			Result := ".." + Operating_environment.directory_separator.out + "coffee.db"
		end

	path_to_www_folder: STRING
		-- calculates the path to the www folder, based on the location of the .ecf file
		-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		once
			Result := ".." + Operating_environment.directory_separator.out + "www"
		end


	session_ctrl: COFFEE_SESSION_CTRL
			-- a controller for handling sessions

	user_ctrl: COFFEE_USER_CTRL
			-- controller for handling user requests

	project_ctrl: COFFEE_PROJECT_CTRL
			-- controller for handling project requests
	dev_map_ctrl: COFFEE_DEV_MAP_CTRL
			-- controller for handling project requests
	req_ctrl: COFFEE_REQ_CTRL
			-- controller for handling requirement requests

	task_ctrl: COFFEE_TASK_CTRL
			-- controller for handling task requests

	sprint_ctrl: COFFEE_SPRINT_CTRL
			-- controller for handling sprint requests		

	dao: COFFEE_DB
			-- access to the database and the functionality that comes with that class

	session_manager: WSF_FS_SESSION_MANAGER


	initialize
			-- Initialize current service.
		do
				-- create the dao object and the controllers
				-- we reuse the same database connection so we don't open up too many connections at once
			create dao.make (path_to_db_file)
			create session_manager.make
			create session_ctrl.make(dao, session_manager)
			create user_ctrl.make(dao, session_manager, "user")
			create project_ctrl.make(dao, session_manager, "project")
			create dev_map_ctrl.make(dao, session_manager, "developer_mapping")
			create req_ctrl.make(dao, session_manager, "requirement")
			create task_ctrl.make(dao, session_manager, "task")
			create sprint_ctrl.make(dao, session_manager, "sprint")

				-- set the prot of the web server to 9090
			set_service_option ("port", 9090)

				-- initialize the router
			initialize_router
		end

feature -- Basic operations

	setup_router
		local
			fhdl: WSF_FILE_SYSTEM_HANDLER
		do

				-- handling the routes related to "sessions"
			map_uri_template_agent_with_request_methods ("/coffee/sessions", agent session_ctrl.login , router.methods_post)
			map_uri_template_agent_with_request_methods ("/coffee/sessions", agent session_ctrl.logout , router.methods_delete)
			map_uri_template_agent_with_request_methods ("/coffee/sessions", agent session_ctrl.is_logged_in, router.methods_get)

--				-- handling of all the routes relating to "user"
			map_uri_template_agent_with_request_methods("/coffee/users", agent user_ctrl.get_all ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/users", agent user_ctrl.add ,router.methods_post)
			map_uri_template_agent_with_request_methods("/coffee/users/{user_id}", agent user_ctrl.get ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/users/{user_id}", agent user_ctrl.delete ,router.methods_delete)
			map_uri_template_agent_with_request_methods("/coffee/users/{user_id}", agent user_ctrl.update ,router.methods_put)

--				-- handling of all the routes relating to "project"
			map_uri_template_agent_with_request_methods("/coffee/projects", agent project_ctrl.add ,router.methods_post)
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}", agent project_ctrl.update ,router.methods_put)
			map_uri_template_agent_with_request_methods("/coffee/users/{user_id}/projects", agent project_ctrl.get_all ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}", agent project_ctrl.delete ,router.methods_delete)
			map_uri_template_agent_with_request_methods("/coffee/users/{user_id}/projects/{project_id}", agent dev_map_ctrl.add ,router.methods_post)
			map_uri_template_agent_with_request_methods("/coffee/users/{user_id}/projects/{project_id}", agent dev_map_ctrl.delete ,router.methods_delete)
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}", agent project_ctrl.get ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}/current_sprint", agent project_ctrl.get_current_sprint ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}/users", agent project_ctrl.get_users ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}/users/ranking", agent project_ctrl.get_users_ranking ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}/tasks_backlog", agent project_ctrl.get_tasks_backlog ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}/progress", agent project_ctrl.get_progress ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}/recent_activities", agent project_ctrl.get_recent_activities ,router.methods_get)

--				-- handling of all the routes relating to "requirement"
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}/reqs", agent req_ctrl.add ,router.methods_post)
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}/reqs/{req_id}", agent req_ctrl.update ,router.methods_put)
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}/reqs", agent req_ctrl.get_all ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/reqs/{req_id}", agent req_ctrl.delete ,router.methods_delete)
			map_uri_template_agent_with_request_methods("/coffee/reqs/{req_id}", agent req_ctrl.get ,router.methods_get)


--				-- handling of all the routes relating to "task"
			map_uri_template_agent_with_request_methods("/coffee/reqs/{req_id}/tasks", agent task_ctrl.add ,router.methods_post)
			map_uri_template_agent_with_request_methods("/coffee/reqs/{req_id}/tasks/{task_id}", agent task_ctrl.update ,router.methods_put)
			map_uri_template_agent_with_request_methods("/coffee/reqs/{req_id}/tasks", agent task_ctrl.get_all ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/reqs/{req_id}/tasks/{task_id}", agent task_ctrl.delete ,router.methods_delete)
			map_uri_template_agent_with_request_methods("/coffee/tasks/{task_id}", agent task_ctrl.get ,router.methods_get)

--				-- handling of all the routes relating to "sprint"
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}/sprints", agent sprint_ctrl.add ,router.methods_post)
			map_uri_template_agent_with_request_methods("/coffee/projects/{project_id}/sprints", agent sprint_ctrl.get_all ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/sprints/{sprint_id}", agent sprint_ctrl.update ,router.methods_put)
			map_uri_template_agent_with_request_methods("/coffee/sprints/{sprint_id}", agent sprint_ctrl.delete ,router.methods_delete)
			map_uri_template_agent_with_request_methods("/coffee/sprints/{sprint_id}", agent sprint_ctrl.get ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/sprints/{sprint_id}/tasks", agent sprint_ctrl.get_all_tasks ,router.methods_get)

				-- setting the path to the folder from where we serve static files
			create fhdl.make_hidden (path_to_www_folder)
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end

end

