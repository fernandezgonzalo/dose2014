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

	make (database:SQLITE_DATABASE)
			-- Creation procedure
	do
		db:= database
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
			create db_query_statement.make ("SELECT * FROM task WHERE id = '" + id.out + "';", db)
			db_query_statement.execute (agent row_to_json_object (?, 10, Result))

		end

	task_by_id_project(id : NATURAL): JSON_ARRAY
			-- returns a JSON_OBJECT  that represents a task identified by id_project

		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM task WHERE id_project = '" + id.out + "';", db)
			db_query_statement.execute (agent rows_to_json_array (?, 10, Result))

		end

	remove_task_by_id (id: NATURAL): BOOLEAN
			-- removes the task identified by id
		do
			create db_modify_statement.make ("DELETE FROM task WHERE id= '" + id.out + "' ;", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while deleting a task")
				Result:= false
					-- TODO: we probably want to return something if there's an error
			else
				Result:=true;
			end
		end

	add_task (title:STRING;description:STRING;status:STRING;priority:STRING;deadline:STRING;estimation:STRING;id_user_creator:NATURAL;id_user_assigned:NATURAL;id_project: NATURAL ): TUPLE [was_created:BOOLEAN; id: INTEGER]
		local
				l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			-- adds a new task with the given title, description,status, priority, deadline, estimation, id_user_creator, id_user assigned, id_project
		do
			create Result
			create db_insert_statement.make (" INSERT INTO task (title,description,status,priority,deadline,estimation,id_user_creator,id_user_assigned,id_project) VALUES ('" + title+"','"+description+"','"+status+"','"+priority+"','"+deadline+"','"+estimation+"','"+id_user_creator.out+"','"+id_user_assigned.out+"','"+id_project.out + "');", db)
			db_insert_statement.execute
			if db_insert_statement.has_error or db_insert_statement.changes_count=0 then
			--	print("Error while inserting a new task")
				Result.id:= -1 ;
				Result.was_created:=false;
			else
				create db_query_statement.make ("SELECT * FROM task  WHERE title =? AND description=? AND status=? AND priority=? AND deadline=? AND estimation=? AND id_user_creator=? AND id_user_assigned=? AND id_project=? ;", db)
				l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<title,description,status,priority,deadline,estimation,id_user_creator,id_user_assigned,id_project>>)
				Result.id:= l_query_result_cursor.item.integer_value (1)
				Result.was_created:= true;

			end
		end

	update_task_title (title:STRING; id: NATURAL): BOOLEAN
			-- updates the name of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET title= '"+ title+"' WHERE id= '" + id.out + "' ;", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while updating a task")
				Result:=false;
					-- TODO: we probably want to return something if there's an error
			else
				Result:=true;
			end

		end

	update_task_deadline (deadline:STRING; id: NATURAL): BOOLEAN
			-- updates the deadline of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET deadline= '"+ deadline+"' WHERE id= '" + id.out + "' ;", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while updating a task")
				Result:=false;
					-- TODO: we probably want to return something if there's an error
			else
				Result:=true;
			end
		end

	update_task_status (status:STRING; id: NATURAL): BOOLEAN
			-- updates the status of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET status= '"+ status+"' WHERE id= '" + id.out + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while updating a task")
				Result:=false;
					-- TODO: we probably want to return something if there's an error
			else
				Result:=true;
			end
		end

	update_task_priority (priority:STRING; id: NATURAL):BOOLEAN
			-- updates the priority of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET priority= '"+ priority+"' WHERE id= '" + id.out + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while updating a task")
				Result:=false;
					-- TODO: we probably want to return something if there's an error
			else
				Result:=true;
			end
		end

	update_task_description (description:STRING; id: NATURAL): BOOLEAN
			-- updates the name of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET description= '"+ description+"' WHERE id= '" + id.out + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while updating a task")
				Result:=false;
					-- TODO: we probably want to return something if there's an error
			else
				Result:=true;
			end
		end

	update_task_estimation (estimation:STRING; id: NATURAL):BOOLEAN
			-- updates the estimation of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET estimation= '"+ estimation+"' WHERE id= '" + id.out + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while updating a task")
				Result:=false;
					-- TODO: we probably want to return something if there's an error
			else
				Result:=true;
			end
		end

	update_task_id_user_assigned (id_user_assigned:NATURAL; id: NATURAL): BOOLEAN
			-- updates the id_user_assigned of the task identified by id,
		do
			create db_modify_statement.make ("UPDATE task SET id_user_assigned= '"+ id_user_assigned.out+"' WHERE id= '" + id.out + "' ;", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while updating a task")
				Result:=false;
					-- TODO: we probably want to return something if there's an error
			else
				Result:=true;
			end
		end

	planned_task_of_the_user(id_user:NATURAL) :JSON_ARRAY
	--showing the tasks that the user is assigned and are still in the doing swim lane of the projects
	do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM task WHERE id_user_assigned = '" +id_user.out+"' AND status = 'planned';", db)
			db_query_statement.execute (agent rows_to_json_array (?, 10, Result))

		end

	inprogress_task_of_the_user(id_user:NATURAL) :JSON_ARRAY
	--showing the tasks that the user is assigned and are still in the todo swim lane of the projects.

	do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM task WHERE id_user_assigned = '" +id_user.out+"' AND status = 'in progress';", db)
			db_query_statement.execute (agent rows_to_json_array (?, 10, Result))

		end

	tasks_by_status_and_id_project(status:STRING;id_project:NATURAL) :JSON_ARRAY
	--showing the tasks that the user is assigned and are still in the todo swim lane of the projects.

	do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM task WHERE id_project = '"+id_project.out+"' AND status = '"+status+"';", db)
			db_query_statement.execute (agent rows_to_json_array (?, 10, Result))

		end

		tasks_of_the_user(id: NATURAL): JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM task WHERE id_user_assigned = '"+id.out+ "';", db)
			db_query_statement.execute (agent rows_to_json_array (?, 10, Result))
			end

	project_exists (id_project : NATURAL) : BOOLEAN
	--Verify if the indicated project exist.
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			--create a result object
			create Result
			create db_query_statement.make ("SELECT * FROM project WHERE id=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments(<<id_project>>)
			if l_query_result_cursor.after then
				Result := False
			else
				Result := True
			end
		end

		user_exists(id: NATURAL): BOOLEAN
		--Verify if the indicated user exist.
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
				create Result
				create db_query_statement.make ("SELECT * FROM user WHERE id=?;", db)
				l_query_result_cursor := db_query_statement.execute_new_with_arguments(<<id>>)
				if l_query_result_cursor.after then
					Result := False
				else
					Result := True
				end
		end

	revise_all_tasks_of_the_project ( id: NATURAL)
			-- revise all tasks of the project, if all are finished, set "true" in is_finished of the project
		do
			create db_modify_statement.make ("UPDATE project SET is_finished = CASE WHEN (select count(*) from task where status = 'finished' and id_project= '"+id.out +"' )=(select count(*) from task where id_project = '"+id.out +"') THEN 1 ELSE 0 END where id = '"+id.out+"';", db)
			db_modify_statement.execute
		end

end
