note
	description: "Handler for projects."
	author: "ar"
	date: "14.11.2014"

class
	PROJECT_CONTROLLER

inherit
	REST_CONTROLLER_REFERENCING_USER
redefine
	modify_json,
	get_get_all_query_statement,
	post_insert_action,
	add_user_transaction,
	remove_user_transaction
end

create
	make


feature {None} -- Internal helpers

	post_insert_action (req: WSF_REQUEST; res: WSF_RESPONSE; new_id: INTEGER_64; input: JSON_OBJECT)
		do
			add_user_transaction(new_id.out, get_user_id_from_req(req))
		end

	get_get_all_query_statement(req: WSF_REQUEST): STRING
		local
			projects_of_this_user: STRING
		do
			projects_of_this_user := db.query_id_list("SELECT project_id FROM project_shares WHERE user_id = " + get_user_id_from_req (req)).representation
			projects_of_this_user := projects_of_this_user.substring (2, projects_of_this_user.count - 1)
			Result := "SELECT * FROM projects WHERE id in (" + projects_of_this_user + ")"
		end

	modify_json(project: JSON_OBJECT)
		local
			invited_devs: JSON_ARRAY
			sprints: JSON_ARRAY
			project_id: STRING
		do
			project_id := project.item(create {JSON_STRING}.make_json ("id")).representation
			invited_devs := db.query_id_list("SELECT user_id FROM project_shares WHERE project_id = " + project_id)
			sprints := db.query_id_list("SELECT id FROM sprints WHERE project_id = " + project_id)
			project.put (invited_devs, "invited_devs")
			project.put (sprints, "sprints")
		end

	add_user_transaction(project_id: STRING; dev_id: STRING)
		local
			dummy: ANY
		do
			dummy := db.insert("INSERT INTO project_shares (user_id, project_id) VALUES (" + dev_id + ", " + project_id + ")")
		end

	remove_user_transaction(project_id: STRING; dev_id: STRING)
		local
			dummy: ANY
		do
			dummy := db.delete("DELETE FROM project_shares WHERE user_id = " + dev_id + " AND project_id = " + project_id)
		end
end
