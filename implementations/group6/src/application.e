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



	session_ctrl: DEMO_SESSION_CTRL
			-- a controller for handling sessions

	iteration_ctrl: ITERATION_CTRL
			-- a controller for handling user requests

	project_ctrl: PROJECT_CTRL
			-- a controller for handling user requests

	user_ctrl: USER_CTRL
			-- a controller for handling user requests

	work_item_ctrl: WORK_ITEM_CTRL
			-- a controller handling user requests

	dao: DEMO_DB
			-- access to the database and the functionality that comes with that class

	session_manager: WSF_FS_SESSION_MANAGER

	comment: COMMENT

	link: LINK


	initialize
			-- Initialize current service.
		do
				-- create the dao object and the controllers
				-- we reuse the same database connection so we don't open up too many connections at once
			create dao.make (path_to_db_file)
			--bool:=dao.check_status ("Done")
			--print("%N%N")
			--print(bool)
		--	if dao.is_member ("giorgio@hotmail.it", "The amazing project") then
		--		print("true G")
		--	else
		--		print("false G")
		--	end

			--print(dao.get_points ("bidon").representation)

--			print(dao.get_all_user_projects ("jimmy@yahoo.com").representation)

--				 -- BEGIN QUERIES TESTS
--			print("%N***********new test*************%N")
--			print(dao.get_all_users.representation + "%N")

--			if dao.check_if_mail_already_present ("nicogallo@gmail.com") then
--				dao.remove_user ("nicogallo@gmail.com")
--				print("%Nuser removed%N")
--			else
--				dao.add_user ("nicogallo@gmail.com", "ambaraba", "Nicolo", "Gallo", "TeamLeader", "path_to_a_photo", True)
--				print("%Nuser added%N")

--			end

--			print(dao.get_all_users.representation + "%N")

--			if dao.check_if_mail_already_present ("nicogallo@gmail.com") then
--				dao.remove_user ("nicogallo@gmail.com")
--				print("%Nuser removed%N")
--			else
--				dao.add_user ("nicogallo@gmail.com", "ambaraba", "Nicolo", "Gallo", "TeamLeader", "path_to_a_photo", True)
--				print("%Nuser added%N")

--			end

--			print(dao.get_all_users.representation + "%N")


--				 -- END OF TESTS

			create session_manager.make
			create session_ctrl.make(dao, session_manager)
			create project_ctrl.make (dao, session_manager)
			create user_ctrl.make (dao)
			create iteration_ctrl.make (dao)
			create work_item_ctrl.make (dao)

				-- set the port of the web server to 9090
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
			map_uri_template_agent_with_request_methods ("/api/sessions", agent session_ctrl.login , router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/sessions", agent session_ctrl.logout , router.methods_delete)


				-- handling of all the routes relating to "users"
			map_uri_template_agent_with_request_methods ("/api/users", agent user_ctrl.get_users, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users", agent user_ctrl.create_user, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/{user_email}", agent user_ctrl.delete_user, router.methods_delete)
			--map_uri_template_agent_with_request_methods ("/api/users/{user_email}", agent user_ctrl.change_password, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/{user_email}", agent user_ctrl.update_user, router.methods_post)
			--map_uri_template_agent_with_request_methods ("/api/users/{user_email}", agent user_ctrl.get_user_info, router.methods_get)

				-- handling of all the routes relating to "projects"
			map_uri_template_agent_with_request_methods ("/api/projects", agent project_ctrl.get_projects, router.methods_get) -- works
			map_uri_template_agent_with_request_methods ("/api/projects", agent project_ctrl.add_project, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/projects", agent project_ctrl.remove_project, router.methods_delete)
			map_uri_template_agent_with_request_methods ("/api/projects/update", agent project_ctrl.rename_project, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/projects", agent project_ctrl.get_all_user_projects, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/projects/members", agent project_ctrl.get_all_project_members, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/projects/members/add", agent project_ctrl.add_member_to_project, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/projects/{project_name_id}/{user_email_id}", agent project_ctrl.remove_member_from_project, router.methods_delete)
			map_uri_template_agent_with_request_methods ("/api/projects/{project_name_id}/owners/{user_email_id}", agent project_ctrl.promote_owner, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/projects/{project_name_id}/owners", agent project_ctrl.get_all_project_owners, router.methods_get)


				-- handling of all the routes relating to "users"
			map_uri_template_agent_with_request_methods ("/api/iterations/{project_name}", agent iteration_ctrl.get_all_project_iterations, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/iterations", agent iteration_ctrl.create_iteration, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/iterations/{project_name, iteration_number}", agent iteration_ctrl.delete_iteration, router.methods_delete)


				--handling of all the routes relating to "work_items"
			map_uri_template_agent_with_request_methods ("/api/work_items/{work_item_id}", agent work_item_ctrl.get_work_item_info, router.methods_get)  --everything work
			map_uri_template_agent_with_request_methods ("/api/work_items", agent work_item_ctrl.create_work_item, router.methods_post)   -- everything work
			map_uri_template_agent_with_request_methods ("/api/work_items/{work_item_id}", agent work_item_ctrl.delete_work_item, router.methods_delete)  --everything work
			map_uri_template_agent_with_request_methods ("/api/work_items/{work_item_id}", agent work_item_ctrl.change_work_item, router.methods_post)  --everything work
			map_uri_template_agent_with_request_methods ("/api/work_items/iteration/{number,project}", agent work_item_ctrl.get_all_iteration_work_items, router.methods_get)  -- everything work
			map_uri_template_agent_with_request_methods ("/api/work_items/comments/{work_item_id}", agent work_item_ctrl.add_comment, router.methods_post)  -- everything work
			map_uri_template_agent_with_request_methods ("/api/work_items/comments/{work_item_id}", agent work_item_ctrl.get_all_work_item_comments, router.methods_get)  -- everything work
			map_uri_template_agent_with_request_methods ("/api/work_items/links/{work_item1,work_item2}", agent work_item_ctrl.add_link, router.methods_post) --everything works
			map_uri_template_agent_with_request_methods ("/api/work_items/{work_item_id}/links", agent work_item_ctrl.remove_link, router.methods_delete) --everything work
			map_uri_template_agent_with_request_methods ("/api/work_items/links/{work_item_id}", agent work_item_ctrl.get_all_work_item_links, router.methods_get) --everything work


				-- setting the path to the folder from where we serve static files
			create fhdl.make_hidden (path_to_www_folder)
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end

end

