note
	description : ""
	author		: ""
class
	APPLICATION
inherit
	WSF_DEFAULT_SERVICE
		redefine
			initialize
		end

	WSF_ROUTED_SERVICE
	WSF_URI_TEMPLATE_HELPER_FOR_ROUTED_SERVICE
create
	make_and_launch
feature {NONE}
	path_to_www_folder: STRING
		once
			Result := ".." + Operating_environment.directory_separator.out + "www"
		end

	db: SQLITE_DATABASE
	tasks_controller: TASKS_CONTROLLER
	projects_controller: PROJECTS_CONTROLLER
	sprints_controller: SPRINTS_CONTROLLER
	stories_controller: STORIES_CONTROLLER
	users_controller: USERS_CONTROLLER
	Project: PROJECT
	Task: TASK
	User: USER
	Sprint: SPRINT
	Story: STORY

	initialize
		do
			create db.make_open_read_write (".." + Operating_environment.directory_separator.out + "dose_backend.db")
			create Project.make(db, "projects")
			create Sprint.make(db, "sprints")
			create Task.make(db, "tasks")
			create User.make(db, "users")
			create Story.make(db, "stories")
			create tasks_controller.make(Task)
			create projects_controller.make(Project)
			create sprints_controller.make(Sprint)
			create users_controller.make(User)
			create stories_controller.make(Story)

			set_service_option ("port", 9090)

			initialize_router
		end

feature
	setup_router
		local
			fhdl: WSF_FILE_SYSTEM_HANDLER
		do
			map_uri_template_agent_with_request_methods("/tasks", agent tasks_controller.get_all, router.methods_get)
			map_uri_template_agent_with_request_methods("/tasks/by_user/{user_id}", agent tasks_controller.by_user, router.methods_get)
			map_uri_template_agent_with_request_methods("/tasks", agent tasks_controller.add, router.methods_post)
			map_uri_template_agent_with_request_methods("/tasks/{id}", agent tasks_controller.remove, router.methods_delete)
			map_uri_template_agent_with_request_methods("/tasks/{id}", agent tasks_controller.show, router.methods_get)
			--map_uri_template_agent_with_request_methods("/tasks/{task_id}", agent tasks_controller.edit, router.methods_put)

			map_uri_template_agent_with_request_methods("/projects", agent projects_controller.get_all, router.methods_get)
			map_uri_template_agent_with_request_methods("/projects", agent projects_controller.add, router.methods_post)
			map_uri_template_agent_with_request_methods("/projects/{id}", agent projects_controller.remove, router.methods_delete)
			map_uri_template_agent_with_request_methods("/projects/{id}", agent projects_controller.show, router.methods_get)
			--map_uri_template_agent_with_request_methods("/projects/{project_id}", agent projects_controller.edit, router.methods_put)

			map_uri_template_agent_with_request_methods("/sprints", agent sprints_controller.get_all, router.methods_get)
			map_uri_template_agent_with_request_methods("/project-sprints/{project_id}", agent sprints_controller.by_project, router.methods_get)
			map_uri_template_agent_with_request_methods("/sprints", agent sprints_controller.add, router.methods_post)
			map_uri_template_agent_with_request_methods("/sprints/{id}", agent sprints_controller.remove, router.methods_delete)
			map_uri_template_agent_with_request_methods("/sprints/{id}", agent sprints_controller.show, router.methods_get)
			--map_uri_template_agent_with_request_methods("/projects/{project_id}", agent projects_controller.edit, router.methods_put)

			map_uri_template_agent_with_request_methods("/stories", agent stories_controller.get_all, router.methods_get)
			map_uri_template_agent_with_request_methods("/sprint-stories/{sprint_id}", agent stories_controller.by_sprint, router.methods_get)
			map_uri_template_agent_with_request_methods("/stories", agent stories_controller.add, router.methods_post)
			map_uri_template_agent_with_request_methods("/stories/{id}", agent stories_controller.remove, router.methods_delete)
			map_uri_template_agent_with_request_methods("/stories/{id}", agent stories_controller.show, router.methods_get)
			--map_uri_template_agent_with_request_methods("/projects/{project_id}", agent projects_controller.edit, router.methods_put)

			map_uri_template_agent_with_request_methods("/users", agent users_controller.get_all, router.methods_get)
			map_uri_template_agent_with_request_methods("/users", agent users_controller.add, router.methods_post)
			map_uri_template_agent_with_request_methods("/users/{id}", agent projects_controller.remove, router.methods_delete)
			map_uri_template_agent_with_request_methods("/users/{id}", agent projects_controller.show, router.methods_get)
			map_uri_template_agent_with_request_methods("/users/{id}", agent projects_controller.update, router.methods_put)

			create fhdl.make_hidden (path_to_www_folder)
			fhdl.set_directory_index (<<"index.html">>)
			router.handle_with_request_methods ("", fhdl, router.methods_GET)
		end
end
