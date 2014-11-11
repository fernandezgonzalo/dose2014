note
	description: "This class connected provides features that query the database. Results are directly returned in JSON format."
	author: "Guido Giovannini"
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

	search_all_users: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a user
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM User;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 2, Result))

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


	remove_user (a_todo_id: NATURAL)
			-- removes the todo with the given id
		do
			create db_modify_statement.make ("DELETE FROM Todos WHERE id=" + a_todo_id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a Todo")
					-- TODO: we probably want to return something if there's an error
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

		do
			create db_insert_statement.make ("INSERT INTO Project(info) VALUES ('" + info +"');", db);
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new project")
			end
		end

feature -- Data access RolProjects

	rol_projects: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a RolProject
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM RolProject;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 2, Result))

		end

	add_rol_project (type: STRING)

		do
			create db_insert_statement.make ("INSERT INTO RolProject(type) VALUES ('" + type +"');", db);
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new Rol Project")
			end
		end

feature -- Data access UserProjects

	user_projects: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a UserProject
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM UserProject;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 2, Result))

		end

	add_user_project (id_user, id_project: STRING)

		do
			create db_insert_statement.make ("INSERT INTO RolProject(id_user, id_project) VALUES ('" + id_user +"','"+id_project+"');", db);
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new UserProject")
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
