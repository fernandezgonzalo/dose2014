note
	description: "Summary description for {COFFEE_TASK_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_TASK_CTRL

	inherit
	COFFEE_BASE_CONTROLLER
	redefine
		add_data_to_map_add,add_data_to_map_update, add, add_data_to_map_get_all, update, is_authorized_add,
		is_authorized_update, is_authorized_get_all, is_authorized_get, add_data_to_map_get, delete
	end

create
	make


feature -- Handlers


	delete (req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_result: JSON_OBJECT
		l_user_id: STRING
		l_project_id: STRING
		l_task_id: STRING
		l_delete_result: TUPLE[success: BOOLEAN; id: STRING]
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_task_id := req.path_parameter("task_id").string_representation
			l_user_id := get_session_from_req (req, "_coffee_session_").item("id").out
			l_project_id:=my_db.get_project_id_of_task (l_task_id)
			if is_authorized_delete(l_project_id, l_user_id) then
				l_result := my_db.get_from_id (table_name, l_task_id)
				l_delete_result:= my_db.delete(table_name,l_task_id)
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

	is_authorized_add (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	local
		l_project_id: STRING
		l_user_id: STRING
		l_req_id: STRING
	do
		l_req_id := req.path_parameter("req_id").string_representation
		l_project_id := my_db.get_from_id ("requirement",l_req_id).item ("project_id").representation
		l_project_id.replace_substring_all ("%"", "")
		l_user_id := get_session_from_req (req, "_coffee_session_").item("id").out
		Result:= my_db.is_dev_in_project (l_user_id, l_project_id)
	end

	is_authorized_update (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	do
		Result:=is_authorized_add (req, a_map)
	end

	is_authorized_get_all (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	do
		Result:=is_authorized_add (req, a_map)
	end

	is_authorized_get (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	local
	l_task_id: STRING
	l_project_id: STRING
	l_user_id: STRING
	l_req_id: STRING
	do
		l_task_id := req.path_parameter("task_id").string_representation
		l_req_id := my_db.get_from_id ("task",l_task_id).item ("requirement_id").representation
		l_req_id.replace_substring_all ("%"", "")
		l_project_id := my_db.get_from_id ("requirement",l_req_id).item ("project_id").representation
		l_project_id.replace_substring_all ("%"", "")
		l_user_id := get_session_from_req (req, "_coffee_session_").item("id").out
		Result:= my_db.is_dev_in_project (l_user_id, l_project_id)
	end


	add_data_to_map_add (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
			local
				l_req_id: STRING
				l_user_id: STRING
			do
				create l_req_id.make_empty
				create l_user_id.make_empty
				l_req_id := req.path_parameter("req_id").string_representation.out
				l_user_id := get_session_from_req (req, "_coffee_session_").item("id").out
				a_map.keys.extend("requirement_id")
				a_map.values.extend(l_req_id)
				a_map.keys.extend("user_id")
				a_map.values.extend(l_user_id)
		end

	add_data_to_map_update (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
	local
		l_task_id: STRING
	do
		add_data_to_map_add (req, a_map)
		l_task_id := req.path_parameter("task_id").string_representation.out
		a_map.keys.extend("id")
		a_map.values.extend(l_task_id)
	end

	add_data_to_map_get (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		local
			l_task_id: STRING
		do
			create l_task_id.make_empty
			l_task_id := req.path_parameter("task_id").string_representation
			a_map.keys.put_front("id")
			a_map.values.put_front(l_task_id)
		end

	add_data_to_map_get_all (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
	local
		l_req_id: STRING
	do
		l_req_id := req.path_parameter("req_id").string_representation
		a_map.keys.extend ("requirement_id")
		a_map.values.extend (l_req_id)
	end

	add (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
			l_result: JSON_OBJECT
			l_add_result: TUPLE[success: BOOLEAN; id: STRING]
		do
			create l_result.make

			if req_has_cookie (req, "_coffee_session_" ) then
				l_map := parse_request (req)
				add_data_to_map_add (req, l_map)
				if is_authorized_add(req, l_map) then
					l_add_result:= my_db.add_to_task (l_map)
					if l_add_result.success then
						--l_result.put (my_db.get_from_id (table_name, l_add_result.id), table_name)
						l_result:= my_db.get_from_id (table_name, l_add_result.id)
						return_success_without_message (l_result, res)
					else
						return_error(l_result, res,"Could not add to" + table_name, 501)
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
				l_update_result:= my_db.update_task (l_map)
				if l_update_result.success then
					l_result:= my_db.get_from_id (table_name, l_update_result.id)
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



end
