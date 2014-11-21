note
	description: "Handler for restful requests and resources."
	author: "ar"
	date: "13.11.2014"

deferred class
	REST_CONTROLLER

inherit
	HEADER_JSON_HELPER
		-- inherit this helper to get a procedure that simplifies setting
		-- the HTTP response header correctly

	SESSION_HELPER
		-- inherit this helper to get functions to check for a session cookie
		-- if a session cookie exists, we can get the data of that session

	JSON_PARSING_HELPER
		-- helper functionality for json parsing.


feature {NONE} -- Creation

	make (a_db: DATABASE; a_session_manager: WSF_SESSION_MANAGER; a_resource_name, a_table_name, a_uri_id_name: STRING)
		do
			db := a_db
			session_manager := a_session_manager
			resource_name := a_resource_name
			table_name := a_table_name
			uri_id_name := a_uri_id_name
		end


feature {NONE} -- Private attributes

	db: DATABASE
	session_manager: WSF_SESSION_MANAGER
	resource_name: STRING
	table_name: STRING
	uri_id_name: STRING


feature -- Handlers

	get_all (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			json_array: JSON_ARRAY
		do
			json_array := db.query_rows("SELECT * FROM " + table_name)
			reply_with_200_with_data(res, json_array.representation)
		end


	create_new (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			create_new_from_json(req, res, get_json_object_from_request (req))
		end


	get (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			json_object: JSON_OBJECT
		do
			json_object := db.query_single_row("SELECT * FROM " + table_name + " WHERE id=" + get_id(req))
			if json_object.is_empty then
				reply_with_404(res)
			else
				reply_with_200_with_data(res, json_object.representation)
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
			ensure_authenticated (req, res, agent get_all(req , res))
		end


	get_all_authorized (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authorized (req, res, agent get_all(req , res))
		end


	create_new_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authorized (req, res, agent ensure_input_validated (req, res, agent create_new_from_json(req, res, ?), get_json_object_from_request(req)))
		end


	get_authorized (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authorized (req, res, agent get(req , res))
		end


	update_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authorized (req, res, agent ensure_input_validated (req, res, agent update_from_json(req, res, ?), get_json_object_from_request(req)))
		end


	delete_authorized (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authorized (req, res, agent delete(req , res))
		end


feature {NONE} -- Internal helpers	


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
			create id_key.make_json ("id")
			resource_id := input.item(id_key).representation
			input.remove (id_key)
			success := db.update("UPDATE " + table_name + " SET " + get_update_assignments(get_fields_and_values_from_json(input)) + " WHERE id = " + resource_id)
			if success then
				reply_with_204(res)
			else
				reply_with_500(res)
			end
		end


	get_update_assignments(fields_and_values: TUPLE [fields: ARRAY[STRING]; values: ARRAY[STRING]]): STRING
		local
			i: INTEGER
			field: STRING
		do
			Result := ""
			from
                i := 1
            until
                i > fields_and_values.fields.count
            loop
            	field := fields_and_values.fields.at (i)
            	field.replace_substring_all ("%"", "")
            	Result := Result + field + "=" + fields_and_values.values.at (i)

            	if i < fields_and_values.fields.count then
            		Result := Result + ", "
            	end
                i := i + 1
            end
		end


	get_fields_and_values_from_json(json_object: JSON_OBJECT): TUPLE [fields: ARRAY[STRING]; values: ARRAY[STRING]]
		local
			keys: ARRAY[JSON_STRING]
			i: INTEGER
			fields: ARRAY[STRING]
			values: ARRAY[STRING]
			key: JSON_STRING
		do
			keys := json_object.current_keys
			create fields.make_filled ("", 1, keys.count)
			create values.make_filled ("", 1, keys.count)

			from
                i := 1
            until
                i > keys.count
            loop
            	key := keys.at(i)
            	fields.put(key.representation, i)
            	values.put(json_object.item(key).representation, i)
                i := i + 1
            end
            Result := [fields, values]
		end

	get_comma_separated_string_from_array(a: ARRAY[STRING]): STRING
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
		end

	get_comma_separated_string_without_quotes_from_array(a: ARRAY[STRING]): STRING
		do
			Result := get_comma_separated_string_from_array(a)
			Result.replace_substring_all ("%"", "")
		end

	get_id(req: WSF_REQUEST): STRING
		do
			Result := req.path_parameter (uri_id_name).string_representation
		end


feature {NONE} -- Request preprocessors (validators, etc.)

	ensure_authenticated (req: WSF_REQUEST; res: WSF_RESPONSE; implementation: PROCEDURE [ANY, TUPLE])
		do
			if res.status_code = {HTTP_STATUS_CODE}.ok then
				if req_has_cookie (req) then
					implementation.call ([])
				else
					reply_with_401 (res)
				end
			end
		end

	ensure_authorized (req: WSF_REQUEST; res: WSF_RESPONSE; implementation: PROCEDURE [ANY, TUPLE])
		do
			if res.status_code = {HTTP_STATUS_CODE}.ok then
				if req_has_cookie (req) then
					implementation.call ([])
				else
					reply_with_401 (res)
				end
			end
		end

	ensure_input_validated (req: WSF_REQUEST; res: WSF_RESPONSE; implementation: PROCEDURE [ANY, TUPLE]; input: JSON_OBJECT)
		do
			if res.status_code = {HTTP_STATUS_CODE}.ok then
				if input /= Void then
					implementation.call ([input])
				else
					reply_with_400 (res)
				end
			end
		end


feature {NONE} -- Http responses

	reply_with_200_with_data (res: WSF_RESPONSE; data: STRING)
		do
			reply_with_statuscode_with_data(res, {HTTP_STATUS_CODE}.ok, data)
		end


	reply_with_201_with_data (res: WSF_RESPONSE; data: STRING)
		do
			reply_with_statuscode_with_data(res, {HTTP_STATUS_CODE}.created, data)
		end


	reply_with_204 (res: WSF_RESPONSE)
		do
			res.set_status_code({HTTP_STATUS_CODE}.no_content)
		end


	reply_with_statuscode_with_data (res: WSF_RESPONSE; statuscode: INTEGER; data: STRING)
		do
			set_json_header (res, statuscode, data.count)
			res.put_string(data)
		end


	reply_with_400 (res: WSF_RESPONSE)
		do
			res.set_status_code({HTTP_STATUS_CODE}.bad_request)
		end


	reply_with_401 (res: WSF_RESPONSE)
		do
			res.set_status_code({HTTP_STATUS_CODE}.unauthorized)
		end


	reply_with_404 (res: WSF_RESPONSE)
		do
			res.set_status_code({HTTP_STATUS_CODE}.not_found)
		end


	reply_with_500 (res: WSF_RESPONSE)
		do
			res.set_status_code({HTTP_STATUS_CODE}.internal_server_error)
		end
end
