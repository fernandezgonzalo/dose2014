note
	description: "This class manages the database operations that concerns tasks."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-08$"
	revision: "$0.01$"

class
	DB_HANDLER_TASK

inherit
	CASD_DB

create
	make

feature -- Data access

	find_all : JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a task
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Tasks;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 11, Result))
		end

	find_all_sub_tasks (a_super_task_id: NATURAL) : JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a subtask of the desired task
		do
			create Result.make_array
			-- a super task has itself as a super task, so we exclude that value from the subtasks.
			create db_query_statement.make ("SELECT * FROM Tasks WHERE super_task_id=" + a_super_task_id.out + " AND (NOT " + a_super_task_id.out + " = id) ;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 11, Result))
		end

	find_by_id (a_task_id : NATURAL) : JSON_OBJECT
			-- returns a JSON_OBJECT that represents a task that corresponds to the given id
		do
			create Result.make
			create db_query_statement.make("SELECT * FROM Tasks WHERE id=" + a_task_id.out + ";" ,db)
			db_query_statement.execute (agent row_to_json_object (?, 11, Result))
		end

	find_by_project_id (a_project_id : NATURAL) : JSON_OBJECT
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a task of the given project
		do
			create Result.make
			create db_query_statement.make("SELECT * FROM Tasks WHERE project_id=" + a_project_id.out + ";" ,db)
			db_query_statement.execute (agent row_to_json_object (?, 11, Result))
		end

	add_super(a_task: TASK)
			-- Adds a task
		do
			create db_insert_statement.make ("INSERT INTO Tasks(priority,position,type,description,title,points,sprint_id,project_id,user_id) VALUES ('" + a_task.priority + "','" + a_task.position + "','" + a_task.type + "','" + a_task.description + "','" + a_task.title + "','" + a_task.points.out + "','" + a_task.sprint_id.out + "','" + a_task.project_id.out + "','" + a_task.user_id.out + "');", db);
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new topic")
			end
			-- After creating a super task, the super_task_id value must be set properly.
			-- Here we use the id of the task just created.
			create db_modify_statement.make ("UPDATE Tasks SET super_task_id = " + db_insert_statement.last_row_id.out + " WHERE id = " + db_insert_statement.last_row_id.out + ";" , db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while inserting a new topic. (super_task_id not set)")
			end
		end

	add_sub(a_task: TASK)
			-- Adds a sub task
		do
			create db_insert_statement.make ("INSERT INTO Tasks(priority,position,type,description,title,points,super_task_id,sprint_id,project_id,user_id) VALUES ('" + a_task.priority + "','" +
																																						       a_task.position + "','" +
																																						       a_task.type + "','" +
																																						       a_task.description + "','" +
																																						       a_task.title + "','" +
																																						       a_task.points.out + "','" +
																																						       a_task.super_task_id.out + "','" +
																																						       a_task.sprint_id.out + "','" +
																																						       a_task.project_id.out + "','" +
																																						       a_task.user_id.out + "');", db)
			io.put_string (db_insert_statement.string)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new topic")
			end
		end

	update (task_id : NATURAL; task: TASK)
			-- Update a task
		do
				create db_modify_statement.make ("UPDATE Tasks SET priority = '"+ task.priority +"',"+
																  "position = '"+ task.position +"',"+
																  "type = '"+ task.type +"',"+
																  "description = '"+ task.description +"',"+
																  "title = '"+ task.title +"',"+
																  "points = '"+ task.points.out +"',"+
																  "sprint_id = '"+ task.sprint_id.out +"',"+
																  "project_id = '"+ task.project_id.out +"',"+
																  "user_id = '"+ task.user_id.out +"'"+
																  "WHERE id="+ task_id.out +";" , db)
				db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating a task")
			end
		end

	remove (task_id: NATURAL)
			-- removes the task with the given id
		do
			create db_modify_statement.make ("DELETE FROM Tasks WHERE id=" + task_id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a task")
					-- TODO: we probably want to return something if there's an error
			end
		end

end

