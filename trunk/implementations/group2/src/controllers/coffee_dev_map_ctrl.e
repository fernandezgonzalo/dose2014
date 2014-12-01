note
	description: "Summary description for {COFFEE_DEV_MAP_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_DEV_MAP_CTRL
inherit
	COFFEE_BASE_CONTROLLER
	redefine
		add_data_to_map_add, delete
	end


create
	make

feature
	add_data_to_map_add(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		local
			l_user_id: STRING
		do
			create l_user_id.make_empty
			l_user_id := req.path_parameter("user_id").string_representation
			a_map.keys.put_front("user_id")
			a_map.values.put_front(l_user_id)
			a_map.keys.put_front("points")
			a_map.values.put_front("0")
		end

	delete(req: WSF_REQUEST; res: WSF_RESPONSE)
	local
	--	l_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]
		l_result: JSON_OBJECT
		l_user_id: STRING
		l_project_id: STRING
		l_manager_id: STRING
		l_delete_result: TUPLE[success: BOOLEAN; id: STRING]
	do
		create l_result.make
		if req_has_cookie (req, "_coffee_session_" ) then
			l_manager_id := get_session_from_req (req, "_coffee_session_").item("id").out
			create l_user_id.make_empty
			create l_project_id.make_empty
			l_user_id := req.path_parameter("user_id").string_representation
			l_project_id := req.path_parameter("project_id").string_representation
			if is_authorized_delete(l_project_id,l_manager_id) then
				if equal(l_manager_id, l_user_id) then
					return_error(l_result, res,"Could not remove project manager from project", 403)
				else
					l_delete_result:= my_db.delete_user_from_project(l_user_id,l_project_id)
					if l_delete_result.success then
						l_result := my_db.get_from_id ("user", l_delete_result.id)
						return_success_without_message (l_result, res)
					else
						return_error(l_result, res,"Could not delete from" + table_name, 501)
					end
				end

			end
		else
			return_error(l_result, res, "User not logged in", 404)
		end
	end

end
