note
	description: "Handler for projects."
	author: "ar"
	date: "14.11.2014"

class
	PROJECT_CONTROLLER

inherit
	REST_CONTROLLER
redefine
	get_all,
	get,
	create_new_from_json
end

create
	make


feature -- Handlers

	get_all (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			results: JSON_ARRAY
			projects: JSON_ARRAY
			i: INTEGER
			project: JSON_OBJECT
		do
			create results.make_array
			projects := db.query_rows ("SELECT * FROM projects")
			from
				i := 1
			until
				i > projects.count
			loop
				project := get_json_object_from_string(projects.i_th(i).representation)
				add_devs_and_sprints_to_project_json(project)
		    	results.extend (project)
				i := i + 1
			end
			reply_with_200_with_data(res, results.representation)
		end


	get (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			project: JSON_OBJECT
			project_id: STRING
		do
			project_id := req.path_parameter ("project_id").string_representation
			project := db.query_single_row("SELECT * FROM projects WHERE id = " + project_id)
			if project.is_empty then
				reply_with_404(res)
			else
				add_devs_and_sprints_to_project_json(project)
				reply_with_200_with_data(res, project.representation)
			end
		end

	create_new_from_json (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		local
			fields_and_values: TUPLE [fields: ARRAY[STRING]; values: ARRAY[STRING]]
			fields_str: STRING
			values_str: STRING
			id: INTEGER_64
		do
			fields_and_values := get_fields_and_values_from_json(input)
			fields_str := get_comma_separated_string_without_quotes_from_array (fields_and_values.fields)
			values_str := get_comma_separated_string_from_array (fields_and_values.values)
			id := db.insert("INSERT INTO " + table_name + " (" + fields_str + ") VALUES (" + values_str + ")")
			if id >= 0 then
				invite_developer_transaction(id.out, get_user_id_from_req(req))
				reply_with_201_with_data(res, id.out)
			else
				reply_with_500(res)
			end
		end

	invite_developers (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		do
			perform_transaction_for_all_developers(req, res, input, agent invite_developer_transaction(?, ?))
		end


	remove_developers (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		do
			perform_transaction_for_all_developers(req, res, input, agent remove_developer_transaction(?, ?))
		end


feature -- Error checking handlers (authentication, authorization, input validation)

	invite_developers_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent ensure_input_validated (req, res, agent invite_developers(req, res, ?), get_json_object_from_request(req))))
		end


	remove_developers_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent ensure_input_validated (req, res, agent remove_developers(req, res, ?), get_json_object_from_request(req))))
		end


feature {None} -- Internal helpers

	add_devs_and_sprints_to_project_json(project: JSON_OBJECT)
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

	perform_transaction_for_all_developers (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT; transaction: PROCEDURE [ANY, TUPLE])
		local
			project_id: STRING
			devs_array: JSON_ARRAY
			i: INTEGER
		do
			project_id := req.path_parameter ("project_id").string_representation

			devs_array := get_json_array_from_string(input.item("devs").representation)
			if devs_array /= Void then
				from
					i := 1
				until
					i > devs_array.count
				loop
					transaction.call ([project_id, devs_array.i_th(i).representation])
					i := i + 1
				end
				reply_with_204(res)
			else
				reply_with_400(res)
			end
		end

	invite_developer_transaction(project_id: STRING; dev_id: STRING)
		local
			dummy: ANY
		do
			dummy := db.insert("INSERT INTO project_shares (user_id, project_id) VALUES (" + dev_id + ", " + project_id + ")")
		end

	remove_developer_transaction(project_id: STRING; dev_id: STRING)
		local
			dummy: ANY
		do
			dummy := db.delete("DELETE FROM project_shares WHERE user_id = " + dev_id + " AND project_id = " + project_id)
		end
end
