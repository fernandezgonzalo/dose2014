note
	description: "Summary description for {COFFEE_REQ_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_REQ_CTRL

	inherit
	COFFEE_BASE_CONTROLLER
	redefine
		add_data_to_map_add, add_data_to_map_update, add_data_to_map_get_all, add_data_to_map_delete, is_authorized_add, is_authorized_update, is_authorized_get_all, delete, add_data_to_map_get, is_authorized_get
	end

create
	make



feature -- Handlers

	delete (req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_result: JSON_OBJECT
		l_user_id: STRING
		l_project_id: STRING
		l_req_id: STRING
		l_delete_result: TUPLE[success: BOOLEAN; id: STRING]
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_req_id := req.path_parameter("req_id").string_representation
			l_user_id := req.path_parameter("user_id").string_representation
			l_project_id:=my_db.get_project_id_of_req (l_req_id)
			if is_authorized_delete(l_project_id, l_user_id) then
				l_result := my_db.get_from_id (table_name, l_req_id)
				if not my_db.is_task_from_req_in_sprint (l_req_id) then
					l_delete_result:= my_db.delete(table_name,l_req_id)
					if l_delete_result.success then
						return_success_without_message (l_result, res)
					else
						return_error(l_result, res,"Could not delete from" + table_name, 500)
					end
				else
					return_error(l_result, res, "Could not delete because task of requirement is in sprint",406)
				end
			else
				return_error (l_result, res, "Not authorized", 403)
			end
		else
			return_error(l_result, res, "User not logged in", 404)
		end
	end

	add_data_to_map_add (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		local
			l_project_id: STRING
		do
			create l_project_id.make_empty
			l_project_id := req.path_parameter("project_id").string_representation
			a_map.keys.put_front("project_id")
			a_map.values.put_front(l_project_id)
	end

	add_data_to_map_get (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
	local
		l_req_id: STRING
	do
		l_req_id := req.path_parameter("req_id").string_representation
		a_map.keys.put_front("id")
		a_map.values.put_front(l_req_id)
	end

	add_data_to_map_delete (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
	do
		add_data_to_map_add (req, a_map)
	end

	add_data_to_map_get_all (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
	do
		add_data_to_map_add (req, a_map)
	end

	add_data_to_map_update (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
	do
		add_data_to_map_add (req, a_map)
	end

--	is_authorized_delete(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
--	local
--		l_project_id: STRING
--		l_manager_id: STRING
--	do
--		l_project_id := req.path_parameter("project_id").string_representation.out
--		l_manager_id := my_db.get_from_id ("project", l_project_id).item ("manager_id").representation
--		l_manager_id.replace_substring_all("%"", "")
--		Result :=  equal(l_manager_id, get_session_from_req (req, "_coffee_session_").item("id").out)
--	end

	is_authorized_add(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	local
		l_project_id: STRING
		l_manager_id: STRING
	do
		l_project_id := req.path_parameter("project_id").string_representation.out
		l_manager_id := my_db.get_from_id ("project", l_project_id).item ("manager_id").representation
		l_manager_id.replace_substring_all("%"", "")
		Result :=  equal(l_manager_id, get_session_from_req (req, "_coffee_session_").item("id").out)
	end

	is_authorized_update(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	do
		Result:= is_authorized_add (req, a_map)
	end

	is_authorized_get (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	local
	l_req_id: STRING
	l_project_id: STRING
	l_user_id: STRING
	do
		l_req_id := req.path_parameter("req_id").string_representation
		l_project_id := my_db.get_from_id ("requirement",l_req_id).item ("project_id").representation
		l_project_id.replace_substring_all ("%"", "")
		l_user_id := get_session_from_req (req, "_coffee_session_").item("id").out
		Result:= my_db.is_dev_in_project (l_user_id, l_project_id)
	end

	is_authorized_get_all(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	local
		l_project_id: STRING
		l_user_id: STRING
	do
		l_project_id := req.path_parameter("project_id").string_representation.out
		l_user_id := get_session_from_req (req, "_coffee_session_").item("id").out
		Result:= my_db.is_dev_in_project (l_user_id, l_project_id)
	end

end
