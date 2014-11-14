note
	description: "This class connected provides features that query the database (project). Results are directly returned in JSON format."
	author: "Nico Orcasitas"
	date: "$Date$"
	revision: "$Revision$"

class
	CRUD_PROJECT


create
	make

	feature {NONE}

	make (database:SQLITE_DATABASE)
			-- Creation procedure
	do
		create	 db.make(database.source)
		db.open_read_write
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

feature {NONE} -- Format helpers

	rows_to_json_array (a_row: SQLITE_RESULT_ROW; a_num_columns: NATURAL; a_result_array: JSON_ARRAY): BOOLEAN
			-- given the rows of a db query as input, this function turns the rows into an JSON array of JSON objects
			-- each object has as JSON keys the db's colum name and and as JSON value the db's row value
		local
			j_obj: JSON_OBJECT
					i: NATURAL
					aux: STRING;

		do
		-- create a JSON object; it will hold the values "id", "description", "user" for ech eb table entry
				create j_obj.make

				from
					i := 1
				until
					i > a_num_columns
				loop

					if  a_row.is_null (i) then
						aux:= "";
					else
						aux:=a_row.string_value (i)
					end
						j_obj.put (create {JSON_STRING}.make_json (aux), create{JSON_STRING}.make_json (a_row.column_name (i)))
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
			aux: STRING;
		do
			from
				i := 1
			until
				i > a_num_columns
			loop
				if  a_row.is_null (i) then
						aux:= "";
					else
						aux:=a_row.string_value (i)
					end
						a_result_object.put (create {JSON_STRING}.make_json (aux), create{JSON_STRING}.make_json (a_row.column_name (i)))
						i := i + 1
			end

			Result := False
		end

feature -- Data access


	projects: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a project
			--returns all projects
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM project;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 5, Result))

		end

	project_by_id(id : NATURAL): JSON_OBJECT
			-- returns a JSON_OBJECT  that represents a project identified by id

		do
			create Result.make
			create db_query_statement.make ("SELECT * FROM project WHERE id = '" + id.out + "' ;", db)
			db_query_statement.execute (agent row_to_json_object (?, 5, Result))

		end

	remove_project_by_id (id: NATURAL): BOOLEAN
			-- removes the project identified by id
		do
			create db_modify_statement.make ("DELETE FROM project WHERE id= '" + id.out + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
				print("Error while deleting a poject")
				Result := false

					-- TODO: we probably want to return something if there's an error
			else
				Result:=true;
			end
		end

	add_project (name:STRING; deadline:STRING; client_name:STRING;id_user:NATURAL ):TUPLE [was_created:BOOLEAN; id: INTEGER]
		local
					l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			-- adds a new user with the given user name, password,email, name
		do
			create Result
			create db_insert_statement.make ("INSERT INTO project(name,deadline,client_name,id_user) VALUES ('" + name +"', '" +deadline  +"', '" +  client_name  +"', '" + id_user.out + "');", db)
			db_insert_statement.execute
			if db_insert_statement.has_error or db_insert_statement.changes_count=0 then
				print("Error while inserting a new project")
				Result.id:= -1 ;
				Result.was_created:=false;
			else
				create db_query_statement.make ("SELECT * FROM project WHERE name=? AND deadline=? AND client_name=? AND id_user=?  ;", db)
				l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<name, deadline,client_name,id_user>>)
				Result.id:= l_query_result_cursor.item.integer_value (1)
				Result.was_created:= true;
			end
		end

	update_project_name (name:STRING; id: NATURAL): BOOLEAN
			-- updates the name of the project identified by id,
		do
			create db_modify_statement.make ("UPDATE project SET name='"+ name+"' WHERE id= '" + id.out + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
				print("Error while updating a project")
				Result:= false;
					-- TODO: we probably want to return something if there's an error
			else
				Result:= true;
			end
		end

	update_project_deadline (deadline: STRING; id: NATURAL): BOOLEAN
			-- updates the deadline of the project identified by id,
		do
			create db_modify_statement.make ("UPDATE project SET deadline= '"+ deadline+"' WHERE id= '" + id.out + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
				print("Error while updating a project")
				Result:= false;
					-- TODO: we probably want to return something if there's an error
			else
				Result:= true;
			end
		end

	update_project_client_name (client_name: STRING; id: NATURAL): BOOLEAN
			-- updates the client_id of the project identified by id,
		do
			create db_modify_statement.make ("UPDATE project SET client_name= '"+ client_name+ "' WHERE id= '" + id.out + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
				print("Error while updating a project")
				Result:= false;
					-- TODO: we probably want to return something if there's an error
			else
				Result:= true;
			end
		end

	number_of_tasks_in_project(id_project: NATURAL): JSON_OBJECT
	--RETURNS total number of tasks in the project
	do
		create Result.make
		create db_query_statement.make ("SELECT id_project,COUNT(*) FROM task WHERE id_project = '"+id_project.out+"';", db)
		db_query_statement.execute (agent row_to_json_object (?, 2, Result))
	end

	number_of_finshed_tasks(id_project: NATURAL): JSON_OBJECT
	--RETURNS total number of finished tasks in the project identified by id_project
	do
		create Result.make
		create db_query_statement.make ("SELECT id_project,COUNT(*) FROM task WHERE id_project = '"+id_project.out+" 'AND status = 'Finished';", db)
		db_query_statement.execute (agent row_to_json_object (?, 2, Result))
	end

	number_of_stopped_tasks(id_project: NATURAL): JSON_OBJECT
	--RETURNS total number of stopped tasks in the project identified by id_project
	do
		create Result.make
		create db_query_statement.make ("SELECT id_project,COUNT(*) FROM task WHERE id_project = '"+id_project.out+" ' AND status = 'Stopped';", db)
		db_query_statement.execute (agent row_to_json_object(?, 2, Result))
	end


	projects_of_the_user(id: NATURAL): JSON_ARRAY
	do
		create Result.make_array
		create db_query_statement.make ("SELECT * FROM project  WHERE id_user = '"+id.out+ "';", db)
		db_query_statement.execute (agent rows_to_json_array (?, 5, Result))
		end


--	number_of_tasks_group_by_user(id_project: NATURAL): JSON_ARRAY
	--RETURNS total number of tasks in the project identified by id_project
--	do
--		create Result.make_array
--		create db_query_statement.make ("SELECT id_project,COUNT(*),id_user_assigned FROM task WHERE id_project = '"+id_project.out+"' GROUP BY id_user_assigned;", db)
--		db_query_statement.execute (agent rows_to_json_array (?, 3, Result))
--	end

end
