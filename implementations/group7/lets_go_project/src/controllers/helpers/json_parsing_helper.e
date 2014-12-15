note
	description: "Helper methods for json parsing."
	author: "ar"
	date: "18.11.14"
	revision: "$Revision$"

class
	JSON_PARSING_HELPER


feature

	get_json_object_from_request(req: WSF_REQUEST): JSON_OBJECT
		local
			l_payload: STRING
		do
			create l_payload.make_empty
			req.read_input_data_into (l_payload)
			print("%N%NJSON: " + l_payload)
			Result := get_json_object_from_string(l_payload)
		end


	get_json_object_from_string(data: STRING): JSON_OBJECT
		local
			parser: JSON_PARSER
		do
			create parser.make_parser (data)
			if attached {JSON_OBJECT} parser.parse as j_object then
				Result := j_object
			end
		end


	get_json_array_from_string(data: STRING): JSON_ARRAY
		local
			parser: JSON_PARSER
		do
			create parser.make_parser (data)
			if attached {JSON_ARRAY} parser.parse as j_array then
				Result := j_array
			end
		end


	get_string_from_json(json: JSON_VALUE): STRING
		do
			Result := json.representation
			Result.replace_substring_all ("%"", "")
		end

	jkey(key: STRING): JSON_STRING
		do
			Result := create {JSON_STRING}.make_json(key)
		end

end
