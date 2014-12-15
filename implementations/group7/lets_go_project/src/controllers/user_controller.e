note
	description: "Handler for users."
	author: "ar"
	date: "14.11.2014"

class
	USER_CONTROLLER

inherit
	REST_CONTROLLER
redefine
	make,
	modify_json,
	pre_insert_action,
	post_insert_action,
	pre_update_action,
	post_update_action,
	is_input_valid
end

create
	make


feature {NONE} -- Creation

	make (a_db: DATABASE; a_session_manager: WSF_SESSION_MANAGER)
			-- Initialization and configuration for this resource.
		do
			Precursor(a_db, a_session_manager)
			resource_name := "user"
			table_name := "users"
			uri_id_name := "user_id"
			parent_uri_id_name := Void
			required_create_new_json_fields := <<"email", "password", "firstname", "lastname">>
			optional_create_new_json_fields := <<>>
			required_update_json_fields := <<>>
			optional_update_json_fields := <<"email", "password", "firstname", "lastname", "id">>
		end


feature {None} -- Internal helpers

	is_input_valid(req: WSF_REQUEST; input: JSON_OBJECT): BOOLEAN
		local
			email_key: JSON_STRING
		do
			email_key := jkey("email")
			Result := not input.has_key(email_key) or input.has_key(email_key) and then match_email(input.item(email_key).representation)
		end


	match_email(text: STRING): BOOLEAN
    	local
      		dfa: LX_DFA_REGULAR_EXPRESSION
      	do
	        create dfa.make
	        dfa.compile("[A-Z0-9._%%+-]+@[A-Z0-9.-]+\.[A-Z]{2,4}", True)
	        Result := dfa.matches(text)
      	end

	pre_insert_action(req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		do
			check_for_existing_email(res, input, Void)
		end


	post_insert_action(req: WSF_REQUEST; res: WSF_RESPONSE; new_id: INTEGER_64; input: JSON_OBJECT)
		do
			hash_and_store_password_from_json(new_id.out, input)
		end

	pre_update_action(req: WSF_REQUEST; res: WSF_RESPONSE; resource_id: STRING; input: JSON_OBJECT)
		do
			check_for_existing_email(res, input, resource_id)
		end


	post_update_action(req: WSF_REQUEST; res: WSF_RESPONSE; user_id: STRING; input: JSON_OBJECT)
		do
			if input.has_key (jkey("password")) then
				hash_and_store_password_from_json(user_id, input)
			end
		end

	check_for_existing_email(res: WSF_RESPONSE; input: JSON_OBJECT; existing_resource_id: STRING)
		local
			email: STRING
			existing_users: JSON_ARRAY
		do
			if input.has_key(jkey("email")) then
				email := get_string_from_json(input.item(jkey("email")))
				if existing_resource_id = Void then
					existing_users := db.query_rows("SELECT id FROM users WHERE email=?", <<email>>)
				else
					existing_users := db.query_rows("SELECT id FROM users WHERE id <> ? AND email=?", <<existing_resource_id, email>>)
				end

				if existing_users.count > 0 then
					reply_with_400_with_data(res, "A user with this email address already exists.")
				end
			end
		end


	hash_and_store_password_from_json(user_id: STRING; input: JSON_OBJECT)
		local
	        hashed_password: STRING
			password: STRING
			password_key: JSON_STRING
			dummy: ANY
		do
			-- Extract the password from the given json input
			password_key := jkey("password")
			password := input.item(password_key).representation
			password := password.substring (2, password.count - 1)

			-- Salt it with the user id and hash it
	        hashed_password := get_salted_and_hashed_password(password, user_id)

	        -- Replace the original password by the salted-hashed version
			dummy := db.update("UPDATE users SET password = %"" + hashed_password + "%" WHERE id = " + user_id, Void)
		end



	modify_json(user: JSON_OBJECT)
		local
			assigned_tasks: JSON_ARRAY
			projects: JSON_ARRAY
			user_id: STRING
		do
			user_id := user.item(jkey("id")).representation
			assigned_tasks := db.query_id_list("SELECT task_id FROM task_assignments WHERE user_id = ?", <<user_id>>)
			projects := db.query_id_list("SELECT project_id FROM project_shares WHERE user_id = ?", <<user_id>>)
			user.put (assigned_tasks, "assigned_tasks")
			user.put (projects, "projects")
		end
end
