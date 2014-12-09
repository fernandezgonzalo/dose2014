note
	description: "Summary description for {COFFEE_SPRINT_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_SPRINT_CTRL

	inherit
	COFFEE_BASE_CONTROLLER
	redefine
	add_data_to_map_add, add_data_to_map_get_all, add_data_to_map_update, is_authorized_add, is_authorized_get_all,
	is_authorized_update, is_authorized_get, add_data_to_map_get, delete, add, update
	end

create
	make



feature -- Handlers
	add_data_to_map_add (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		local
			l_project_id: STRING
		do
			create l_project_id.make_empty
			l_project_id := req.path_parameter("project_id").string_representation
			a_map.keys.extend("project_id")
			a_map.values.extend(l_project_id)
	end

	add_data_to_map_get_all (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
	do
		add_data_to_map_add (req, a_map)
	end

	add_data_to_map_update (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		local
			l_sprint_id: STRING
		do
			create l_sprint_id.make_empty
			l_sprint_id := req.path_parameter("sprint_id").string_representation
			a_map.keys.extend("id")
			a_map.values.extend(l_sprint_id)
	end


	add_data_to_map_get (req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
	local
		l_sprint_id: STRING
	do
		create l_sprint_id.make_empty
		l_sprint_id := req.path_parameter("sprint_id").string_representation
		a_map.keys.extend("id")
		a_map.values.extend(l_sprint_id)
	end

	delete (req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_result: JSON_OBJECT
		l_user_id: STRING
		l_project_id: STRING
		l_sprint_id: STRING
		l_delete_result: TUPLE[success: BOOLEAN; id: STRING]
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_sprint_id := req.path_parameter("sprint_id").string_representation
			l_user_id := get_session_from_req (req, "_coffee_session_").item("id").out
			l_project_id:=my_db.get_project_id_of_sprint (l_sprint_id)
			if is_authorized_delete(l_project_id, l_user_id) then
				l_result := my_db.get_from_id (table_name, l_sprint_id)
				l_delete_result:= my_db.delete(table_name,l_sprint_id)
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

	add (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
			l_result: JSON_OBJECT
			l_add_result: TUPLE[success: BOOLEAN; id: STRING]
			l_start_date, l_end_date: DATE
		do
			create l_result.make
			if req_has_cookie (req, "_coffee_session_" ) then
				l_map := parse_request (req)
				add_data_to_map_add (req, l_map)
				create l_start_date.make_from_string_default (get_value_from_map("start_date",l_map))
				create l_end_date.make_from_string_default (get_value_from_map("end_date",l_map))
				if is_authorized_add(req, l_map) then
					if not my_db.is_sprint_overlapping(l_start_date,l_end_date,get_value_from_map("project_id",l_map)) then
						l_add_result:= my_db.add (table_name,l_map)
						if l_add_result.success then
							--l_result.put (my_db.get_from_id (table_name, l_add_result.id), table_name)
							l_result := my_db.get_from_id (table_name, l_add_result.id)
							return_success_without_message (l_result, res)
						else
							return_error(l_result, res,"Could not add to" + table_name, 501)
						end
					else
						return_error(l_result, res,"Sprints of a project can't overlap", 400)
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
			l_start_date, l_end_date: DATE
		do
			create l_result.make
			if req_has_cookie (req, "_coffee_session_" ) then
				l_map := parse_request (req)
				add_data_to_map_update (req, l_map)
				create l_start_date.make_from_string_default (get_value_from_map("start_date",l_map))
				create l_end_date.make_from_string_default (get_value_from_map("end_date",l_map))
				if is_authorized_update(req, l_map) then
					if not my_db.is_sprint_overlapping(l_start_date,l_end_date,get_value_from_map("project_id",l_map)) then
						l_update_result:= my_db.update (table_name,l_map)
						if l_update_result.success then
							--l_result.put (my_db.get_from_id (table_name, l_add_result.id), table_name)
							l_result := my_db.get_from_id (table_name, l_update_result.id)
							return_success_without_message (l_result, res)
						else
							return_error(l_result, res,"Could not add to" + table_name, 501)
						end
					else
						return_error(l_result, res,"Sprints of a project can't overlap", 400)
					end
				else
					return_error (l_result, res, "Not authorized", 403)
				end

			else
				return_error(l_result, res, "User not logged in", 404)
			end
		end

	get_all_tasks(req: WSF_REQUEST; res: WSF_RESPONSE)
	local
		l_result: JSON_OBJECT
		l_result_array: JSON_ARRAY
		l_sprint_id: STRING
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_sprint_id := req.path_parameter("sprint_id").string_representation
			l_result_array := my_db.get_tasks_from_sprint(l_sprint_id)
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
	local
	l_sprint_id: STRING
	l_project_id: STRING
	l_user_id: STRING
	l_manager_id: STRING
	do
		l_sprint_id := req.path_parameter("sprint_id").string_representation
		l_project_id := my_db.get_from_id ("sprint",l_sprint_id).item ("project_id").representation
		l_project_id.replace_substring_all ("%"", "")
		l_manager_id := my_db.get_from_id ("project", l_project_id).item ("manager_id").representation
		l_manager_id.replace_substring_all("%"", "")
		l_user_id := get_session_from_req (req, "_coffee_session_").item("id").out
		Result:= equal(l_user_id, l_manager_id)
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

	is_authorized_get(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	local
	l_sprint_id: STRING
	l_project_id: STRING
	l_user_id: STRING
	do
		l_sprint_id := req.path_parameter("sprint_id").string_representation
		l_project_id := my_db.get_from_id ("sprint",l_sprint_id).item ("project_id").representation
		l_project_id.replace_substring_all ("%"", "")
		l_user_id := get_session_from_req (req, "_coffee_session_").item("id").out
		Result:= my_db.is_dev_in_project (l_user_id, l_project_id)
	end
end
