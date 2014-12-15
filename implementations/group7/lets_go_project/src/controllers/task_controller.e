note
	description: "Handler for tasks."
	author: "ar"
	date: "13.11.2014"

class
	TASK_CONTROLLER

inherit
	REST_CONTROLLER_REFERENCING_USER
redefine
	make,
	modify_json,
	add_user_transaction,
	remove_user_transaction,
	pre_insert_action,
	pre_update_action
end

create
	make


feature {NONE} -- Creation

	make (a_db: DATABASE; a_session_manager: WSF_SESSION_MANAGER)
			-- Initialization and configuration for this resource.
		do
			Precursor(a_db, a_session_manager)
			resource_name := "task"
			table_name := "tasks"
			uri_id_name := "task_id"
			parent_uri_id_name := "story_id"
			required_create_new_json_fields := <<"nr", "description", "comment", "status", "owner">>
			optional_create_new_json_fields := <<"progress">>
			required_update_json_fields := <<>>
			optional_update_json_fields := <<"nr", "description", "comment", "status", "owner", "progress", "id">>
		end


feature {None} -- Internal helpers

	modify_json(task: JSON_OBJECT)
		local
			assigned_devs: JSON_ARRAY
			task_id: STRING
		do
			task_id := task.item(jkey("id")).representation
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
			status_key := jkey("status")
			if input.has_key (status_key) and then input.item(status_key).representation.is_equal("2") then
				set_completion_date_to_today(input)
			end
		end

	pre_update_action(req: WSF_REQUEST; res: WSF_RESPONSE; task_id: STRING; input: JSON_OBJECT)
		local
			status_key: JSON_STRING
			old_status: STRING
		do
			status_key := jkey("status")
			old_status := db.query_single_row ("SELECT status FROM tasks WHERE id = ?", <<task_id>>).representation
			if input.has_key(status_key) and then not input.item(status_key).representation.is_equal("2") and then not input.item(status_key).representation.is_equal(old_status) then
				set_completion_date_to_today(input)
			end
		end

	set_completion_date_to_today(input: JSON_OBJECT)
		local
			today: DATE
		do
			create today.make_now
			input.replace(jkey(today.formatted_out("yyyy-[0]mm-[0]dd")), jkey("completion_date"))
		end
end
