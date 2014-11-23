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
		add_data_to_map_add, add_data_to_map_update, add_data_to_map_get_all, add_data_to_map_delete, is_authorized_add, is_authorized_delete, is_authorized_update, is_authorized_get_all
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
			a_map.keys.put_front("project_id")
			a_map.values.put_front(l_project_id)
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

	is_authorized_delete(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	local
		l_project_id: STRING
		l_manager_id: STRING
	do
		l_project_id := req.path_parameter("project_id").string_representation.out
		l_manager_id := my_db.get_from_id ("project", l_project_id).item ("manager_id").representation
		l_manager_id.replace_substring_all("%"", "")
		Result :=  equal(l_manager_id, get_session_from_req (req, "_coffee_session_").item("id").out)
	end

	is_authorized_add(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	do
		Result:= is_authorized_delete (req, a_map)
	end

	is_authorized_update(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): BOOLEAN
	do
		Result:= is_authorized_delete (req, a_map)
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
