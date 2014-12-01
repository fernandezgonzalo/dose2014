note
	description : "The main class of the application. Sets up the router and instanciates the controllers and database."
	author		: "Group 5"

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
		-- calculates the path to the database file, based on the location of the .ecf file
		-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		once
			-- sed replace db
			Result := "."+ Operating_environment.directory_separator.out + "db"+ Operating_environment.directory_separator.out +"test.db"
		end

	path_to_www_folder: STRING
		-- calculates the path to the www folder, based on the location of the .ecf file
		-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		once
			-- sed replace www
			Result := ".." + Operating_environment.directory_separator.out + "frontend"+Operating_environment.directory_separator.out+"app"
		end



	session_ctrl: SESSION_CONTROLLER
			-- a controller for handling sessions



	task_ctrl: TASK_CONTROLLER
			-- a controller for handling todo requests

	user_ctrl: USER_CONTROLLER
			-- a controller for handling user requests

	project_ctrl: PROJECT_CONTROLLER
			-- a controller for handling project requests

	comment_ctrl: COMMENT_CONTROLLER
			-- a controller for handling comment requests

	session_manager: WSF_FS_SESSION_MANAGER

	database : SQLITE_DATABASE
	initialize
			-- Initialize current service.
		local
			crud_user: CRUD_USER
			crud_task: CRUD_TASK
			crud_project: CRUD_PROJECT
			crud_comment: CRUD_COMMENT
l_fupload,f: RAW_FILE
p: MANAGED_POINTER

		do
				-- create the dao object and the controllers
				-- we reuse the same database connection so we don't open up too many connections at once

			create database.make_open_read_write (path_to_db_file)
		--	create dao.make (path_to_db_file)
			create crud_user.make(database)
			create crud_task.make (database)
			create crud_project.make (database)
			create crud_comment.make (database)

			create session_manager.make
			create session_ctrl.make(crud_user, session_manager)
			create user_ctrl.make(crud_user)
			create project_ctrl.make(crud_project)
			create task_ctrl.make (crud_task)
			create comment_ctrl.make (crud_comment)

				-- set the prot of the web server to 9090
			set_service_option ("port", 9100)

				-- initialize the router
			initialize_router
		end

feature -- Basic operations

	setup_router
		local
			fhdl: WSF_FILE_SYSTEM_HANDLER
		do


			--SESSION RELATED URIs
			--Login
			map_uri_template_agent_with_request_methods ("/api/login", agent session_ctrl.login, router.methods_post)
			--Logout
			map_uri_template_agent_with_request_methods ("/api/logout", agent session_ctrl.logout , router.methods_delete)

			--USER RELATED URIs

				-- handling of all ht routes relating to "users"
			--Retrieving all users
			map_uri_template_agent_with_request_methods ("/api/users", agent user_ctrl.get_users, router.methods_get)
			--Creating one user.
			map_uri_template_agent_with_request_methods ("/api/users", agent user_ctrl.create_user, router.methods_post)

				--handling of the routes relating to "single users"
			--Retrieving an user
			map_uri_template_agent_with_request_methods ("/api/users/{id}", agent user_ctrl.get_user_by_id, router.methods_get)
			--Editing an user
			map_uri_template_agent_with_request_methods ("/api/users/{id}", agent user_ctrl.update_user, router.methods_put)
			--Removing an user
			map_uri_template_agent_with_request_methods ("/api/users/{id}", agent user_ctrl.delete_user_by_id, router.methods_delete)


				--handling all the tasks of a single user.
			--List all tasks by user id
			map_uri_template_agent_with_request_methods ("/api/users/{id}/tasks", agent task_ctrl.get_tasks_of_the_user, router.methods_get)


			--TASKS RELATED URIs


				--handling of the routes relating to tasks.
			--Create a task
			map_uri_template_agent_with_request_methods ("/api/tasks", agent task_ctrl.create_task, router.methods_post)

			--Retrieve a task
			map_uri_template_agent_with_request_methods ("/api/tasks/{id}", agent task_ctrl.get_task_by_id, router.methods_get)

			--Edit a task
			map_uri_template_agent_with_request_methods ("/api/tasks/{id}", agent task_ctrl.update_task, router.methods_put)

			--Remove a task
			map_uri_template_agent_with_request_methods ("/api/tasks/{id}", agent task_ctrl.delete_task_by_id, router.methods_delete)

			--COMMENT RELATED URIs

			--handling of the routes relating to comments

					--List all comments for a task
					map_uri_template_agent_with_request_methods ("/api/tasks/{id}/comments", agent comment_ctrl.get_comment_by_task_id, router.methods_get)

					--Create a comment
					map_uri_template_agent_with_request_methods ("/api/tasks/{id}/comments", agent comment_ctrl.create_comment, router.methods_post)

			--handling of the routes relating to a single comment
					--Retrieve a comment
					map_uri_template_agent_with_request_methods ("/api/tasks/{task_id}/comments/{comment_id}", agent comment_ctrl.get_comment_by_id, router.methods_get)

					--Edit a comment
					map_uri_template_agent_with_request_methods ("/api/tasks/{task_id}/comments/{comment_id}", agent comment_ctrl.update_comment, router.methods_put)

					--Remove a comment
					map_uri_template_agent_with_request_methods ("/api/tasks/{task_id}/comments/{comment_id}", agent comment_ctrl.delete_comment_by_id, router.methods_delete)


			--PROJECT RELATED URIs

				--handling of the routes relating to projects
			--Retrieving all the projects
			map_uri_template_agent_with_request_methods ("/api/projects", agent project_ctrl.get_projects, router.methods_get)

			--Creating a project
			map_uri_template_agent_with_request_methods ("/api/projects", agent project_ctrl.create_project, router.methods_post)

			--Retrieving a single project
			map_uri_template_agent_with_request_methods ("/api/projects/{id}", agent project_ctrl.get_project_by_id, router.methods_get)

			--Edit a project
			map_uri_template_agent_with_request_methods ("/api/projects/{id}", agent project_ctrl.update_project, router.methods_put)

			--Delete a project
			map_uri_template_agent_with_request_methods ("/api/projects/{id}", agent project_ctrl.delete_project_by_id, router.methods_delete)

			--Retrieve all the tasks related to a project
			map_uri_template_agent_with_request_methods ("/api/projects/{id}/tasks", agent task_ctrl.get_task_by_id_project, router.methods_get)

			--Retrieve all the projects related to a user?

				-- setting the path to the folder from where we serve static files
			create fhdl.make_hidden (path_to_www_folder)
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end

end

