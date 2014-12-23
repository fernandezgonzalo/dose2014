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
	new(description: STRING; user_id: STRING)
		do
			create db_insert_statement.make ("INSERT INTO tasks(description, user_id) VALUES ('" + description + "'," + user_id + ");", db);

			db_insert_statement.execute

			if db_insert_statement.has_error then
				print("Error while inserting a new task")
			end
		end

	by_user(user_id: STRING): JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make("select * from tasks JOIN UsersToTasks ON UsersToTasks.taskId = tasks.id WHERE UsersToTasks.userId = " + user_id + ";" , db)

			db_query_statement.execute(agent rows_to_json_array(?, 4, Result))
		end

end

