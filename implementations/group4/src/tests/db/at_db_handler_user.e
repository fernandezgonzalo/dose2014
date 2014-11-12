note
	description: "[
		Tests for routines of class DB_HANDLER_USER
	]"
	author: "Rio Cuarto4 Team"
	date: "$2014-11-11$"
	revision: "$0.01$"

class
	AT_DB_HANDLER_USER

inherit
	DB_HANDLER_TEST

feature -- Test routines

	add_user_test
			-- Test for routine add
		local
			user : USER
			db_handler : DB_HANDLER_USER
			db_modify_statement: SQLITE_MODIFY_STATEMENT
		do
			create user.make ("email@email.com", "Name", "pass")
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")

			db_handler.add(user)
				-- assert when the user was successfully added.
			assert ("User successfully added", not db_handler.db_insert_statement.has_error)

				-- remove the user added for test
			db_modify_statement := db_handler.db_modify_statement
			create db_modify_statement.make("DELETE FROM Users where id="+db_handler.db_insert_statement.last_row_id.out+";",db_handler.db)
			db_modify_statement.execute

		end

	update_user_test
			-- Test for routine update
		local
			user : USER
			db_handler : DB_HANDLER_USER
			db_modify_statement : SQLITE_MODIFY_STATEMENT
		do
			create user.make("email@email.com","Name","pass")
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")
				-- add user in database
			db_handler.add(user)

			user.set_user_name("NewName")
				-- update the user
			db_handler.update(db_handler.db_insert_statement.last_row_id.to_natural_32,user)
				-- assert when the user was successfully updated.
			assert("User successfully updated", not db_handler.db_modify_statement.has_error)

				-- remove the user added for test
			db_modify_statement := db_handler.db_modify_statement
			create db_modify_statement.make("DELETE FROM Users where id="+db_handler.db_insert_statement.last_row_id.out+";",db_handler.db)
			db_modify_statement.execute

		end

end


