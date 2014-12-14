note
	description: "Summary description for {COFFEE_USER_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_USER_CTRL

	inherit
	COFFEE_BASE_CONTROLLER
	redefine
		add_data_to_map_update, add, add_data_to_map_get, is_authorized_update, get_all, delete, add_data_to_map_delete, update, get
	end

create
	make



feature -- Handlers

	delete (req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_result: JSON_OBJECT
		l_user_id: STRING
		l_delete_result: TUPLE[success: BOOLEAN; id: STRING]
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_user_id := req.path_parameter("user_id").string_representation
			if is_authorized_delete_user(req, l_user_id) then
				l_result := my_db.get_user_from_id (l_user_id)
				l_delete_result:= my_db.delete(table_name,l_user_id)
				if l_delete_result.success then
					return_success_without_message (l_result, res)
				else
					return_error(l_result, res,"Could not delete from" + table_name, 500)
				end
			else
				return_error (l_result, res, "Not authorized", 403)
			end
		else
			return_error(l_result, res, "User not logged in", 404)
		end
	end

	update(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
			l_result: JSON_OBJECT
			l_update_result: TUPLE[success: BOOLEAN; id: STRING]
		do
			create l_result.make
			if req_has_cookie (req, "_coffee_session_" ) then
				l_map := parse_request (req)
				add_data_to_map_update (req, l_map)
				if is_authorized_update(req, l_map) then
					l_update_result:= my_db.update (table_name,l_map)
					if l_update_result.success then
						l_result := my_db.get_user_from_id (l_update_result.id)
						return_success_without_message (l_result, res)
					else
						return_error(l_result, res,"Could not update " + table_name, 501)
					end
				else
					return_error (l_result, res, "Not authorized", 403)
				end

			else
				return_error(l_result, res, "User not logged in", 404)
			end
		end

	is_authorized_delete_user(req: WSF_REQUEST a_user_id:STRING): BOOLEAN
	do
		Result :=  equal(a_user_id, get_session_from_req (req, "_coffee_session_").item("id").out)
	end

	is_authorized_update(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	do
		Result :=  equal(req.path_parameter("user_id").string_representation.out, get_session_from_req (req, "_coffee_session_").item("id").out)
	end

	add_data_to_map_update(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		local
			l_user_id: STRING
		do
			create l_user_id.make_empty
			l_user_id := req.path_parameter("user_id").string_representation
			a_map.keys.extend("id")
			a_map.values.extend(l_user_id)
		end

	add_data_to_map_get(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
	do
		add_data_to_map_update (req, a_map)
	end

	add_data_to_map_delete(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
	do
		add_data_to_map_update (req, a_map)
	end

	add (req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
		l_result: JSON_OBJECT
		l_add_result: TUPLE[success: BOOLEAN; id: STRING]
	do
		create l_result.make
		l_map := parse_request (req)
		if validate_input(l_map) then
			l_map:=hash_and_salt(l_map)
			l_add_result:= my_db.add (table_name,l_map)
			if l_add_result.success then
				l_result := my_db.get_user_from_id (l_add_result.id)
				return_success_without_message (l_result, res)
			else
				return_error(l_result, res,"Could not add to " + table_name, 501)
			end
		else
			return_error(l_result, res,"Validation error", 400)
		end
		end

	get_all(req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
		l_result: JSON_OBJECT
		l_result_array: JSON_ARRAY
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_map := parse_request (req)
			add_data_to_map_get_all (req, l_map)
			if is_authorized_get_all(req,l_map) then
				l_result_array := my_db.get_all_users
				if l_result /= Void then
					return_success_array (l_result_array, res)
				else
					create l_result.make
					return_error(l_result, res,"Could not get from " + table_name, 501)
				end
			else
				return_error (l_result, res, "Not authorized", 403)
			end

		else
			return_error(l_result, res, "User not logged in", 404)
		end
	end

	get(req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
		l_result: JSON_OBJECT
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_map := parse_request (req)
			add_data_to_map_get (req, l_map)
			if is_authorized_get(req,l_map) then
				l_result := my_db.get_user(l_map)
				if l_result /= Void then
					return_success_without_message (l_result, res)
				else
					create l_result.make
					return_error(l_result, res,"Could not get from " + table_name, 501)
				end
			else
				return_error (l_result, res, "Not authorized", 403)
			end

		else
			return_error(l_result, res, "User not logged in", 404)
		end
	end

	hash_and_salt(a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
	local
		l_password: STRING
		l_salt: STRING
		hashed_password: STRING
		bcrypt: BCRYPT
		i:INTEGER
		hash: SHA256
	do
		create bcrypt.make
		l_salt:=bcrypt.default_gensalt
		l_password := get_value_from_map ("password", a_map)
		create hash.make
		hash.update_from_string (l_password + l_salt)
	--	l_password:=get_value_from_map("password",a_map)
    --    hashed_password := bcrypt.hashed_password (l_password, l_salt)
 		i:=get_index_from_map("password", a_map)
  	    a_map.values[i]:=hash.digest_as_string
        a_map.keys.extend ("salt")
        a_map.values.extend (l_salt)
        Result:=a_map
	end


feature {NONE} -- helpers

	validate_input(a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]) : BOOLEAN
	local
		dfa: LX_DFA_REGULAR_EXPRESSION
	do
		create dfa.make
        dfa.compile("^[A-Z0-9._%%+-]+@[A-Z0-9.-]+\.[A-Z]{2,4}$", True)
        Result:= dfa.matches(get_value_from_map ("email", a_map))
	end


	reject(l_result_payload: JSON_OBJECT res: WSF_RESPONSE)

	local

	do
		-- the request has no session cookie and thus the user is not logged in
		-- we return an error stating that the user is not authorized to add todos
	l_result_payload.put_string ("User is not logged in.", create {JSON_STRING}.make_json ("Message"))

		-- set the header to status code 401-unauthorized
	set_json_header (res, 401, l_result_payload.representation.count)

	end


end
