note
	description : "CASD application root class"
	date        : "$Date$"
	revision    : "$Revision$"

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
			Result := ".." + Operating_environment.directory_separator.out + "casd.db"
		end

	path_to_www_folder: STRING
		-- calculates the path to the www folder, based on the location of the .ecf file
		-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		once
			Result := ".." + Operating_environment.directory_separator.out + "www"
		end

	--database: CASD_DB
		-- access to the database and the functionality that comes with that class

	-- Here we should add the features for controllers classes.
	user_ctrl: USER_CONTROLLER

	initialize
			-- Initialize current service.
		do
				-- create the dao object and the controllers
				-- we reuse the same database connection so we don't open up too many connections at once
	--		create database.make (path_to_db_file)
			--create todo_ctrl.make(dao)
			--create user_ctrl.make(dao)
			create user_ctrl.make (path_to_db_file)


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
				-- handling of all the routes relating to "todos"
			--map_uri_template_agent_with_request_methods ("/api/todos", agent todo_ctrl.get_todos, router.methods_get)
			--map_uri_template_agent_with_request_methods ("/api/todos", agent todo_ctrl.add_todo, router.methods_post)
			--map_uri_template_agent_with_request_methods ("/api/todos/{todo_id}", agent todo_ctrl.remove_todo, router.methods_delete)

				-- handling of all ht routes relating to "users"
			map_uri_template_agent_with_request_methods ("/casd/users", agent user_ctrl.get_users, router.methods_get)
			--map_uri_template_agent_with_request_methods ("/api/users", agent user_ctrl.add_user, router.methods_post)

				-- setting the path to the folder from where we serve static files
			create fhdl.make_hidden (path_to_www_folder)
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end

end
