note
	description: "Summary description for {COFFEE_DB}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_DB

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


	add_user (a_email: STRING a_password: STRING a_first_name: STRING a_last_name: STRING) : BOOLEAN
			-- adds a new user with the given user name
		do
			create db_insert_statement.make ("INSERT INTO User(email,password,first_name,last_name) VALUES ('" + a_email + "', '" + a_password + "', '" + a_first_name + "', '" + a_last_name + "');", db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new user")
				Result := false
			end
			Result := true
		end

	delete_user (a_email: STRING) : BOOLEAN

		do
			create db_modify_statement.make ("DELETE FROM User WHERE email='" + a_email + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a user")
				RESULT := false
			end
			RESULT := true

		end

	update_user(a_id: INTEGER a_email: STRING a_password: STRING a_first_name: STRING a_last_name: STRING) : BOOLEAN

	do
		create db_modify_statement.make ("UPDATE User SET email= + '" + a_email + "', password= + '" + a_password + "', first_name= + '" + a_first_name + "', last_name= + '" + a_last_name + "' WHERE id=" + a_id.out + ";", db)
		db_modify_statement.execute
		if db_modify_statement.has_error then
			print("Error while updating a user")
			RESULT := false
		end
		RESULT := true

	end

	get_user_id(a_email: STRING) : INTEGER

	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR

	do
			create db_query_statement.make ("SELECT id FROM User WHERE email=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_email>>)

			if l_query_result_cursor.after then
				Result := -1
			else
				Result := l_query_result_cursor.item.value(1).out.to_integer
			end
	end

	create_project(a_name: STRING a_description: STRING a_manager_id: STRING) : BOOLEAN
	do
		create db_insert_statement.make ("INSERT INTO Project(name,description,manager_id) VALUES ('" + a_name + "', '" + a_description + "', " + a_manager_id + ");", db)
		db_insert_statement.execute
		if db_insert_statement.has_error then
			print("Error while creating a project")
			RESULT := false
		end
		RESULT := true

	end

	delete_project(a_id: STRING) : BOOLEAN
	do
			create db_modify_statement.make ("DELETE FROM Project WHERE id=" + a_id + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a project")
				RESULT := false
			end
			RESULT := true

	end

	update_project(a_id: STRING a_name: STRING a_description: STRING a_manager_id: STRING) : BOOLEAN
	do
		create db_modify_statement.make ("UPDATE Project SET name= + '" + a_name + "', description = + '" + a_description + "', manager_id= + " + a_manager_id + " WHERE id=" + a_id + ";", db)
		db_modify_statement.execute
		if db_modify_statement.has_error then
			print("Error while updating a project")
			RESULT := false
		end
		RESULT := true

	end

	get_project(a_id: STRING) : TUPLE[id: INTEGER; name: STRING; description: STRING; manager_id: INTEGER]

	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
	do
 			create Result
			create db_query_statement.make ("SELECT * FROM Project WHERE id=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_id>>)

			if l_query_result_cursor.after then
					-- there are no rows in the result of the query, thus no user with that password exits
				print("No project found.%N")
			else
				Result.id := l_query_result_cursor.item.value (1).out.to_integer
				Result.name := l_query_result_cursor.item.value (2).out
				Result.description := l_query_result_cursor.item.value (3).out
				Result.manager_id := l_query_result_cursor.item.value (4).out.to_integer
			end

	end


	has_user_with_password (a_user_name, a_password: STRING): TUPLE[has_user: BOOLEAN; id: STRING; username: STRING]
			-- checks if a user with given username and password exists
			-- if yes, the result tuple value "has_user" will be true and "id" and "username" will be set
			-- otherwise, "has_user" will be false and "id" and "username" will not be set
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
				-- create a result object
 			create Result
			create db_query_statement.make ("SELECT * FROM User WHERE email=? AND password=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_user_name, a_password>>)

			if l_query_result_cursor.after then
					-- there are no rows in the result of the query, thus no user with that password exits
				print("Did not find a user with name '" + a_user_name  + "' and password '" + a_password + "' in the dataase.%N")
				Result.has_user := False
			else
				print("Found a user name '" + a_user_name + "' and password '" + a_password + "' in the database.%N")
				Result.has_user := True
				Result.id := l_query_result_cursor.item.value (1).out
				Result.username := l_query_result_cursor.item.value (2).out
			end
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
