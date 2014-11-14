note
	description: "This class manages the database operations that concerns users."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-08$"
	revision: "$0.01$"

class
	DB_HANDLER_USER

inherit
	CASD_DB

create
	make

feature -- Data access

	find_all : JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a user
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Users;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 4, Result))

		end

	find_by_id (user_id : NATURAL) : JSON_OBJECT
			-- returns a JSON_OBJECT that represents a user that corresponds to the given id
		do
			create Result.make
			create db_query_statement.make("SELECT * FROM Users WHERE id="+ user_id.out +";" ,db)
			db_query_statement.execute (agent row_to_json_object (?, 5, Result))
		end

	add (user : USER)
			-- adds a new user
		do
			create db_insert_statement.make ("INSERT INTO Users(user_name,is_active,email,password) "+
											"VALUES ('" + user.username + "','"+ user.is_active.to_integer.out +"',"+
											"'"+ user.email +"','"+ user.password +"');", db);
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new user")
			end
		end

	update (user_id : NATURAL;user: USER)
			-- update a user
		do
			create db_modify_statement.make ("UPDATE Users SET user_name = '"+ user.username +"',"+
															  "email = '"+ user.email +"',"+
															  "password = '"+ user.password +"'"+
															  "WHERE id="+ user_id.out +";" , db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating a user")
			end
		end

	remove (user_id: NATURAL)
			-- removes the user with the given id
		do
			create db_modify_statement.make ("UPDATE Users SET is_active = 0 WHERE id=" + user_id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a User")
					-- TODO: we probably want to return something if there's an error
			end
		end

	has_user_with_password (a_user_name, a_password: STRING): TUPLE[has_user: BOOLEAN; user_id: STRING; user_name: STRING]
			-- checks if a user with given username and password exists
			-- if yes, the result tuple value "has_user" will be true and "user_id" and "user_name" will be set
			-- otherwise, "has_user" will be false and "id" and "username" will not be set
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
				-- create a result object
			create Result

			create db_query_statement.make ("SELECT * FROM Users WHERE user_name=? AND password=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_user_name, a_password>>)


			if l_query_result_cursor.after then
					-- there are no rows in the result of the query, thus no user with that password exits
				print("Did not find a user with name '" + a_user_name  + "' and password '" + a_password + "' in the dataase.%N")
				Result.has_user := False
			else
				print("Found a user name '" + a_user_name + "' and password '" + a_password + "' in the database.%N")
				Result.has_user := True
				Result.user_id := l_query_result_cursor.item.value (1).out
				Result.user_name := l_query_result_cursor.item.value (2).out
			end
		end

end
