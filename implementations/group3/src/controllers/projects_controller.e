note
	description: "Summary description for {PROJECTS_CONTROLLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"
class
	PROJECTS_CONTROLLER

	inherit
	HEADER_JSON_HELPER
create
	make
feature {NONE} -- Creation
	make(model: PROJECT)
		do
			Project := model
		end
feature {NONE} -- Private attributes
	Project: PROJECT
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

			project.new(name)

			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Created project " + name), create {JSON_STRING}.make_json ("Message"))

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


	remove(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			project_id: STRING
			l_result: JSON_OBJECT
		do
			project_id := req.path_parameter("project_id").string_representation
			Project.delete(project_id.to_natural)

			create l_result.make
			l_result.put(create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


	get_all(req: WSF_REQUEST; res: WSF_RESPONSE)
		local

			payload: STRING
		do
			payload := Project.get_all.representation

			set_json_header_ok(res, payload.count)
			res.put_string(payload)
		end
end
