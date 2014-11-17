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
			print(Operating_environment.current_directory_name_representation)
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



	session_ctrl: DEMO_SESSION_CTRL
			-- a controller for handling sessions

	todo_ctrl: DEMO_TODO_CTRL
			-- a controller for handling todo requests

	user_ctrl: USER_CONTROLLER
			-- a controller for handling user requests

	dao: DEMO_DB
			-- access to the database and the functionality that comes with that class

	session_manager: WSF_FS_SESSION_MANAGER

	database : SQLITE_DATABASE
	initialize
			-- Initialize current service.
		local
			crud_user: CRUD_USER
			crud_task: CRUD_TASK
			crud_project: CRUD_PROJECT
			crud_comment: CRUD_COMMENT

		do
				-- create the dao object and the controllers
				-- we reuse the same database connection so we don't open up too many connections at once

			create database.make_open_read_write (path_to_db_file)
		--	create dao.make (path_to_db_file)
			create crud_user.make(database)
			create crud_task.make (database)
			create crud_project.make (database)
			create crud_comment.make(database)
		--	print(crud_user.users.representation)
		--	print(crud_user.add_user ("email", "pereyra", "pass", "das",1).id.out)

		--	print(crud_user.remove_user_by_id (6))
		--	print(crud_user.remove_user_by_id (8))
		--	print(crud_user.update_user_email (2, "mail2Nuevox2"))
		--	print(crud_user.update_user_email (8, "mail2Nuevo"))
		--	print(crud_user.update_user_name (2, "nombre2Nuevo"))
		--	print(crud_user.update_user_name (8, "nombre2Nuevo"))
		--	print(crud_user.update_user_password (2, "password2Nuevo"))
		--	print(crud_user.update_user_password (8, "password2Nuevo"))
		--	print(crud_user.update_user_username (2, "username2Nuevo"))
		--	print(crud_user.update_user_username (8, "username2Nuevo"))
		--	print(crud_user.update_user_last_login (2, "15/12/1992"))
		--	print(crud_user.update_user_last_login (8, "15/12/1992"))
		--	print(crud_task.remove_task_by_id (5));
		--	print(crud_task.remove_task_by_id (7));
		--	print(crud_task.tasks.representation);
		--	print(crud_task.add_task ("nuevo", "nuevo", "nuevo", "nuevo", "nuevo", "nuevo", 2, 2, 1).id.out)
		--	print(crud_task.task_by_id (2).representation)
		--	print(crud_task.inprogress_task_of_the_user (2).representation)
		--	print(crud_task.planned_task_of_the_user (2).representation)
		--	print(crud_task.task_by_id_project (1).representation)
		--	print(crud_task.tasks_by_status_and_id_project ("Planned", 1).representation)
		--	print(crud_task.update_task_deadline ("deadMod",1))
		--	print(crud_task.update_task_description ("descMod",1))
		--	print(crud_task.update_task_estimation ("20 horas",1))
		--	print(crud_task.update_task_id_user_assigned (3,1))
		--	print(crud_task.update_task_priority ("prioridadMod",1))
		--	print(crud_task.update_task_status ("PlannedMod",1))
		--	print(crud_task.update_task_title ("tituloMod",1))
		--	print(crud_project.add_project ("nuevo", "20/12/2014", "nombre", 3).id.out)
		--	print(crud_project.number_of_finshed_tasks (1).representation)
		--	print(crud_project.number_of_stopped_tasks (1).representation)
		--	print(crud_project.number_of_tasks_in_project (1).representation)
		--	print(crud_project.number_of_tasks_group_by_user (1).representation)
		--	print(crud_project.projects.representation)
		--	print(crud_project.remove_project_by_id (5));
		--	print(crud_project.update_project_deadline ("deadmod",1))
		--	print(crud_project.update_project_name ("nombreMod",1))
		--	print(crud_project.update_project_client_name ("clientMod",1))
		--	print(crud_comment.add_comment ("el comentario", 1, 1).id.out)


			create session_manager.make
			create session_ctrl.make(dao, session_manager)
			create todo_ctrl.make(dao, session_manager)
			create user_ctrl.make(crud_user)

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
				-- handling the routes related to "sessions"
			map_uri_template_agent_with_request_methods ("/api/sessions", agent session_ctrl.login , router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/sessions", agent session_ctrl.logout , router.methods_delete)

				-- handling of all the routes relating to "todos"
			map_uri_template_agent_with_request_methods ("/api/todos", agent todo_ctrl.get_todos, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/todos", agent todo_ctrl.add_todo, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/todos/{todo_id}", agent todo_ctrl.remove_todo, router.methods_delete)

				-- handling of all ht routes relating to "users"
			map_uri_template_agent_with_request_methods ("/api/users", agent user_ctrl.get_users, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users", agent user_ctrl.create_user, router.methods_post)

				-- setting the path to the folder from where we serve static files
			create fhdl.make_hidden (path_to_www_folder)
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end

end

