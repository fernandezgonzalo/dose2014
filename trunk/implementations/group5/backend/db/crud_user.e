note
	description: "This class connected provides features that query the database (user). Results are directly returned in JSON format."
	author: "Nico orcasitas"
	date: "$11/11/2014$"
	revision: "$Revision$"

class
	CRUD_USER

create
	make

	feature {NONE}

	make (a_path_to_db_file: STRING)
			-- Creation procedure
		require
			valid_file: a_path_to_db_file /= Void and not a_path_to_db_file.is_empty
		do
			create db.make_open_read_write (a_path_to_db_file)
		end



feature {NONE} -- Format helpers

	rows_to_json_array (a_row: SQLITE_RESULT_ROW; a_num_columns: NATURAL; a_result_array: JSON_ARRAY): BOOLEAN
			-- given the rows of a db query as input, this function turns the rows into an JSON array of JSON objects
			-- each object has as JSON keys the db's colum name and and as JSON value the db's row value
		local
			j_obj: JSON_OBJECT
			i: NATURAL
		do
				-- create a JSON object; it will hold the values "id", "description", "user" for ech eb table entry
			create j_obj.make

			from
				i := 1
			until
				i > a_num_columns
			loop
				j_obj.put (create {JSON_STRING}.make_json (a_row.string_value(i)), create{JSON_STRING}.make_json (a_row.column_name (i)))
				i := i + 1
			end

			a_result_array.extend(j_obj)

			Result := False
		end


	row_to_json_object (a_row: SQLITE_RESULT_ROW; a_num_columns: NATURAL; a_result_object: JSON_OBJECT): BOOLEAN
			-- given the row of a db query as input, this function turns the row into an JSON OBJECT
			-- each object has as JSON keys the db's colum name and and as JSON value the db's row value
		local
			i: NATURAL
		do
			from
				i := 1
			until
				i > a_num_columns
			loop
				a_result_object.put (create {JSON_STRING}.make_json (a_row.string_value(i)), create{JSON_STRING}.make_json (a_row.column_name (i)))
				i := i + 1
			end

			Result := False
		end


feature -- Data access


	users: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a user
			--returns all users
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM user;;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 6, Result))

		end

	user_by_email(email : STRING): JSON_OBJECT
			-- returns a JSON_OBJECT  that represents a user identified by email

		do
			create Result.make
			create db_query_statement.make ("SELECT * FROM user WHERE email = " + email + ";", db)
			db_query_statement.execute (agent row_to_json_object (?, 6, Result))

		end

	remove_user_by_email (email: STRING)
			-- removes the user identified by email
		do
			create db_modify_statement.make ("DELETE FROM user WHERE email=" + email + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a Todo")
					-- TODO: we probably want to return something if there's an error
			end
		end

	add_user (email: STRING;username: STRING ;password: STRING; name: STRING )
			-- adds a new user with the given user name, password,email, name
		do
			create db_insert_statement.make ("INSERT INTO user (email,username,password,name) VALUES ('" + email +"', '" +username  +"', '" +  password  +"', '" + name + "');", db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new user")
			end
		end

--	update_user_photo (email: STRING)
--			-- updates the picture of the user identified by email,
--		do
--			create db_modify_statement.make ("UPDATE user SET photo= foto nueva WHERE email=" + email + ";", db)
--			db_modify_statement.execute
--			if db_modify_statement.has_error then
--				print("Error while deleting an user")
--					-- TODO: we probably want to return something if there's an error
--			end
--		end

	update_user_password (email: STRING; new_pass: STRING)
			-- updates the password of the user identified by email,
		do
			create db_modify_statement.make ("UPDATE user SET password= '"+ new_pass+"' WHERE email=" + email + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating an user")
					-- TODO: we probably want to return something if there's an error
			end
		end

	update_user_name (email: STRING; new_name: STRING)
			-- updates the name of the user identified by email,
		do
			create db_modify_statement.make ("UPDATE user SET name= '"+ new_name+ "' WHERE email=" + email + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating an user")
					-- TODO: we probably want to return something if there's an error
			end
		end

	update_user_email (email: STRING; new_email: STRING)
			-- updates the email of the user identified by email,
		do
			create db_modify_statement.make ("UPDATE user SET email= '"+ new_email+ "' WHERE email=" + email + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating an user")
					-- TODO: we probably want to return something if there's an error
			end
		end

	update_user_username (email: STRING; new_username: STRING)
			-- updates the username of the user identified by email,
		do
			create db_modify_statement.make ("UPDATE user SET username= '"+ new_username+ "' WHERE email=" + email + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating an user")
					-- TODO: we probably want to return something if there's an error
			end
		end

feature {NONE}--login


	has_user_with_password (email, a_password: STRING): TUPLE[has_user: BOOLEAN; email,username,password,name:STRING]
			-- checks if a user with given username and password exists
			-- if yes, the result tuple value "has_user" will be true and "id" ,"email","username","password", and "name" will be set
			-- otherwise, "has_user" will be false and "id" and "username" will not be set
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
				-- create a result object
			create Result

			create db_query_statement.make ("SELECT * FROM user WHERE email=? AND password=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_user_name, a_password>>)


			if l_query_result_cursor.after then
					-- there are no rows in the result of the query, thus no user with that password exits
				print("Did not find a user with email '" + email  + "' and password '" + a_password + "' in the dataase.%N")
				Result.has_user := False
			else
				print("Found a user email '" + email + "' and password '" + a_password + "' in the database.%N")
				Result.has_user := True
				Result.email := l_query_result_cursor.item.value (1).out
				Result.username := l_query_result_cursor.item.value (2).out
				Result.password := l_query_result_cursor.item.value (3).out
				Result.name := l_query_result_cursor.item.value (4).out
			end
		end

	last_login(email:STRING): JSON_OBJECT
	--returns the username and the last login of the user identified by email
		do
			create Result.make
			create db_query_statement.make ("SELECT username,last_login FROM user WHERE email = " + email + ";", db)
			db_query_statement.execute (agent row_to_json_object (?, 6, Result))

		end

feature {NONE}

	db: SQLITE_DATABASE
		-- the database

	db_query_statement: SQLITE_QUERY_STATEMENT
		-- an sql query statement for the db

	db_insert_statement: SQLITE_INSERT_STATEMENT
		-- an sql insert statement for the db

	db_modify_statement: SQLITE_MODIFY_STATEMENT
		-- other sql modification statment for the db, e.g. DELETE

end
