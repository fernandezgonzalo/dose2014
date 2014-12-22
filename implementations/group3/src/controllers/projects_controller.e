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

feature {NONE} -- Creation
	make(model: PROJECT; a_session_manager: WSF_SESSION_MANAGER)
		do
			db_model := model
			session_manager := a_session_manager
		end
feature {NONE} -- Private attributes
	db_model: PROJECT
	session_manager: WSF_SESSION_MANAGER
feature -- Handlers
	add(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload, name, start_time, end_time: STRING
			flag: BOOLEAN
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
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
			end

			if flag then
				db_model.new(name, start_time, end_time)
			else
				db_model.new(name, "", "")
			end

			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Created project " + name), create {JSON_STRING}.make_json ("Message"))

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

end
