note
	description: "This class connected provides features that query the database (task). Results are directly returned in JSON format."
	author: "Nico Orcasitas"
	date: "$Date$"
	revision: "$Revision$"

class
	CRUD_TASK


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


	tasks: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a task
			--returns all tasks
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM task;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 10, Result))

		end

	task_by_id(id : NATURAL): JSON_OBJECT
			-- returns a JSON_OBJECT  that represents a task identified by id

		do
			create Result.make
			create db_query_statement.make ("SELECT * FROM task WHERE id = " + id.out + ";", db)
			db_query_statement.execute (agent row_to_json_object (?, 10, Result))

		end

	task_by_id_project(id : NATURAL): JSON_OBJECT
			-- returns a JSON_OBJECT  that represents a task identified by id_project

		do
			create Result.make
			create db_query_statement.make ("SELECT * FROM task WHERE id_project = " + id.out + ";", db)
			db_query_statement.execute (agent row_to_json_object (?, 10, Result))

		end

	remove_task_by_id (id: NATURAL)
			-- removes the task identified by id
		do
			create db_modify_statement.make ("DELETE FROM task WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a task")
					-- TODO: we probably want to return something if there's an error
			end
		end

	add_task (title:STRING;description:STRING;status:STRING;priority:STRING;deadline:STRING;estimation:STRING;id_user_creator:STRING;id_user_assigned:STRING;id_project: NATURAL )
			-- adds a new task with the given title, description,status, priority, deadline, estimation, id_user_creator, id_user assigned, id_project
		do
			create db_insert_statement.make (" INSERT INTO task (title,description,status,priority,deadline,estimation,id_user_creator,id_user_assigned,id_project) VALUES ('" + title+"','"+description+"','"+status+"','"+priority+"','"+deadline+"','"+estimation+"','"+id_user_creator+"','"+id_user_assigned+"','"+id_project.out + "');", db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new task")
			end
		end

	update_task_title (title:STRING; id: NATURAL)
			-- updates the name of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET title= "+ title+" WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating a task")
					-- TODO: we probably want to return something if there's an error
			end
		end

	update_task_deadline (deadline:STRING; id: NATURAL)
			-- updates the deadline of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET deadline= "+ deadline+" WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating a task")
					-- TODO: we probably want to return something if there's an error
			end
		end

	update_task_status (status:STRING; id: NATURAL)
			-- updates the status of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET status= "+ status+" WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating a task")
					-- TODO: we probably want to return something if there's an error
			end
		end

	update_task_priority (priority:STRING; id: NATURAL)
			-- updates the priority of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET priority= "+ priority+" WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating a task")
					-- TODO: we probably want to return something if there's an error
			end
		end

	update_task_description (description:STRING; id: NATURAL)
			-- updates the name of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET description= "+ description+" WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating a task")
					-- TODO: we probably want to return something if there's an error
			end
		end

	update_task_estimation (estimation:STRING; id: NATURAL)
			-- updates the estimation of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET estimation= "+ estimation+" WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating a task")
					-- TODO: we probably want to return something if there's an error
			end
		end

	update_task_id_user_assigned (id_user_assigned:STRING; id: NATURAL)
			-- updates the id_user_assigned of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET id_user_assigned= "+ id_user_assigned+" WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating a task")
					-- TODO: we probably want to return something if there's an error
			end
		end

	planned_task_of_the_user(email:STRING) :JSON_ARRAY
	--showing the tasks that the user is assigned and are still in the doing swim lane of the projects
	do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM task WHERE id_user = '" +email+"' AND status = 'Planned';", db)
			db_query_statement.execute (agent rows_to_json_array (?, 10, Result))

		end

	inprogress_task_of_the_user(email:STRING) :JSON_ARRAY
	--showing the tasks that the user is assigned and are still in the todo swim lane of the projects.

	do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM task WHERE id_user = '" +email+"' AND status = 'In progress';", db)
			db_query_statement.execute (agent rows_to_json_array (?, 10, Result))

		end

	tasks_by_status_and_id_project(status:STRING;id_project:NATURAL) :JSON_ARRAY
	--showing the tasks that the user is assigned and are still in the todo swim lane of the projects.

	do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM task WHERE id_project = '"+id_project.out+"' AND status = '"+status+"';", db)
			db_query_statement.execute (agent rows_to_json_array (?, 10, Result))

		end


end
