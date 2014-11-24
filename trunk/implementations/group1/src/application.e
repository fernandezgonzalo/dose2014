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
			Result := ".." + Operating_environment.directory_separator.out + "database.db"
		end

	path_to_www_folder: STRING
		-- calculates the path to the www folder, based on the location of the .ecf file
		-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		once
			Result := ".." + Operating_environment.directory_separator.out + "www"
		end


	user: USER
		-- a controller for handling user requests

	project: PROJECT
		-- a controller for handling project requests

	rol_project: ROL_PROJECT
		-- a controller for handling project requests

	dao: DB
			-- access to the database and the functionality that comes with that class

	session_ctrl: SESSION_CTRL

	session_manager: WSF_FS_SESSION_MANAGER


	initialize
			-- Initialize current service.
		do
				-- create the dao object and the controllers
				-- we reuse the same database connection so we don't open up too many connections at once
			create dao.make (path_to_db_file)
			create session_manager.make
			create session_ctrl.make(dao, session_manager)
			create user.make(dao, session_manager)
			create project.make(dao)
			create rol_project.make(dao)

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

			-- Handing login and logout

			map_uri_template_agent_with_request_methods ("/api/login", agent session_ctrl.login , router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/logout", agent session_ctrl.logout , router.methods_get)


				-- handling of all ht routes relating to "user"

			map_uri_template_agent_with_request_methods ("/api/users", agent user.get_users, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}", agent user.get_users_by_id, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users", agent user.add_user, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects", agent user.get_projects_by_user, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}", agent user.get_project_by_id, router.methods_get)


				-- handling of all ht routes relating to "project"
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/developers", agent project.get_users_by_id_project, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users/{id_user}/projects/{id_project}/sprint", agent project.get_project_sprints , router.methods_get)
		

				-- setting the path to the folder from where we serve static files
			create fhdl.make_hidden (path_to_www_folder)
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end

end

