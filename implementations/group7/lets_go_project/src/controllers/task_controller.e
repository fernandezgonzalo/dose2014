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
	remove_user_transaction,
	pre_insert_action,
	pre_update_action
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

	pre_insert_action(req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		local
			status_key: JSON_STRING
		do
			create status_key.make_json("status")
			if input.has_key (status_key) and then input.item(status_key).representation.is_equal("2") then
				set_completion_date_to_today(input)
				print("%NReplacing in new")
			end
		end

	pre_update_action(req: WSF_REQUEST; res: WSF_RESPONSE; task_id: STRING; input: JSON_OBJECT)
		local
			status_key: JSON_STRING
			old_status: STRING
		do
			create status_key.make_json("status")
			old_status := db.query_single_row ("SELECT status FROM tasks WHERE id = ?", <<task_id>>).representation
			if input.has_key(status_key) and then input.item(status_key).representation.is_equal("2") and then not input.item(status_key).representation.is_equal(old_status) then
				print("%NReplacing when updating")
				set_completion_date_to_today(input)
			end
		end

	set_completion_date_to_today(input: JSON_OBJECT)
		local
			today: DATE
		do
			create today.make_now
			input.replace(create {JSON_STRING}.make_json(today.formatted_out("yyyy-mm-dd")), create {JSON_STRING}.make_json("completion_date"))
		end
end
