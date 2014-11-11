note
	description: "This class connected provides features that query the database. Results are directly returned in JSON format."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DB

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


feature -- Data access Users

	todos: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a todo

		do
			create Result.make_array

			create db_query_statement.make ("SELECT t.id AS todoId, t.description, u.id AS userId, u.name FROM Todos As t, Users AS u WHERE t.userId = u.id;" , db)

			db_query_statement.execute (agent rows_to_json_array (?, 4, Result))
		end


	users: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a user
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM User;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 2, Result))

		end


	todos_for_user (a_user_id: NATURAL): JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a todo of user with id `a_user_id'
		do
			create Result.make_array
			create db_query_statement.make ("SELECT t.id AS todoId, t.description, u.id AS userId, u.name FROM Todos As t, Users AS u WHERE t.userId = u.id AND u.id = " + a_user_id.out + ";" , db)
			db_query_statement.execute (agent rows_to_json_array (?, 4, Result))
		end


	add_todo_for_user (a_description: STRING; a_user_id: NATURAL): JSON_OBJECT
			-- adds a new todo with the given description for the given userid
			-- returns a json object that contains the properties "todoId, description, userId, name" for the newly added todo
		local
			l_new_id: INTEGER_64
		do
				-- create the result object, in this case an empty JSON_OBJECT
			create Result.make

				-- construct the insert statement based on the provided arguments
			create db_insert_statement.make ("INSERT INTO Todos(description, userId) VALUES ('" + a_description + "', '" + a_user_id.out + "');", db)
				-- execute the statement
			db_insert_statement.execute

			if db_insert_statement.has_error then
				print("Error while inserting a new Todo")
				-- TODO: should have more error handling here, e.g. have a return value set to false
			else
					-- get the id of the row that was added to the Todos table
				l_new_id := db_insert_statement.last_row_id

					-- fetch the entry from the database
				create db_query_statement.make("SELECT t.id as todoId, t.description, t.userId, u.name FROM Todos as t, Users as u WHERE t.userId = u.id AND t.id = " + l_new_id.out + ";", db)
				db_query_statement.execute (agent row_to_json_object(?, 4, Result))
			end

		end


	remove_todo (a_todo_id: NATURAL)
			-- removes the todo with the given id
		do
			create db_modify_statement.make ("DELETE FROM Todos WHERE id=" + a_todo_id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a Todo")
					-- TODO: we probably want to return something if there's an error
			end
		end


	add_user (name,lastname,email,password,rol,active: STRING)
			-- adds a new user with the given user name
		do
			create db_insert_statement.make ("INSERT INTO User(name,lastname,email,password,rol,active) VALUES ('" + name+"','"+lastname+"','"+email+"','"+password+"','"+rol+"','"+active+"');", db);
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new user")
			end
		end

feature -- Data access Projects

	projects: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a project
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Project;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 2, Result))

		end

	add_project (info: STRING)
			-- adds a new user with the given user name
		do
			create db_insert_statement.make ("INSERT INTO Project(info) VALUES ('" + info +"');", db);
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new user")
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
