note
	description: "Summary description for {SPRINTS_CONTROLLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SPRINTS_CONTROLLER
inherit
	CONTROLLER_BASE
	redefine
		db_model
end
create
	make
feature {NONE}
	make(model: SPRINT; a_session_manager : WSF_SESSION_MANAGER)
		do
			db_model := model
	    	session_manager := a_session_manager
		end
feature {NONE} -- Private attributes
	db_model: SPRINT
feature -- Handlers
	add(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload, name, start_time, end_time, project_id: STRING
			flag: BOOLEAN
			parser: JSON_PARSER
		do
			if req_has_cookie (req, "_session_") then
				create payload.make_empty
				create name.make_empty

				req.read_input_data_into(payload)

				create parser.make_parser(payload)

				flag := false

				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
					if attached {JSON_STRING} j_object.item ("name") as n then
						name := n.unescaped_string_8
					end

					if attached {JSON_STRING} j_object.item ("start_time") as st then
						start_time := st.unescaped_string_8
						flag := true
					end

					if attached {JSON_STRING} j_object.item ("end_time") as et then
						end_time := et.unescaped_string_8
					end

					if attached {JSON_STRING} j_object.item ("project_id") as p_id then
						project_id := p_id.unescaped_string_8
					end
				end

				if flag then
					db_model.new(name, start_time, end_time, project_id)
				else
					db_model.new(name, "", "", project_id)
				end

				prepare_response("Created sprint " + name, 200, res, true)
			else
				prepare_response("User is not logged in",401,res,true)
			end
		rescue
			prepare_response("Something went wrong", 500, res, true)
		end

	by_project(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			project_id, result_payload: STRING
		do
			project_id := req.path_parameter ("project_id").string_representation

			result_payload := db_model.by_project(project_id).representation

			set_json_header_ok(res, result_payload.count)
			res.put_string (result_payload)
		end
end
