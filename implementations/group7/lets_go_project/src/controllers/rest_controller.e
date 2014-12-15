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

	JSON_HELPER
		-- helper functionality for json parsing

	HTTP_RESPONSE_HELPER
		-- Convenience functions for http responses


feature {NONE} -- Creation

	make (a_db: DATABASE; a_session_manager: WSF_SESSION_MANAGER)
		do
			db := a_db
			session_manager := a_session_manager
			required_create_new_json_fields := <<>>
			optional_create_new_json_fields := <<>>
			required_update_json_fields := <<>>
			optional_update_json_fields := <<>>
		end


feature {NONE} -- Private attributes

	db: DATABASE
	session_manager: WSF_SESSION_MANAGER
	resource_name: STRING
	table_name: STRING
	uri_id_name: STRING
	parent_uri_id_name: STRING
	required_create_new_json_fields: ARRAY[STRING]
	optional_create_new_json_fields: ARRAY[STRING]
	required_update_json_fields: ARRAY[STRING]
	optional_update_json_fields: ARRAY[STRING]


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
			if db.query_rows ("SELECT * FROM " + table_name + " WHERE id = ?", <<get_id(req)>>).count = 0 then
				reply_with_404 (res)
			else
				success := db.delete_with_primary_key(get_id(req), table_name)
				if success then
					reply_with_204(res)
				else
					reply_with_500(res)
				end
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
			ensure_valid_json(req, res, input, required_create_new_json_fields, optional_create_new_json_fields)
			if no_error_occured_so_far(res) then
				if parent_uri_id_name /= Void then
					input.put_string(req.path_parameter(parent_uri_id_name).string_representation, jkey(parent_uri_id_name))
				end

				pre_insert_action(req, res, input)
				if no_error_occured_so_far(res) then
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
			end
		end


	update_from_json (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		local
			resource_id: STRING
			id_key: JSON_STRING
			success: BOOLEAN
		do
			ensure_valid_json(req, res, input, required_update_json_fields, optional_update_json_fields)
			if no_error_occured_so_far(res) then
				if parent_uri_id_name /= Void then
					input.put_string(req.path_parameter(parent_uri_id_name).string_representation, jkey(parent_uri_id_name))
				end

				-- Updating the id is not allowed, so ignore this field if present in input
				id_key := jkey("id")
				if input.has_key(id_key) then
					input.remove(id_key)
				end

				resource_id := req.path_parameter(uri_id_name).string_representation
				pre_update_action(req, res, resource_id, input)
				if no_error_occured_so_far(res) then
					success := db.update("UPDATE " + table_name + " SET " + get_update_assignments(get_fields_from_json(input)) + " WHERE id = " + resource_id, get_values_from_json(input))
					if success then
						post_update_action(req, res, resource_id, input)
						reply_with_204(res)
					else
						reply_with_500(res)
					end
				end
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
		end

	modify_json(resource: JSON_OBJECT)
		do
		end

	ensure_valid_json(req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT; required_fields, optional_fields: ARRAY[STRING])
		local
			key_str: STRING
		do
			if input = Void then
				reply_with_400_with_data(res, "The received data is not a valid json object!")
			end

			across required_fields as field loop
				if no_error_occured_so_far(res) and then not input.has_key (jkey(field.item)) then
					reply_with_400_with_data(res, "Missing json field for resource creation: " + field.item)
				end
			end

			across input.current_keys as key loop
				key_str := get_string_from_json(key.item)
				if no_error_occured_so_far(res) and then not (string_array_has_item(required_fields, key_str) or string_array_has_item(optional_fields, key_str)) then
					reply_with_400_with_data(res, "Invalid json field for resource creation: " + key_str)
				end
			end
		end

	pre_insert_action(req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		do
		end

	post_insert_action(req: WSF_REQUEST; res: WSF_RESPONSE; new_id: INTEGER_64; input: JSON_OBJECT)
		do
		end

	pre_update_action(req: WSF_REQUEST; res: WSF_RESPONSE; resource_id: STRING; input: JSON_OBJECT)
		do
		end

	post_update_action(req: WSF_REQUEST; res: WSF_RESPONSE; resource_id: STRING; input: JSON_OBJECT)
		do
		end

	get_parent_id(req: WSF_REQUEST): STRING
		do
			if parent_uri_id_name /= Void then
				Result := req.path_parameter(parent_uri_id_name).string_representation
			end
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
            	field := get_without_quotes(fields.at(i))
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
                Result := <<get_value_from_json(json_object, keys.at(1))>>
            elseif keys.count = 2 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2))>>
            elseif keys.count = 3 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3))>>
            elseif keys.count = 4 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4))>>
            elseif keys.count = 5 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4)), get_value_from_json(json_object, keys.at(5))>>
            elseif keys.count = 6 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4)), get_value_from_json(json_object, keys.at(5)), get_value_from_json(json_object, keys.at(6))>>
            elseif keys.count = 7 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4)), get_value_from_json(json_object, keys.at(5)), get_value_from_json(json_object, keys.at(6)), get_value_from_json(json_object, keys.at(7))>>
            elseif keys.count = 8 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4)), get_value_from_json(json_object, keys.at(5)), get_value_from_json(json_object, keys.at(6)), get_value_from_json(json_object, keys.at(7)), get_value_from_json(json_object, keys.at(8))>>
            elseif keys.count = 9 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4)), get_value_from_json(json_object, keys.at(5)), get_value_from_json(json_object, keys.at(6)), get_value_from_json(json_object, keys.at(7)), get_value_from_json(json_object, keys.at(8)), get_value_from_json(json_object, keys.at(9))>>
            elseif keys.count = 10 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4)), get_value_from_json(json_object, keys.at(5)), get_value_from_json(json_object, keys.at(6)), get_value_from_json(json_object, keys.at(7)), get_value_from_json(json_object, keys.at(8)), get_value_from_json(json_object, keys.at(9)), get_value_from_json(json_object, keys.at(10))>>
            end

			-- Remove quotes from the values
			if Result /= Void then
				across Result as value loop
					if attached {STRING} value.item as str_value then
	               		str_value.replace_substring_all("%"", "")
	            	end
				end
			end
		end

	get_value_from_json(json_object: JSON_OBJECT; key: JSON_STRING): STRING
		do
			Result := json_object.item(key).representation
			if Result.is_equal("null") then
				Result := Void
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
			Result := get_without_quotes(Result)
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
						true_parent_id := query_result.item (jkey(parent_item_singular_name + "_id")).representation
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
					project_share := db.query_single_row ("SELECT user_id FROM project_shares WHERE user_id = ? AND project_id = ?", <<user_id, project_id>>).item(jkey("user_id"))
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
				if input = Void then
					reply_with_400_with_data(res, "Received invalid input!")
				else
					if is_input_valid(req, input) then
						implementation.call ([input])
					else
						reply_with_400_with_data(res, "Invalid input: " + input.representation)
					end
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

	is_input_valid(req: WSF_REQUEST; input: JSON_OBJECT): BOOLEAN
		do
			Result := True
		end

	string_array_has_item(array: ARRAY[STRING]; item: STRING): BOOLEAN
		do
			Result := False
			across array as cur_item loop
				if cur_item.item.is_equal(item) then
					Result := True
				end
			end
		end
end
