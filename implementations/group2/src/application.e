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
			create user_ctrl.make(dao, session_manager)
			create project_ctrl.make(dao)
			create req_ctrl.make(dao)
			create task_ctrl.make(dao)
			create sprint_ctrl.make(dao)

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

--				-- handling of all the routes relating to "user"
--			map_uri_template_agent_with_request_methods("coffee/users", agent user_ctrl.get_users ,router.methods_get)
			map_uri_template_agent_with_request_methods("/coffee/users", agent user_ctrl.add_user ,router.methods_post)
			map_uri_template_agent_with_request_methods("/coffee/users", agent user_ctrl.delete_user ,router.methods_delete)
			map_uri_template_agent_with_request_methods("/coffee/users/{user_id}/edit", agent user_ctrl.update_user ,router.methods_post)

--				-- handling of all the routes relating to "project"
--			map_uri_template_agent_with_request_methods("coffee/projects", agent project_ctrl.create_project ,router.methods_post)
--			map_uri_template_agent_with_request_methods("coffee/projects/{project_id}/edit", agent project_ctrl.update_project ,router.methods_post)
--			map_uri_template_agent_with_request_methods("coffee/projects", agent project_ctrl.get_projects ,router.methods_get)
--			map_uri_template_agent_with_request_methods("coffee/projects/{project_id}", agent project_ctrl.delete_project ,router.methods_delete)


--				-- handling of all the routes relating to "requirement"
--			map_uri_template_agent_with_request_methods("coffee/reqs/{project_id}", agent req_ctrl.create_req ,router.methods_post)
--			map_uri_template_agent_with_request_methods("coffee/reqs/{project_id}/edit", agent req_ctrl.update_req ,router.methods_post)
--			map_uri_template_agent_with_request_methods("coffee/reqs/{project_id}", agent req_ctrl.get_reqs ,router.methods_get)
--			map_uri_template_agent_with_request_methods("coffee/reqs/{project_id}", agent req_ctrl.delete_req ,router.methods_delete)


--				-- handling of all the routes relating to "task"
--			map_uri_template_agent_with_request_methods("coffee/taks", agent task_ctrl.create_task ,router.methods_post)
--			map_uri_template_agent_with_request_methods("coffee/tasks/{req_id}/edit", agent task_ctrl.update_task ,router.methods_post)
--			map_uri_template_agent_with_request_methods("coffee/tasks/{req_id}", agent task_ctrl.get_tasks ,router.methods_get)
--				map_uri_template_agent_with_request_methods("coffee/tasks/{req_id}", agent task_ctrl.delete_task ,router.methods_delete)

--				-- handling of all the routes relating to "sprint"
--			map_uri_template_agent_with_request_methods("coffee/sprints", agent sprint_ctrl.add_sprint ,router.methods_post)
--			map_uri_template_agent_with_request_methods("coffee/sprints/{project_id}", agent sprint_ctrl.get_sprint ,router.methods_get)
--			map_uri_template_agent_with_request_methods("coffee/sprints/{project_id}/close", agent sprint_ctrl.close_sprint ,router.methods_post)

				-- setting the path to the folder from where we serve static files
			create fhdl.make_hidden (path_to_www_folder)
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end

end

