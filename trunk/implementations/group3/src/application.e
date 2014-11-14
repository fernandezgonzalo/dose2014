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
			Result := ".." + Operating_environment.directory_separator.out + "dose_backend.db"
		end

	path_to_www_folder: STRING
		-- calculates the path to the www folder, based on the location of the .ecf file
		-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		once
			Result := ".." + Operating_environment.directory_separator.out + "www"
		end


	tasks_controller: TASKS_CONTROLLER
	projects_controller: PROJECTS_CONTROLLER
	users_controller: USERS_CONTROLLER

	Project: PROJECT
	Task: TASK
	User: USER

	initialize
			-- Initialize current service.
		do
			create Project.make(path_to_db_file)
			create Task.make(path_to_db_file)
			create User.make(path_to_db_file)
			create tasks_controller.make(Task)
			create projects_controller.make(Project)
			create users_controller.make(User)

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
			map_uri_template_agent_with_request_methods ("/tasks", agent tasks_controller.get_all, router.methods_get)
			map_uri_template_agent_with_request_methods ("/tasks", agent tasks_controller.add, router.methods_post)
			map_uri_template_agent_with_request_methods ("/tasks/{task_id}", agent tasks_controller.remove, router.methods_delete)

			map_uri_template_agent_with_request_methods ("/projects", agent projects_controller.get_all, router.methods_get)
			map_uri_template_agent_with_request_methods ("/projects", agent projects_controller.add, router.methods_post)
			map_uri_template_agent_with_request_methods ("/projects/{project_id}", agent projects_controller.remove, router.methods_delete)

			map_uri_template_agent_with_request_methods ("/users", agent users_controller.get_all, router.methods_get)
			map_uri_template_agent_with_request_methods ("/users", agent users_controller.add, router.methods_post)

				-- setting the path to the folder from where we serve static files
			create fhdl.make_hidden (path_to_www_folder)
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end
end
