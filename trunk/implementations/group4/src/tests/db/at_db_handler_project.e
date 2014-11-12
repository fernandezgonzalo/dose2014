note
	description: "Tests for routines in class DB_HANDLER_PROJECT"
	author: "Rio Cuarto4 Team"
	date: "$2014-11-11$"
	revision: "$0.01$"

class
	AT_DB_HANDLER_PROJECT

inherit
	DB_HANDLER_TEST

feature -- Test routines

	add_project_test
			-- Test for routine add
		local
			project : PROJECT
			db_handler : DB_HANDLER_PROJECT
			db_modify_statement: SQLITE_MODIFY_STATEMENT
		do
			create project.make ("new_name", "new_status", "new_description", 1, 1)
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")

			db_handler.add (project)
			-- assert when the project was successfully added.
			assert ("not_implemented", not db_handler.db_insert_statement.has_error)

			-- remove the project added for test
			db_modify_statement := db_handler.db_modify_statement
			create db_modify_statement.make("DELETE FROM Projects where id= "+db_handler.db_insert_statement.last_row_id.out+";",db_handler.db)
			db_modify_statement.execute

		end

end


