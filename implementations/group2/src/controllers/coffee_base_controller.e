note
	description: "Summary description for {COFFEE_BASE_CONTROLLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

deferred class
	COFFEE_BASE_CONTROLLER
inherit
	COFFEE_HEADER_JSON_HELPER
		-- inherit this helper to get a procedure that simplifies setting
		-- the HTTP response header correctly
	COFFEE_SESSION_HELPER



feature {NONE} -- Creation

	make (a_dao: COFFEE_DB a_session_manager: WSF_SESSION_MANAGER a_table_name: STRING)
		do
			my_db := a_dao
			session_manager := a_session_manager
			table_name := a_table_name
		end

feature {NONE} -- Private attributes

	my_db: COFFEE_DB
	session_manager: WSF_SESSION_MANAGER
	table_name : STRING

feature
	add (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
			create l_result.make

			if req_has_cookie (req, "_coffee_session_" ) then
				l_map := parse_request (req)
				add_data_to_map_add (req, l_map)
				if my_db.add (table_name,l_map)then
					return_success (l_result, res)
				else
					return_error(l_result, res,"Could not add " + table_name, 501)
				end

			else
				return_error(l_result, res, "User not logged in", 404)

			end
	end

	update(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
			create l_result.make
			if req_has_cookie (req, "_coffee_session_" ) then
				l_map := parse_request (req)
				add_data_to_map_update (req, l_map)
				if my_db.update (table_name,l_map)then
					return_success (l_result, res)
				else
					return_error(l_result, res,"Could not update " + table_name, 501)
				end

			else
				return_error(l_result, res, "User not logged in", 404)
			end
		end

	delete(req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
		l_result: JSON_OBJECT
		l_id: STRING
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_map := parse_request (req)
			add_data_to_map_delete (req, l_map)
			if my_db.delete(table_name,l_map) then
				return_success (l_result, res)
			else
				return_error(l_result, res,"Could not delete " + table_name, 501)
			end

		else
			return_error(l_result, res, "User not logged in", 404)
		end
	end

feature
	is_authorized: BOOLEAN
	do
	end

	add_data_to_map_add(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		do
		end
	add_data_to_map_update(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		do
		end
	add_data_to_map_delete(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		do
		end
	add_data_to_map_get(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		do
		end

feature {NONE} -- helpers

	return_success(l_result: JSON_OBJECT res: WSF_RESPONSE)
	do
		l_result.put (create {JSON_STRING}.make_json ("OK"), create {JSON_STRING}.make_json ("Message"))
		set_json_header_ok (res, l_result.representation.count)
		res.put_string (l_result.representation)
	end

	return_error(l_result: JSON_OBJECT res: WSF_RESPONSE l_message: STRING a_error_code: INTEGER)
	do
		l_result.put (create {JSON_STRING}.make_json (l_message), create {JSON_STRING}.make_json ("Message"))
		set_json_header (res,a_error_code, l_result.representation.count)
		res.put_string (l_result.representation)
	end

	parse_request(req: WSF_REQUEST) : TUPLE [key: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]

	local
		parser: JSON_PARSER
		l_payload: STRING
		l_counter: INTEGER
		keys: ARRAYED_LIST[STRING]
		values: ARRAYED_LIST[STRING]

	do
		create l_payload.make_empty
		l_counter := 1
		req.read_input_data_into (l_payload)
		if l_payload /= Void and l_payload.count>0 then
			create parser.make_parser (l_payload)
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				create keys.make_filled (j_object.count)
				create values.make_filled (j_object.count)
					across j_object.current_keys as key
					loop
					keys.put_i_th(key.item.representation,l_counter)
					values.put_i_th (j_object.item(key.item).representation, l_counter)
					l_counter := l_counter + 1
					end
				end
			else
			create keys.make_filled (1)
			create values.make_filled (1)
		end
		Result := [keys,values]
	end

end
