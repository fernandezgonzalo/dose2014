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
			add_data_to_map_add, add_data_to_map_update, add_data_to_map_delete
		end

create
	make

feature -- Handlers

	add_data_to_map_add(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		local
			l_manager_id: STRING
		do
			create l_manager_id.make_empty
			l_manager_id := get_session_from_req (req, "_coffee_session_").item("id").out
			a_map.keys.put_front("manager_id")
			a_map.values.put_front(l_manager_id)
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
			a_map.keys.put_front("id")
			a_map.values.put_front(l_project_id)
			a_map.keys.put_front("manager_id")
			a_map.values.put_front(l_manager_id)
		end

	add_data_to_map_delete(req: WSF_REQUEST a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]])
		do
			add_data_to_map_update (req, a_map)
		end

	get_projects (req: WSF_REQUEST; res: WSF_RESPONSE)

	local

	do

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
