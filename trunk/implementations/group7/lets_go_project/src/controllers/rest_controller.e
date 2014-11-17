note
	description: "Handler for restful requests and resources."
	author: "ar"
	date: "13.11.2014"
	revision: "1"

deferred class
	REST_CONTROLLER

inherit
	HEADER_JSON_HELPER
		-- inherit this helper to get a procedure that simplifies setting
		-- the HTTP response header correctly

	SESSION_HELPER
		-- inherit this helper to get functions to check for a session cookie
		-- if a session cookie exists, we can get the data of that session


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
			reply_with_data(req, res, json_array.representation)
		end


	create_new (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			fields_and_values: TUPLE [fields: ARRAY[STRING]; values: ARRAY[STRING]]
			fields_str: STRING
			values_str: STRING
			id: INTEGER_64
			j_object: JSON_OBJECT
		do
			j_object := parse_json(req)
			if j_object /= Void then
				fields_and_values := get_fields_and_values_from_json(j_object)
				fields_str := get_comma_separated_string_without_quotes_from_array (fields_and_values.fields)
				values_str := get_comma_separated_string_from_array (fields_and_values.values)
				id := db.insert("INSERT INTO " + table_name + " (" + fields_str + ") VALUES (" + values_str + ")")
				if id >= 0 then
					reply_with_data(req, res, id.out)
				else
					reply_with_data(req, res, "ERROR: Could not insert the new record")
				end
			else
				reply_with_data(req, res, "ERROR: Invalid json")
			end
		end


	get (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			json_object: JSON_OBJECT
		do
			json_object := db.query_single_row("SELECT * FROM " + table_name + " WHERE id=" + get_id(req))
			reply_with_data(req, res, json_object.representation)
		end


	update (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			resource_id: STRING
			j_object: JSON_OBJECT
			id_key: JSON_STRING
			success: BOOLEAN
		do
			j_object := parse_json(req)
			if j_object /= Void then
				create id_key.make_json ("id")
				resource_id := j_object.item(id_key).representation
				j_object.remove (id_key)
				success := db.update("UPDATE " + table_name + " SET " + get_update_assignments(get_fields_and_values_from_json(j_object)) + " WHERE id = " + resource_id)
				if success then
					reply_with_ack(req, res)
				else
					reply_with_data(req, res, "ERROR: Could not update the record")
				end
			else
				reply_with_data(req, res, "ERROR: Invalid json")
			end
		end


	delete (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			db.delete(get_id(req), table_name)
			reply_with_ack(req, res)
		end


feature {NONE} -- Internal helpers	

	parse_json(req: WSF_REQUEST): JSON_OBJECT
		local
			l_payload: STRING
			parser: JSON_PARSER
		do
			create l_payload.make_empty
			req.read_input_data_into (l_payload)
			print("Received json to parse: " + l_payload)
			create parser.make_parser (l_payload)
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				Result := j_object
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


	reply_with_dummy_id (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_data (req, res, "1")
		end


	reply_with_ack (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_data (req, res, "ACK")
		end


	reply_with_data (req: WSF_REQUEST; res: WSF_RESPONSE; data: STRING)
		local
			answer: STRING
		do
			if req_has_cookie (req, "lets_go_session") then
				answer := data
				set_json_header_ok (res, answer.count)
			else
				answer := "Error"
				set_json_header (res, 401, answer.count)
			end
			res.put_string(answer)
		end
end
