note
	description: "Handlers for everything that concerns reports."
	author: "$Rio Cuarto4 Team$"
	date: "$2014-12-01$"
	revision: "$0.01$"

class
	REPORT_CONTROLLER

inherit

	HEADER_JSON_HELPER
		-- inherit this helper to get a procedure that simplifies setting
		-- the HTTP response header correctly

	SESSION_HELPER
		-- inherit this helper to get functions to check for a session cookie
		-- if a session cookie exists, we can get the data of that session

create
	make

feature {NONE} -- Initialization

	make (a_path_to_db_file: STRING; a_session_manager: WSF_SESSION_MANAGER)
		do
			create db_handler_project.make (a_path_to_db_file)
			create db_handler_sprint.make (a_path_to_db_file)
			create db_handler_task.make (a_path_to_db_file)
			create db_handler_user.make (a_path_to_db_file)

			session_manager := a_session_manager
		end

feature {NONE} -- Private attributes

	db_handler_project : DB_HANDLER_PROJECT
	db_handler_sprint: DB_HANDLER_SPRINT
	db_handler_task: DB_HANDLER_TASK
	db_handler_user: DB_HANDLER_USER

	session_manager: WSF_SESSION_MANAGER


end
