note
	description: "Summary description for {PROJECTS_CONTROLLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"
class
	PROJECTS_CONTROLLER
inherit
	CONTROLLER_BASE
	redefine
		db_model
end

create
	make
feature {NONE}
	make(model: PROJECT; a_session_manager : WSF_SESSION_MANAGER)
		do
			db_model := model
	    	session_manager := a_session_manager
		end
feature {NONE} -- Private attributes
	db_model: PROJECT
feature -- Handlers
	add(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload, name, start_time, end_time: STRING
			parser: JSON_PARSER
		do
			if req_has_cookie (req, "_session_") then
				create payload.make_empty
				create name.make_empty

				req.read_input_data_into(payload)

				create parser.make_parser(payload)

				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
					if attached {JSON_STRING} j_object.item ("name") as n then
						name := n.unescaped_string_8
					end

					if attached {JSON_STRING} j_object.item ("start_time") as st then
						start_time := st.unescaped_string_8
					else
						start_time := ""
					end

					if attached {JSON_STRING} j_object.item ("end_time") as et then
						end_time := et.unescaped_string_8
					else
						end_time := ""
					end
				end

				db_model.new(name, start_time, end_time)

				prepare_response("Created project " + name, 200, res, true)
			else
				prepare_response("User is not logged in",401,res,true)
			end
		rescue
			prepare_response("Something went wrong", 500, res, true)
		end
end
