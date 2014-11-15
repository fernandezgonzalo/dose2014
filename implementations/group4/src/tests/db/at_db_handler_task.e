note
	description: "[
		Tests for routines of class DB_HANDLER_TASK
	]"
	author: "Rio Cuarto4 Team"
	date: "$2014-11-15$"
	revision: "$0.01$"

class
	AT_DB_HANDLER_TASK

inherit
	DB_HANDLER_TEST

feature -- Test routines

	find_by_id_existent_task_test
			-- Test for routine find_by_id with existent task id.
		local
			db_handler : DB_HANDLER_TASK
			json_result : JSON_OBJECT
		do
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")

			json_result := db_handler.find_by_id (1)


				-- correct attributes
			assert("Not void", json_result /= Void)
			assert("Correct title ",json_result.item ("title").debug_output.is_equal("task1"))
			assert("Correct description ", json_result.item ("description").debug_output.is_equal("descr"))
			assert("Correct priority ", json_result.item("priority").debug_output.is_equal("Low"))
			assert("Correct position ", json_result.item("position").debug_output.is_equal("Backlog"))
			assert("Correct type ", json_result.item("type").debug_output.is_equal("Feature"))
			assert("Correct points ", json_result.item("points").debug_output.is_equal("5"))
			assert("Correct super_task_id ", json_result.item("super_task_id").debug_output.is_equal("1"))
			assert("Correct user_id", json_result.item ("user_id").debug_output.is_equal("1"))
			assert("Correct project_id", json_result.item ("project_id").debug_output.is_equal("1"))
			assert("Correct sprint_id", json_result.item ("sprint_id").debug_output.is_equal("4"))
		end

	find_by_id_nonexistent_task_test
			-- Test for routine find_by_id with nonexistent task id.
		local
			db_handler : DB_HANDLER_TASK
			json_result : JSON_OBJECT
		do
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")
			json_result := db_handler.find_by_id (100)
			assert("Task not found", json_result.is_empty)
		end

	add_task_test
			-- Test for routine add
		local
			task: TASK
			db_handler : DB_HANDLER_TASK
		do
			create task.make (42, 42, 42, 42, "title", "desc", "Bug", "Low", "Backlog")
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")

			db_handler.db.begin_transaction (true)
			db_handler.add_super (task)
				-- assert when the task was successfully added.
			assert ("Topic successfully added", not db_handler.db_insert_statement.has_error)
				-- remove the task added for test
			db_handler.db.rollback
		end

	add_sub_task_test
			-- Test for routine add
		local
			task: TASK
			db_handler : DB_HANDLER_TASK
		do
			create task.make_sub_task (42, 42, 42, 42, 42, "title", "desc", "Bug", "Low", "Backlog")
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")

			db_handler.db.begin_transaction (true)
			db_handler.add_sub (task)
				-- assert when the task was successfully added.
			assert ("Topic successfully added", not db_handler.db_insert_statement.has_error)
				-- remove the task added for test
			db_handler.db.rollback
		end

	update_task_test
			-- Test for routine update
		local
			task: TASK
			db_handler : DB_HANDLER_TASK
		do
			create task.make (42, 42, 42, 42, "title", "descr", "Bug", "Low", "Backlog")
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")

			db_handler.db.begin_transaction (true)
			db_handler.add_super (task)

			task.set_priority ("High")
				-- update the task in database
			db_handler.update(db_handler.db_insert_statement.last_row_id.to_natural_32,task)
				-- assert when the task was successfully updated.
			assert("Task successfully updated", not db_handler.db_modify_statement.has_error)

				-- remove the task added for test
			db_handler.db.rollback
		end

	remove_task_test
		-- Test for routine remove
		local
			task: TASK
			db_handler : DB_HANDLER_TASK
			json_result : JSON_OBJECT
		do
			create task.make (42, 42, 42, 42, "title", "descr", "Bug", "Low", "Backlog")
			create db_handler.make(".." + Operating_environment.directory_separator.out + "casd.db")

			db_handler.db.begin_transaction (true)
			db_handler.add_super (task)
			db_handler.remove (db_handler.db_insert_statement.last_row_id.to_natural_32)

				-- assert when the task was successfully removed.
			json_result := db_handler.find_by_id (db_handler.db_insert_statement.last_row_id.to_natural_32)
			assert("Task deleted", json_result.is_empty)

				-- remove the task added for test
			db_handler.db.rollback
		end

end



