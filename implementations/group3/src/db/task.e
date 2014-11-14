note
	description: "Summary description for {TASK}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"
class
	TASK
inherit
	DB_MAPPER_BASE
create
	make
feature
	get_all: JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM tasks;" , db)

			db_query_statement.execute (agent rows_to_json_array (?, 4, Result))
		end

	new(description: STRING user_id: NATURAL): JSON_ARRAY
		do
			create db_insert_statement.make ("INSERT INTO tasks(description, user_id) VALUES ('" + description + "'," + user_id.out + ");", db);

			db_insert_statement.execute

			if db_insert_statement.has_error then
				print("Error while inserting a new task")
			end
		end

	delete(project_id: NATURAL)
		do
			create db_modify_statement.make ("DELETE FROM tasks WHERE id=" + project_id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a Project")
			end
		end

	by_user(user_id: NATURAL): JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make("SELECT * FROM tasks WHERE user_id =" + user_id.out + ";" , db)

			db_query_statement.execute(agent rows_to_json_array(?, 4, Result))
		end

	find(task_id: NATURAL): JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make("SELECT * FROM tasks WHERE id =" + task_id.out + ";" , db)

			db_query_statement.execute(agent rows_to_json_array(?, 4, Result))
		end

	update(task_id: NATURAL): JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make("UPDATE projects WHERE id =" + task_id.out + "SET" + ";" , db)

			db_query_statement.execute(agent rows_to_json_array(?, 4, Result))
		end
end

