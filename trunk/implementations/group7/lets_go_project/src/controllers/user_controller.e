note
	description: "Handler for users."
	author: "ar"
	date: "14.11.2014"

class
	USER_CONTROLLER

inherit
	REST_CONTROLLER
redefine
	modify_json,
	post_insert_action
end

create
	make


feature {None} -- Internal helpers


	post_insert_action(req: WSF_REQUEST; res: WSF_RESPONSE; new_id: INTEGER_64; input: JSON_OBJECT)
		local
	        hashed_password: STRING
			password: STRING
			password_key: JSON_STRING
			dummy: ANY
		do
			--
			password_key := create {JSON_STRING}.make_json("password")
			password := input.item(password_key).representation
			password := password.substring (2, password.count - 1)

			-- Salt it with the user id and hash it
	        hashed_password := get_salted_and_hashed_password(password, new_id.out)

	        -- Replace the original password by the salted-hashed version
			dummy := db.update("UPDATE users SET password = %"" + hashed_password + "%" WHERE id = " + new_id.out)
		end


	modify_json(user: JSON_OBJECT)
		local
			assigned_tasks: JSON_ARRAY
			projects: JSON_ARRAY
			user_id: STRING
		do
			user_id := user.item(create {JSON_STRING}.make_json ("id")).representation
			assigned_tasks := db.query_id_list("SELECT task_id FROM task_assignments WHERE user_id = " + user_id)
			projects := db.query_id_list("SELECT project_id FROM project_shares WHERE user_id = " + user_id)
			user.put (assigned_tasks, "assigned_tasks")
			user.put (projects, "projects")
		end
end
