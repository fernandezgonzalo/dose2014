note
	description: "Handler for restful requests and resources."
	author: "ar"
	date: "13.11.2014"

deferred class
	REST_CONTROLLER

inherit

	SESSION_HELPER
		-- inherit this helper to get functions to check for a session cookie
		-- if a session cookie exists, we can get the data of that session

	JSON_PARSING_HELPER
		-- helper functionality for json parsing

	HTTP_RESPONSE_HELPER
		-- Convenience functions for http responses


feature {NONE} -- Creation

	make (a_db: DATABASE; a_session_manager: WSF_SESSION_MANAGER; a_resource_name, a_table_name, a_uri_id_name, a_parent_uri_id_name: STRING)
		do
			db := a_db
			session_manager := a_session_manager
			resource_name := a_resource_name
			table_name := a_table_name
			uri_id_name := a_uri_id_name
			parent_uri_id_name := a_parent_uri_id_name
		end


feature {NONE} -- Private attributes

	db: DATABASE
	session_manager: WSF_SESSION_MANAGER
	resource_name: STRING
	table_name: STRING
	uri_id_name: STRING
	parent_uri_id_name: STRING


feature -- Handlers

	get_all (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			results: JSON_ARRAY
			resources: JSON_ARRAY
			i: INTEGER
			resource: JSON_OBJECT
			get_all_statement: TUPLE[statement: STRING; parameters: ITERABLE[ANY]]
		do
			create results.make_array
			get_all_statement := get_get_all_query_statement(req)
			resources := db.query_rows (get_all_statement.statement, get_all_statement.parameters)
			from
				i := 1
			until
				i > resources.count
			loop
				resource := get_json_object_from_string(resources.i_th(i).representation)
				modify_json(resource)
		    	results.extend (resource)
				i := i + 1
			end
			reply_with_200_with_data(res, results.representation)
		end


	create_new (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			create_new_from_json(req, res, get_json_object_from_request (req))
		end


	get (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			resource: JSON_OBJECT
			id: STRING
		do
			id := req.path_parameter (uri_id_name).string_representation

			resource := db.query_single_row("SELECT * FROM " + table_name + " WHERE id = ?", <<id>>)
			if resource.is_empty then
				reply_with_404(res)
			else
				modify_json(resource)
				reply_with_200_with_data(res, resource.representation)
			end
		end


	update (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			update_from_json(req, res, get_json_object_from_request (req))
		end


	delete (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			success: BOOLEAN
		do
			success := db.delete_with_primary_key(get_id(req), table_name)
			if success then
				reply_with_204(res)
			else
				reply_with_500(res)
			end
		end


feature -- Error checking handlers (authentication, authorization, input validation)

	get_all_authenticated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authorized (req, res, agent get_all(req , res))
		end


	get_all_authorized (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent get_all(req , res)))
		end


	create_new_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent ensure_input_validated (req, res, agent create_new_from_json(req, res, ?), get_json_object_from_request(req))))
		end


	create_new_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_input_validated(req, res, agent create_new_from_json(req, res, ?), get_json_object_from_request(req))
		end


	get_authorized (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent get(req , res)))
		end


	update_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent ensure_input_validated (req, res, agent update_from_json(req, res, ?), get_json_object_from_request(req))))
		end


	delete_authorized (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent delete(req , res)))
		end


	create_new_from_json (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		local
			fields: ARRAY[STRING]
			fields_str: STRING
			values_str: STRING
			id: INTEGER_64
		do
			fields := get_fields_from_json(input)
			fields_str := get_comma_separated_string_without_quotes_from_array (fields)
			values_str := get_comma_separated_question_marks(fields.count)
			id := db.insert("INSERT INTO " + table_name + " (" + fields_str + ") VALUES (" + values_str + ")", get_values_from_json(input))
			if id >= 0 then
				post_insert_action(req, res, id, input)
				reply_with_201_with_data(res, id.out)
			else
				reply_with_500(res)
			end
		end


	update_from_json (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		local
			resource_id: STRING
			id_key: JSON_STRING
			success: BOOLEAN
		do
			-- Updating the id is not allowed, so ignore this field if present in input
			create id_key.make_json ("id")
			if input.has_key(id_key) then
				input.remove (id_key)
			end

			resource_id := req.path_parameter(uri_id_name).string_representation
			input.remove (id_key)
			success := db.update("UPDATE " + table_name + " SET " + get_update_assignments(get_fields_from_json(input)) + " WHERE id = " + resource_id, get_values_from_json(input))
			if success then
				post_update_action(req, res, resource_id, input)
				reply_with_204(res)
			else
				reply_with_500(res)
			end
		end


feature {NONE} -- Internal helpers	

	get_get_all_query_statement(req: WSF_REQUEST): TUPLE[statement: STRING; parameters: ITERABLE[ANY]]
		do
			create Result
			if parent_uri_id_name /= Void then
				Result.statement := "SELECT * FROM " + table_name + " WHERE " + parent_uri_id_name + " = ?"
				Result.parameters := <<req.path_parameter(parent_uri_id_name).string_representation>>
			else
				Result.statement := "SELECT * FROM " + table_name
				Result.parameters := Void
			end
			print(Result)
		end

	modify_json(resource: JSON_OBJECT)
		do
		end

	post_insert_action(req: WSF_REQUEST; res: WSF_RESPONSE; new_id: INTEGER_64; input: JSON_OBJECT)
		do
		end

	post_update_action(req: WSF_REQUEST; res: WSF_RESPONSE; resource_id: STRING; input: JSON_OBJECT)
		do
		end

	get_update_assignments(fields: ARRAY[STRING]): STRING
		local
			i: INTEGER
			field: STRING
		do
			Result := ""
			from
                i := 1
            until
                i > fields.count
            loop
            	field := fields.at (i)
            	field.replace_substring_all ("%"", "")
            	Result := Result + field + "=?"

            	if i < fields.count then
            		Result := Result + ", "
            	end
                i := i + 1
            end
		end

	get_values_from_json(json_object: JSON_OBJECT): ITERABLE[ANY]
		local
			keys: ARRAY[JSON_STRING]
		do
			keys := json_object.current_keys

			check keys.count <= 11 end

			if keys.count = 0 then
				Result := Void
			elseif keys.count = 1 then
				Result := <<json_object.item(keys.at(1)).representation>>
			elseif keys.count = 2 then
				Result := <<json_object.item(keys.at(1)).representation, json_object.item(keys.at(2)).representation>>
			elseif keys.count = 3 then
				Result := <<json_object.item(keys.at(1)).representation, json_object.item(keys.at(2)).representation, json_object.item(keys.at(3)).representation>>
			elseif keys.count = 4 then
				Result := <<json_object.item(keys.at(1)).representation, json_object.item(keys.at(2)).representation, json_object.item(keys.at(3)).representation, json_object.item(keys.at(4)).representation>>
			elseif keys.count = 5 then
				Result := <<json_object.item(keys.at(1)).representation, json_object.item(keys.at(2)).representation, json_object.item(keys.at(3)).representation, json_object.item(keys.at(4)).representation, json_object.item(keys.at(5)).representation>>
			elseif keys.count = 6 then
				Result := <<json_object.item(keys.at(1)).representation, json_object.item(keys.at(2)).representation, json_object.item(keys.at(3)).representation, json_object.item(keys.at(4)).representation, json_object.item(keys.at(5)).representation, json_object.item(keys.at(6)).representation>>
			elseif keys.count = 7 then
				Result := <<json_object.item(keys.at(1)).representation, json_object.item(keys.at(2)).representation, json_object.item(keys.at(3)).representation, json_object.item(keys.at(4)).representation, json_object.item(keys.at(5)).representation, json_object.item(keys.at(6)).representation, json_object.item(keys.at(7)).representation>>
			elseif keys.count = 8 then
				Result := <<json_object.item(keys.at(1)).representation, json_object.item(keys.at(2)).representation, json_object.item(keys.at(3)).representation, json_object.item(keys.at(4)).representation, json_object.item(keys.at(5)).representation, json_object.item(keys.at(6)).representation, json_object.item(keys.at(7)).representation, json_object.item(keys.at(8)).representation>>
			elseif keys.count = 9 then
				Result := <<json_object.item(keys.at(1)).representation, json_object.item(keys.at(2)).representation, json_object.item(keys.at(3)).representation, json_object.item(keys.at(4)).representation, json_object.item(keys.at(5)).representation, json_object.item(keys.at(6)).representation, json_object.item(keys.at(7)).representation, json_object.item(keys.at(8)).representation, json_object.item(keys.at(9)).representation>>
			elseif keys.count = 10 then
				Result := <<json_object.item(keys.at(1)).representation, json_object.item(keys.at(2)).representation, json_object.item(keys.at(3)).representation, json_object.item(keys.at(4)).representation, json_object.item(keys.at(5)).representation, json_object.item(keys.at(6)).representation, json_object.item(keys.at(7)).representation, json_object.item(keys.at(8)).representation, json_object.item(keys.at(9)).representation, json_object.item(keys.at(10)).representation>>
			end

			-- Remove quotes from the values
			across Result as value loop
				if attached {STRING} value.item as str_value then
               		str_value.replace_substring_all ("%"", "")
            	end
			end
		end


	get_fields_from_json(json_object: JSON_OBJECT): ARRAY[STRING]
		local
			keys: ARRAY[JSON_STRING]
			i: INTEGER
		do
			keys := json_object.current_keys
			create Result.make_filled ("", 1, keys.count)

			from
                i := 1
            until
                i > keys.count
            loop
            	Result.put(keys.at(i).representation, i)
                i := i + 1
            end
		end


	get_comma_separated_string_without_quotes_from_array(a: ARRAY[STRING]): STRING
		local
			i: INTEGER
		do
			Result := ""
			from
                i := 1
            until
                i > a.count
            loop
            	Result := Result + a.at(i)

            	if i < a.count then
            		Result := Result + ", "
            	end
                i := i + 1
            end
			Result.replace_substring_all ("%"", "")
		end

	get_comma_separated_question_marks(count: INTEGER): STRING
		local
			question_mark_array: ARRAY[STRING]
		do
			create question_mark_array.make_filled ("?", 1, count)
			Result := get_comma_separated_string_without_quotes_from_array(question_mark_array)
		end

	get_id(req: WSF_REQUEST): STRING
		do
			Result := req.path_parameter (uri_id_name).string_representation
		end

	ensure_belongs_to_parent(req: WSF_REQUEST; res: WSF_RESPONSE; item_singular_name: STRING; item_plural_name: STRING; parent_item_singular_name: STRING)
		local
			item_id, requested_parent_id, true_parent_id: STRING
			query_result: JSON_OBJECT
		do
			if req.path_info.has_substring(item_plural_name) and req.path_parameter(item_singular_name + "_id") /= Void then
				item_id := req.path_parameter(item_singular_name + "_id").string_representation
				if item_id /= Void then
					requested_parent_id := req.path_parameter(parent_item_singular_name + "_id").string_representation
					query_result := db.query_single_row ("SELECT " + parent_item_singular_name + "_id FROM " + item_plural_name + " WHERE id = ?", <<item_id>>)
					if query_result.is_empty then
						reply_with_404 (res)
					else
						true_parent_id := query_result.item (create {JSON_STRING}.make_json (parent_item_singular_name + "_id")).representation
						if not requested_parent_id.is_equal(true_parent_id) then
							reply_with_404 (res)
						end
					end

				end
			end
		end

	ensure_user_can_access_project(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			user_id, project_id: STRING
			project_share: JSON_VALUE
		do
			if req.path_info.has_substring("projects") and req.path_parameter("project_id") /= Void then
				user_id := get_user_id_from_req(req)
				project_id := req.path_parameter("project_id").string_representation
				if project_id /= Void and user_id /= Void then
					project_share := db.query_single_row ("SELECT user_id FROM project_shares WHERE user_id = ? AND project_id = ?", <<user_id, project_id>>).item (create {JSON_STRING}.make_json ("user_id"))
					if project_share = Void then
						reply_with_401 (res)
					end
				end
			end
		end


feature {NONE} -- Request preprocessors (validators, etc.)

	ensure_authenticated (req: WSF_REQUEST; res: WSF_RESPONSE; implementation: PROCEDURE [ANY, TUPLE])
		do
			if no_error_occured_so_far(res) then
				if req_has_cookie(req) then
					implementation.call ([])
				else
					reply_with_401 (res)
				end
			end
		end

	ensure_input_validated (req: WSF_REQUEST; res: WSF_RESPONSE; implementation: PROCEDURE [ANY, TUPLE]; input: JSON_OBJECT)
		do
			if no_error_occured_so_far(res) then
				if input /= Void and then is_input_valid(input) then
					implementation.call ([input])
				else
					reply_with_400(res)
				end
			end
		end

	ensure_authorized (req: WSF_REQUEST; res: WSF_RESPONSE; implementation: PROCEDURE [ANY, TUPLE])
		do
			if no_error_occured_so_far(res) then
				ensure_belongs_to_parent(req, res, "task", "tasks", "story")
				ensure_belongs_to_parent(req, res, "story", "stories", "sprint")
				ensure_belongs_to_parent(req, res, "sprint", "sprints", "project")
				ensure_user_can_access_project(req, res)
				if no_error_occured_so_far(res) then
					implementation.call ([])
				end
			end
		end

	no_error_occured_so_far(res: WSF_RESPONSE): BOOLEAN
		do
			Result := res.status_code = {HTTP_STATUS_CODE}.ok
		end

	is_input_valid(input: JSON_OBJECT): BOOLEAN
		do
			Result := True
		end
end
