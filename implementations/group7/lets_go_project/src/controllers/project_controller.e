note
	description: "Handler for projects."
	author: "ar"
	date: "14.11.2014"

class
	PROJECT_CONTROLLER


inherit
	REST_CONTROLLER_REFERENCING_USER
redefine
	make,
	modify_json,
	get_get_all_query_statement,
	post_insert_action,
	add_user_transaction,
	remove_user_transaction
end


create
	make


feature {NONE} -- Creation

	make (a_db: DATABASE; a_session_manager: WSF_SESSION_MANAGER)
			-- Initialization and configuration for this resource.
		do
			Precursor(a_db, a_session_manager)
			resource_name := "project"
			table_name := "projects"
			uri_id_name := "project_id"
			parent_uri_id_name := Void
			required_create_new_json_fields := <<"name", "description", "start_date", "end_date", "status", "owner">>
			optional_create_new_json_fields := <<>>
			required_update_json_fields := <<>>
			optional_update_json_fields := <<"name", "description", "start_date", "end_date", "status", "owner", "id">>
		end


feature -- Handlers

	add_user (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
			-- Adding users to projects is not done by a list of users ids as usually when using REST_CONTROLLER_REFERENCING_USER, but
			-- by a single email address.
		local
			resource_id, email: STRING
			user_id: JSON_OBJECT
			email_key: JSON_STRING
		do
			resource_id := req.path_parameter (uri_id_name).string_representation
			email_key := jkey("email")
			if not input.has_key (email_key) then
					-- an email key must be present
				reply_with_400(res)

			else
				email := get_string_from_json(input.item(email_key))
				user_id := db.query_single_row ("SELECT id from users where email = ?", <<email>>)

				if user_id.is_empty then
						-- no user was found with this mailaddress.
					reply_with_404(res)

				else
						-- a user with this mailaddress was found, add him to the project.
					add_user_transaction(resource_id, user_id.item(jkey("id")).representation)
					reply_with_204(res)
				end
			end
		end


feature -- Error checking handlers (authentication, authorization, input validation)

	add_user_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- The aequivalent of REST_CONTROLLER_REFERENCING_USER.add_users_authorized_validated, but for a single user only instead of a list of users.
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent ensure_input_validated (req, res, agent add_user(req, res, ?), get_json_object_from_request(req))))
		end


feature {None} -- Internal helpers

	post_insert_action (req: WSF_REQUEST; res: WSF_RESPONSE; new_id: INTEGER_64; input: JSON_OBJECT)
			-- Add the author of the project as a member of the project after project creation.
		do
			add_user_transaction(new_id.out, get_user_id_from_req(req))
		end


	get_get_all_query_statement(req: WSF_REQUEST): TUPLE[statement: STRING; parameters: ITERABLE[ANY]]
			-- Do not fetch all projects from database, but projects of this user only.
		local
			projects_of_this_user: STRING
		do
			create Result
			projects_of_this_user := db.query_id_list("SELECT project_id FROM project_shares WHERE user_id = ?", <<get_user_id_from_req (req)>>).representation
			projects_of_this_user := projects_of_this_user.substring (2, projects_of_this_user.count - 1)
			Result.statement := "SELECT * FROM projects WHERE id in (" + projects_of_this_user + ")"
			Result.parameters := Void
		end


	modify_json(project: JSON_OBJECT)
			-- add 'sprints' and 'invited_devs' fields to the default json to be returned by GET requests.
		local
			invited_devs: JSON_ARRAY
			sprints: JSON_ARRAY
			project_id: STRING
		do
			project_id := project.item(jkey("id")).representation
			invited_devs := db.query_id_list("SELECT user_id FROM project_shares WHERE project_id = ?", <<project_id>>)
			sprints := db.query_id_list("SELECT id FROM sprints WHERE project_id = ?", <<project_id>>)
			project.put (invited_devs, "invited_devs")
			project.put (sprints, "sprints")
		end


	add_user_transaction(project_id: STRING; dev_id: STRING)
			-- Add the user with id 'dev_id' to this project.
		local
			dummy: ANY
		do
			dummy := db.insert("INSERT INTO project_shares (user_id, project_id) VALUES (?, ?)", <<dev_id, project_id>>)
		end


	remove_user_transaction(project_id: STRING; dev_id: STRING)
			-- Remove the user with id 'dev_id' from this project.
		local
			dummy: ANY
		do
			dummy := db.delete("DELETE FROM project_shares WHERE user_id = ? AND project_id = ?", <<dev_id, project_id>>)
		end
end
