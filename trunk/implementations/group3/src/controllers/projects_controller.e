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
		make,
		db_model
end

create
	make

feature {NONE} -- Creation
	make(model: PROJECT)
		do
			db_model := model
		end
feature {NONE} -- Private attributes
	db_model: PROJECT
feature -- Handlers
	add(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload, name: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
			create payload.make_empty
			create name.make_empty

			req.read_input_data_into(payload)

			create parser.make_parser(payload)

			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				if attached {JSON_STRING} j_object.item ("name") as s then
					name := s.unescaped_string_8
				end

			end

			db_model.new(name)

			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Created project " + name), create {JSON_STRING}.make_json ("Message"))

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

end
