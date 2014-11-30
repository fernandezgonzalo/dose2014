note
	description: "Summary description for {COFFEE_PROJECT_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_PROJECT_CTRL

	inherit
		COFFEE_BASE_CONTROLLER
		redefine
			add_data_to_map_update, add_data_to_map_delete, get_all, add, is_authorized_update, add_data_to_map_get, is_authorized_get,
			delete
		end

create
	make

feature -- Handlers

	add(req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		keys: ARRAYED_LIST[STRING]
		values: ARRAYED_LIST[STRING]
		l_project_id: STRING
		l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
		l_result: JSON_OBJECT
		l_add_result: TUPLE[success: BOOLEAN; id: STRING]
		l_manager_id: STRING
	do
			create l_result.make

			if req_has_cookie (req, "_coffee_session_" ) then
				l_map := parse_request (req)
				create l_manager_id.make_empty
				create keys.make_filled (3)
				create values.make_filled (3)
				l_manager_id := get_session_from_req (req, "_coffee_session_").item("id").out
				l_map.keys.put_front("manager_id")
				l_map.values.put_front(l_manager_id)
				l_add_result:= my_db.add (table_name,l_map)
				if l_add_result.success then
					l_project_id:= l_add_result.id
					keys.put_i_th ("user_id", 1)
					keys.put_i_th ("project_id", 2)
					keys.put_i_th ("points", 3)
					values.put_i_th (l_manager_id, 1)
					values.put_i_th (l_project_id ,2)
					values.put_i_th ("0", 3)
					l_add_result := my_db.add ("developer_mapping", [keys,values])
					if l_add_result.success then
						--l_result.put (my_db.get_from_id (table_name, l_add_result.id), table_name)
						l_result:= my_db.get_from_id (table_name, l_add_result.id)
						return_success_without_message (l_result, res)
					else
						return_error(l_result, res,"Could not add to developer_mapping", 501)
					end
				else
					return_error(l_result, res,"Could not add to" + table_name, 501)
				end

			else
				return_error(l_result, res, "User not logged in", 404)

			end
	end

	delete (req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_result: JSON_OBJECT
		l_user_id: STRING
		l_project_id: STRING
		l_delete_result: TUPLE[success: BOOLEAN; id: STRING]
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_project_id := req.path_parameter("project_id").string_representation
			l_user_id := req.path_parameter("user_id").string_representation
			if is_authorized_delete(l_project_id, l_user_id) then
				l_result := my_db.get_from_id (table_name, l_project_id)
				l_delete_result:= my_db.delete(table_name,l_project_id)
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


	add_data_to_map_update(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		local
			l_manager_id: STRING
			l_project_id: STRING
		do
			create l_manager_id.make_empty
			create l_project_id.make_empty
			l_manager_id := get_session_from_req (req, "_coffee_session_").item("id").out
			l_project_id := req.path_parameter("project_id").string_representation
			a_map.keys.extend("id")
			a_map.values.extend(l_project_id)
			a_map.keys.extend("manager_id")
			a_map.values.extend(l_manager_id)
		end

	add_data_to_map_delete(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		do
			add_data_to_map_update (req, a_map)
		end

	add_data_to_map_get(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		do
			add_data_to_map_update (req, a_map)
		end

	get_all(req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_result: JSON_OBJECT
		l_result_array: JSON_ARRAY
		l_user_id: STRING
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_user_id := req.path_parameter("user_id").string_representation
			l_result_array := my_db.get_all_from_project(l_user_id)
			if l_result /= Void then
				--l_result.put_string (l_result_array.representation,"projects")
				return_success_array (l_result_array, res)
			else
				create l_result.make
				return_error(l_result, res,"Could not get from " + table_name, 501)
			end
		else
			return_error(l_result, res, "User not logged in", 404)
		end
	end

	get_users(req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_result: JSON_OBJECT
		l_result_array: JSON_ARRAY
		l_project_id: STRING
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_project_id := req.path_parameter("project_id").string_representation
			l_result_array := my_db.get_users_from_project(l_project_id)
			if l_result /= Void then
				--l_result.put_string (l_result_array.representation,"users")
				return_success_array (l_result_array, res)
			else
				create l_result.make
				return_error(l_result, res,"Could not get from " + table_name, 501)
			end
		else
			return_error(l_result, res, "User not logged in", 404)
		end
	end


--	is_authorized_delete(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
--	do
--		Result :=  is_authorized_update (req, a_map)
--	end

	is_authorized_update(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	local
		l_manager_id: STRING
	do
		l_manager_id:= my_db.get_from_id("project",get_value_from_map ("id", a_map)).item("manager_id").representation
		l_manager_id.replace_substring_all ("%"", "")
		Result :=  equal(l_manager_id, get_session_from_req (req, "_coffee_session_").item("id").out)
	end

	is_authorized_get(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	local
		l_user_id: STRING
	do
		l_user_id := get_session_from_req (req, "_coffee_session_").item("id").out
		l_user_id.replace_substring_all ("%"", "")
		Result:= my_db.is_dev_in_project (l_user_id, get_value_from_map ("id", a_map))
	end

feature {NONE} -- helpers
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
