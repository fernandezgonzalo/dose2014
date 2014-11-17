note
	description: "Handler for users."
	author: "ar"
	date: "14.11.2014"
	revision: "1"

class
	USER_CONTROLLER

inherit
	REST_CONTROLLER
redefine
	get_all,
	get
end

create
	make


feature -- Handlers


	get_all (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			-- TODO @ Vimal: Override the parent implementation to reply with json
			-- 			- without "password" field
			--			- with field "assigned_tasks"
			--			- with field "projects"
			--			(analogous to belows "get()" override).

			-- Currently, we just call the superclass implementation, this has to be replaced:
			Precursor(req, res)
		end


	get (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			user: JSON_OBJECT
			assigned_tasks: JSON_ARRAY
			projects: JSON_ARRAY
			user_id: STRING
		do
			user_id := req.path_parameter ("user_id").string_representation
			user := db.query_single_row("SELECT id, email, firstname, lastname FROM users WHERE id=" + user_id)
			assigned_tasks := db.query_id_list("SELECT task_id FROM task_assignments WHERE user_id=" + user_id)
			projects := db.query_id_list("SELECT project_id FROM project_shares WHERE user_id=" + user_id)
			user.put (assigned_tasks, "assigned_tasks")
			user.put (projects, "projects")
			reply_with_data(req, res, user.representation)
		end


feature {None}
	db_query_statement: SQLITE_QUERY_STATEMENT

end
