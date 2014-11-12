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

	find_by_id_existent_user_test
			-- Test for routine find_by_id with existent user id.
		local
			db_handler : DB_HANDLER_USER
			json_result : JSON_OBJECT
		do
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")

			json_result := db_handler.find_by_id (1)

				-- correct attributes
			assert("Correct user_name ",json_result.item ("user_name").debug_output.is_equal("name"))
			assert("Correct email ", json_result.item ("email").debug_output.is_equal("mail"))
			assert("Correct is_active ", json_result.item("is_active").debug_output.is_equal("1"))
			assert("Correct password", json_result.item ("password").debug_output.is_equal("pass"))
		end

	find_by_id_unexistent_user_test
			-- Test for routine find_by_id with unexistent user id
		local
			db_handler : DB_HANDLER_USER
			json_result : JSON_OBJECT
		do
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")
			json_result := db_handler.find_by_id (100)

			assert("User not found", json_result.is_empty)
		end

	add_user_test
			-- Test for routine add
		local
			user : USER
			db_handler : DB_HANDLER_USER
		do
			create user.make ("email@email.com", "Name", "pass")
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")

			db_handler.db.begin_transaction (true)
			db_handler.add(user)

				-- assert when the user was successfully added.
			assert ("User successfully added", not db_handler.db_insert_statement.has_error)

				-- remove the user added for test
			db_handler.db.rollback
		end

	update_user_test
			-- Test for routine update
		local
			user : USER
			db_handler : DB_HANDLER_USER
		do
			create user.make("email@email.com","Name","pass")
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")

			db_handler.db.begin_transaction (true)
			db_handler.add(user)

			user.set_user_name("NewName")
				-- update the user in database
			db_handler.update(db_handler.db_insert_statement.last_row_id.to_natural_32,user)
				-- assert when the user was successfully updated.
			assert("User successfully updated", not db_handler.db_modify_statement.has_error)

				-- remove the user added for test
			db_handler.db.rollback
		end

	remove_user_test
		-- Test for routine remove
		local
			user : USER
			db_handler : DB_HANDLER_USER
			json_result : JSON_OBJECT
		do
			create user.make("email@email.com","Name","pass")
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")

			db_handler.db.begin_transaction (true)
			db_handler.add (user)
			db_handler.remove (db_handler.db_insert_statement.last_row_id.to_natural_32)

				-- assert when the user was successfully removed (The attribute is_active must be false).
			json_result := db_handler.find_by_id (db_handler.db_insert_statement.last_row_id.to_natural_32)
			assert("User inactive ", json_result.item ("is_active").debug_output.is_equal("0") )

				-- remove the user added for test
			db_handler.db.rollback
		end

end


