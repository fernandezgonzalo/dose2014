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
		local
			results: JSON_ARRAY
			users: JSON_ARRAY
			i: INTEGER
			user: JSON_OBJECT

		do
			create results.make_array
			users := db.query_rows ("SELECT id, email, firstname, lastname FROM users")
			from
				i := 1
			until
				i > users.count
			loop
				user := get_json_object_from_string(users.i_th(i).representation)
				add_projects_and_tasks_to_user_json(user)
		    	results.extend (user)
				i := i + 1
			end
			reply_with_200_with_data(res, results.representation)
		end


	get (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			user: JSON_OBJECT
			user_id: STRING
		do
			user_id := req.path_parameter ("user_id").string_representation
			user := db.query_single_row("SELECT id, email, firstname, lastname FROM users WHERE id = " + user_id)
			if user.is_empty then
				reply_with_404(res)
			else
				add_projects_and_tasks_to_user_json(user)
				reply_with_200_with_data(res, user.representation)
			end
		end


feature {None} -- Internal helpers

	add_projects_and_tasks_to_user_json(user: JSON_OBJECT)
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
