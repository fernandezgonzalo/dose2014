note
	description: "Handler for tasks."
	author: "ar"
	date: "13.11.2014"

class
	TASK_CONTROLLER

inherit
	REST_CONTROLLER_REFERENCING_USER
redefine
	modify_json,
	add_user_transaction,
	remove_user_transaction
end

create
	make


feature {None} -- Internal helpers

	modify_json(task: JSON_OBJECT)
		local
			assigned_devs: JSON_ARRAY
			task_id: STRING
		do
			task_id := task.item(create {JSON_STRING}.make_json ("id")).representation
			assigned_devs := db.query_id_list("SELECT user_id FROM task_assignments WHERE task_id = ?", <<task_id>>)
			task.put (assigned_devs, "assigned_devs")
		end

	add_user_transaction(task_id: STRING; dev_id: STRING)
		local
			dummy: ANY
		do
			dummy := db.insert("INSERT INTO task_assignments (user_id, task_id) VALUES (?, ?)", <<dev_id, task_id>>)
		end

	remove_user_transaction(task_id: STRING; dev_id: STRING)
		local
			dummy: ANY
		do
			dummy := db.delete("DELETE FROM task_assignments WHERE user_id = ? AND task_id = ?", <<dev_id, task_id>>)
		end
end
