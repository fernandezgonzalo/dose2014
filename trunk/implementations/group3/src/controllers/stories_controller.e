note
	description: "Summary description for {STORIES_CONTROLLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STORIES_CONTROLLER
inherit
	CONTROLLER_BASE
	redefine
		make,
		db_model
end

create
	make

feature {NONE} -- Creation
	make(model: STORY)
		do
			db_model := model
		end
feature {NONE} -- Private attributes
	db_model: STORY
feature -- Handlers
	add(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload, name, sprint_id: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
			create payload.make_empty
			create name.make_empty

			req.read_input_data_into(payload)

			create parser.make_parser(payload)

			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				if attached {JSON_STRING} j_object.item ("name") as n then
					name := n.unescaped_string_8
				end

				if attached {JSON_STRING} j_object.item ("sprint_id") as s_id then
					sprint_id := s_id.unescaped_string_8
				end
			end

			db_model.new(name, sprint_id)

			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Created story " + name), create {JSON_STRING}.make_json ("Message"))

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	by_sprint(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			sprint_id, result_payload: STRING
		do
			sprint_id := req.path_parameter ("sprint_id").string_representation

			result_payload := db_model.by_sprint(sprint_id).representation

			set_json_header_ok(res, result_payload.count)
			res.put_string (result_payload)
		end
end
