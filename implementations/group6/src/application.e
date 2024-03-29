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
			Result := ".." + Operating_environment.directory_separator.out + "db2.db"
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
			-- a controller for handling iterations requests

	project_ctrl: PROJECT_CTRL
			-- a controller for handling projectsr requests

	user_ctrl: USER_CTRL
			-- a controller for handling users requests

	work_item_ctrl: WORK_ITEM_CTRL
			-- a controller for handling work items requests

	search_ctrl: SEARCH_CTRL
			-- a controller for handling search requests

	dao: DEMO_DB
			-- access to the database and the functionality that comes with that class

	session_manager: WSF_FS_SESSION_MANAGER

	comment: COMMENT

	link: LINK



	initialize
			-- Initialize current service
		do

				-- create the dao object and the controllers
				-- we reuse the same database connection so we don't open up too many connections at once
			create dao.make (path_to_db_file)

			create session_manager.make
			create session_ctrl.make(dao, session_manager)
			create project_ctrl.make (dao, session_manager)
			create user_ctrl.make (dao, session_manager)
			create iteration_ctrl.make (dao)
			create work_item_ctrl.make (dao, session_manager)
			create search_ctrl.make(dao, session_manager)


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
			map_uri_template_agent_with_request_methods ("/api/sessions/logout", agent session_ctrl.logout , router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/sessions/forgotpassword", agent session_ctrl.forgot_password , router.methods_post)


				-- handling of all the routes relating to "users"
			map_uri_template_agent_with_request_methods ("/api/users", agent user_ctrl.get_users, router.methods_get)
			map_uri_template_agent_with_request_methods ("/api/users", agent user_ctrl.create_user, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/delete", agent user_ctrl.delete_user, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/invite", agent user_ctrl.send_invitation, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/changepassword", agent user_ctrl.change_password, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/update", agent user_ctrl.update_user, router.methods_post)


				-- handling of all the routes relating to "projects"
			map_uri_template_agent_with_request_methods ("/api/projects", agent project_ctrl.get_projects, router.methods_get) -- works
			map_uri_template_agent_with_request_methods ("/api/projects", agent project_ctrl.add_project, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/projects/remove", agent project_ctrl.remove_project, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/projects/update", agent project_ctrl.rename_project, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/getprojects", agent project_ctrl.get_all_user_projects, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/users/info", agent project_ctrl.get_all_user_projects_not_login, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/projects/getmembers", agent project_ctrl.get_all_project_members, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/projects/members/add", agent project_ctrl.add_member_to_project, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/projects/members/remove", agent project_ctrl.remove_member_from_project, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/projects/members/promote", agent project_ctrl.promote_owner, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/projects/members/downgrade", agent project_ctrl.downgrade_owner, router.methods_post)


				-- handling of all the routes relating to "iterations"
			map_uri_template_agent_with_request_methods ("/api/projects/iterations", agent iteration_ctrl.create_iteration, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/projects/iterations/getprojectiterations", agent iteration_ctrl.get_all_project_iterations, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/projects/iterations/delete", agent iteration_ctrl.delete_iteration, router.methods_post)


				--handling of all the routes relating to "work_items"
			map_uri_template_agent_with_request_methods ("/api/projects/iterations/getwork_item", agent work_item_ctrl.get_work_item_info, router.methods_post)  --everything work
			map_uri_template_agent_with_request_methods ("/api/projects/iterations/workitems", agent work_item_ctrl.create_work_item, router.methods_post)   -- everything work
			map_uri_template_agent_with_request_methods ("/api/projects/iterations/workitems/delete_workitem", agent work_item_ctrl.delete_work_item, router.methods_post)  --everything work
			map_uri_template_agent_with_request_methods ("/api/projects/iterations/workitems/update", agent work_item_ctrl.change_work_item, router.methods_post)  --everything work
			map_uri_template_agent_with_request_methods ("/api/projects/iterations/getworkitems", agent work_item_ctrl.get_all_iteration_work_items, router.methods_post)  -- everything work
			map_uri_template_agent_with_request_methods ("/api/projects/iterations/workitems/comments", agent work_item_ctrl.add_comment, router.methods_post)  -- everything work
			map_uri_template_agent_with_request_methods ("/api/projects/iterations/workitems/getcomments", agent work_item_ctrl.get_all_work_item_comments, router.methods_post)  -- everything work
			map_uri_template_agent_with_request_methods ("/api/projects/iterations/workitems/links", agent work_item_ctrl.add_link, router.methods_post) --everything works
			map_uri_template_agent_with_request_methods ("/api/projects/iterations/workitems/links/delete", agent work_item_ctrl.remove_link, router.methods_post) --everything work
			map_uri_template_agent_with_request_methods ("/api/projects/iterations/workitems/getlinks", agent work_item_ctrl.get_all_work_item_links, router.methods_post) --everything work
			map_uri_template_agent_with_request_methods ("/api/users/achieved_work_items", agent work_item_ctrl.get_achieved_work_items , router.methods_post) --everything work

				-- handling of all the routes relating to "search"
			map_uri_template_agent_with_request_methods ("/api/search/users", agent search_ctrl.search_users, router.methods_post)
			map_uri_template_agent_with_request_methods ("/api/search/workitems", agent search_ctrl.search_work_items, router.methods_post)


				-- setting the path to the folder from where we serve static files
			create fhdl.make_hidden (path_to_www_folder)
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end

end

