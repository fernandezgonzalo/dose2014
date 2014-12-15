note
	description: "Functionality for database operations."
	author: "ar"
	date: "14.11.14"


class
	DATABASE


inherit
	JSON_HELPER


create
	make


feature {NONE} -- Initialization

	make (a_path_to_db_file: STRING)
			-- Creation procedure to get a connection to the database at 'a_path_to_db_file'.
		require
			valid_file: a_path_to_db_file /= Void and not a_path_to_db_file.is_empty
		do
			create db.make_open_read_write (a_path_to_db_file)
		end


feature {NONE} -- Attributes

	db: SQLITE_DATABASE
		-- the database

	db_query_statement: SQLITE_QUERY_STATEMENT
		-- an sql query statement for the db

	db_insert_statement: SQLITE_INSERT_STATEMENT
		-- an sql insert statement for the db

	db_modify_statement: SQLITE_MODIFY_STATEMENT
		-- other sql modification statment for the db, e.g. DELETE


feature -- Data access

	query_single_row (a_statement: STRING; arguments: ITERABLE [ANY]): JSON_OBJECT
			-- Fetch a single row from the database (usually by id).
			-- Warning: If arguments is Void, this could lead to sql-injection attacks if user input was concatenated into the statement!
		do
			create Result.make
			create db_query_statement.make (a_statement + ";", db)

			if arguments /= Void then
					-- The statement has arguments to be protected against sql-injections.
				db_query_statement.execute_with_arguments(agent row_to_json_object(?, Result), arguments)

			else
					-- The statement has no arguments.
				db_query_statement.execute(agent row_to_json_object(?, Result))
			end
		end


	query_rows (a_statement: STRING; arguments: ITERABLE [ANY]): JSON_ARRAY
			-- Fetch multiple rows from the database.
			-- Returns a json-array containing an entry for each found row (may be empty if none was found).
			-- Warning: If arguments is Void, this could lead to sql-injection attacks if user input was concatenated into the statement!
		do
			create Result.make_array
			create db_query_statement.make (a_statement + ";", db)
			if arguments /= Void then
					-- The statement has arguments to be protected against sql-injections.
				db_query_statement.execute_with_arguments(agent rows_to_json_array(?, Result), arguments)

			else
					-- The statement has no arguments.
				db_query_statement.execute(agent rows_to_json_array(?, Result))
			end
		end


	query_id_list (a_statement: STRING; arguments: ITERABLE [ANY]): JSON_ARRAY
			-- Fetch multiple ids from the database.
			-- Returns a json-array containing an entry for each found id (may be empty if none was found).
		do
			create Result.make_array
			create db_query_statement.make (a_statement + ";", db)
			db_query_statement.execute_with_arguments(agent rows_to_json_value_array(?, Result), arguments)
		end


	insert(a_statement: STRING; a_arguments: ITERABLE [ANY]): INTEGER_64
			-- Execute an insert statement to insert new data into the database.
			-- Returns the id of the inserted resource in case of success, otherwise -1.
			-- Warning: If arguments is Void, this could lead to sql-injection attacks if user input was concatenated into the statement!
		do
			create db_insert_statement.make(a_statement + ";", db)
			db_insert_statement.execute_with_arguments(a_arguments)

			if db_insert_statement.has_error then
				Result := -1
			else
				Result := db_insert_statement.last_row_id
			end
		end


	update (a_statement: STRING; a_arguments: ITERABLE [ANY]): BOOLEAN
			-- Execute an insert statement to insert new data into the database.
			-- Returns true in case of success, otherwise false.
		do
			create db_modify_statement.make(a_statement + ";", db)

			if a_arguments /= Void then
					-- The statement has arguments to be protected against sql-injections.
				db_modify_statement.execute_with_arguments(a_arguments)

			else
					-- The statement has no arguments.
				db_modify_statement.execute
			end
			Result := not db_modify_statement.has_error
		end


	delete_with_primary_key (id: STRING; table_name: STRING): BOOLEAN
			-- Delete the resource with primary key 'id' from table with name 'table_name'.
		do
			create db_modify_statement.make ("DELETE FROM " + table_name + " WHERE id=?;", db)
			db_modify_statement.execute_with_arguments (<<id>>)
			Result := not db_modify_statement.has_error
		end


	delete (a_statement: STRING; a_arguments: ITERABLE [ANY]): BOOLEAN
			-- Execute a delete statement to delete some data from the database.
		do
			create db_modify_statement.make(a_statement + ";", db)
			db_modify_statement.execute_with_arguments (a_arguments)
			Result := not db_modify_statement.has_error
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

			create db_query_statement.make ("SELECT * FROM users WHERE email=? AND password=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_user_name, a_password>>)


			if l_query_result_cursor.after then
					-- there are no rows in the result of the query, thus no user with that password exits
				Result.has_user := False
			else
					-- a user with this password exists.
				Result.has_user := True
				Result.id := l_query_result_cursor.item.value (1).out
				Result.username := l_query_result_cursor.item.value (2).out
			end
		end


feature {NONE} -- Format helpers

	rows_to_json_value_array (a_row: SQLITE_RESULT_ROW; a_result_array: JSON_ARRAY): BOOLEAN
			-- Convert a result row of a sql query into a json array of numbers.
		do
			a_result_array.extend(create {JSON_NUMBER}.make_integer (a_row.integer_value (1)))
			Result := False
		end


	rows_to_json_array (a_row: SQLITE_RESULT_ROW; a_result_array: JSON_ARRAY): BOOLEAN
			-- given the rows of a db query as input, this function turns the rows into an JSON array of JSON objects
			-- each object has as JSON keys the db's colum name and and as JSON value the db's row value
		local
			j_obj: JSON_OBJECT
			dummy: BOOLEAN
		do
			create j_obj.make
			dummy := row_to_json_object (a_row, j_obj)
			a_result_array.extend(j_obj)
			Result := False
		end


	row_to_json_object (a_row: SQLITE_RESULT_ROW; a_result_object: JSON_OBJECT): BOOLEAN
			-- given the row of a db query as input, this function turns the row into an JSON OBJECT
			-- each object has as JSON keys the db's colum name and and as JSON value the db's row value
		local
			i: NATURAL
			column_name: STRING
			key: JSON_STRING
		do
			from
				i := 1
			until
				i > a_row.count
			loop
				column_name := a_row.column_name(i)
				key := jkey(a_row.column_name(i))
				if a_row.is_null(i) then
						-- Set json value to json-null if this value in the database is NULL.
					a_result_object.put(create {JSON_NULL}, key)

				else
						-- The value is not NULL, so convert it to the json aequivalent.
					if a_row.type (i) = 1 then
							-- The value is an integer.
						a_result_object.put (create {JSON_NUMBER}.make_integer(a_row.integer_value (i)), key)
					else
							-- The value has to be represented as a json string (e.g. strings, dates, etc.)
						a_result_object.put (jkey(a_row.string_value(i)), key)
					end
				end
				i := i + 1
			end

			Result := False
		end
end
