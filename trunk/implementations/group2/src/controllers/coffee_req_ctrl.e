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
		add_data_to_map_add
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

end
