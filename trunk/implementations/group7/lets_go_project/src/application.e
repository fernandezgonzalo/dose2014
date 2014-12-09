note
	description : "The main class of the let's go application. Sets up the router and instanciates the controllers and database."
	author		: "ar"
	date		: "14.11.14"

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
			Result := ".." + Operating_environment.directory_separator.out + "letsgo.db"
		end

	path_to_www_folder: STRING
		-- calculates the path to the www folder, based on the location of the .ecf file
		-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		once
			Result := ".." + Operating_environment.directory_separator.out + "www"
		end


		-- Handlers for all request and resource types
	session_ctrl: SESSION_CONTROLLER
	task_ctrl: TASK_CONTROLLER
	story_ctrl: STORY_CONTROLLER
	sprint_ctrl: SPRINT_CONTROLLER
	project_ctrl: PROJECT_CONTROLLER
	user_ctrl: USER_CONTROLLER
	message_ctrl: MESSAGE_CONTROLLER

	db: DATABASE
		-- access to the database and the functionality that comes with that class

	session_manager: WSF_FS_SESSION_MANAGER


	initialize
			-- Initialize current service.
		do
				-- create the db object and the controllers
				-- we reuse the same database connection so we don't open up too many connections at once
			create db.make (path_to_db_file)

			create session_manager.make
			create session_ctrl.make(db, session_manager)
			create task_ctrl.make(db, session_manager, "task", "tasks", "task_id", "story_id")
			create story_ctrl.make(db, session_manager, "story", "stories", "story_id", "sprint_id")
			create sprint_ctrl.make(db, session_manager, "sprint", "sprints", "sprint_id", "project_id")
			create project_ctrl.make(db, session_manager, "project", "projects", "project_id", Void)
			create user_ctrl.make(db, session_manager, "user", "users", "user_id", Void)
			create message_ctrl.make(db, session_manager, "message", "messages", "message_id", "project_id")

				-- set the port of the web server to 9090
			set_service_option ("port", 9090)

				-- initialize the router
			initialize_router
		end

feature -- Basic operations

	setup_router
		local
			fhdl: WSF_FILE_SYSTEM_HANDLER
			tasks_base_uri: STRING
			stories_base_uri: STRING
			sprints_base_uri: STRING
			projects_base_uri: STRING
			users_base_uri: STRING
			messages_base_uri: STRING
		do
				-- handling the routes related to "sessions"
			map_uri_template_agent_with_request_methods ("/sessions", agent session_ctrl.login , router.methods_post)
			map_uri_template_agent_with_request_methods ("/sessions", agent session_ctrl.logout , router.methods_delete)

			-- handling of all the routes relating to "users"
			users_base_uri := "/users"
			--setup_restful_routing_for(user_ctrl, users_base_uri, "user_id")
			map_uri_template_agent_with_request_methods (users_base_uri, agent user_ctrl.create_new_validated, router.methods_post)
			map_uri_template_agent_with_request_methods (users_base_uri + "/{user_id}", agent user_ctrl.get_authorized, router.methods_get)
			map_uri_template_agent_with_request_methods (users_base_uri + "/{user_id}", agent user_ctrl.update_authorized_validated, router.methods_put)
			map_uri_template_agent_with_request_methods (users_base_uri + "/{user_id}", agent user_ctrl.delete_authorized, router.methods_delete)


				-- handling of all the routes relating to "projects"
			projects_base_uri := "/projects"
			setup_restful_routing_for(project_ctrl, projects_base_uri, "project_id")
			map_uri_template_agent_with_request_methods (projects_base_uri + "/{project_id}/invite_dev", agent project_ctrl.add_user_authorized_validated, router.methods_put)
			map_uri_template_agent_with_request_methods (projects_base_uri + "/{project_id}/remove_devs", agent project_ctrl.remove_users_authorized_validated, router.methods_put)

				-- handling of all the routes relating to "sprints"
			sprints_base_uri := "/projects/{project_id}/sprints"
			setup_restful_routing_for(sprint_ctrl, sprints_base_uri, "sprint_id")

				-- handling of all the routes relating to "stories"
			stories_base_uri := "/projects/{project_id}/sprints/{sprint_id}/stories"
			setup_restful_routing_for(story_ctrl, stories_base_uri, "story_id")

				-- handling of all the routes relating to "tasks"
			tasks_base_uri := "/projects/{project_id}/sprints/{sprint_id}/stories/{story_id}/tasks"
			setup_restful_routing_for(task_ctrl, tasks_base_uri, "task_id")
			map_uri_template_agent_with_request_methods (tasks_base_uri + "/{task_id}/assign_devs", agent task_ctrl.add_users_authorized_validated, router.methods_put)
			map_uri_template_agent_with_request_methods (tasks_base_uri + "/{task_id}/unassign_devs", agent task_ctrl.remove_users_authorized_validated, router.methods_put)

				-- handling of all the routes relating to "messages"
			messages_base_uri := "/projects/{project_id}/messages"
			map_uri_template_agent_with_request_methods (messages_base_uri, agent message_ctrl.get_all_authorized, router.methods_get)
			map_uri_template_agent_with_request_methods (messages_base_uri, agent message_ctrl.create_new_authorized_validated, router.methods_post)


				-- setting the path to the folder from where we serve static files
			create fhdl.make_hidden (path_to_www_folder)
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end


feature {NONE} -- Internal helpers	

	setup_restful_routing_for(controller: REST_CONTROLLER; base_uri: STRING; id_name: STRING)
		do
			map_uri_template_agent_with_request_methods (base_uri, agent controller.get_all_authorized, router.methods_get)
			map_uri_template_agent_with_request_methods (base_uri, agent controller.create_new_authorized_validated, router.methods_post)
			map_uri_template_agent_with_request_methods (base_uri + "/{" + id_name + "}", agent controller.get_authorized, router.methods_get)
			map_uri_template_agent_with_request_methods (base_uri + "/{" + id_name + "}", agent controller.update_authorized_validated, router.methods_put)
			map_uri_template_agent_with_request_methods (base_uri + "/{" + id_name + "}", agent controller.delete_authorized, router.methods_delete)
		end

end

