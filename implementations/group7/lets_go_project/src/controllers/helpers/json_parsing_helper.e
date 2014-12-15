note
	description: "Helper methods for dealin with json."
	author: "ar"
	date: "18.11.14"


deferred class
	JSON_HELPER


feature {NONE} -- String to json conversion and vice versa

	jkey(key: STRING): JSON_STRING
			-- Returns a json string for 'key'.
		do
			Result := create {JSON_STRING}.make_json(key)
		end


	get_string_from_json(value: JSON_VALUE): STRING
			-- Return the given 'json' value without quotes.
		do
			Result := get_without_quotes(value.representation)
		end


	get_without_quotes(value: STRING): STRING
			-- Return the given 'value' without quotes.
		do
			Result := value
			Result.replace_substring_all("%"", "")
		end


	get_value_from_json(json_object: JSON_OBJECT; key: JSON_STRING): STRING
			-- Returns json_object[key]
			-- If this is null, return Void.
		do
			Result := json_object.item(key).representation
			if Result.is_equal("null") then
				Result := Void
			end
		end


	get_fields_from_json(json_object: JSON_OBJECT): ARRAY[STRING]
			-- Return an array containing all fields of 'json_object'
		local
			keys: ARRAY[JSON_STRING]
			i: INTEGER
		do
			keys := json_object.current_keys
			create Result.make_filled ("", 1, keys.count)

			from
                i := 1
            until
                i > keys.count
            loop
            	Result.put(keys.at(i).representation, i)
                i := i + 1
            end
		end


feature {NONE} -- Json to object conversion (json parsing helpers)

	get_json_object_from_request(req: WSF_REQUEST): JSON_OBJECT
			-- Read and parse the content of the request 'req' and return the corresponding json object
			-- To be used for content of the form {"key": value}
		local
			l_payload: STRING
		do
			create l_payload.make_empty
			req.read_input_data_into (l_payload)
			print("%N%NJSON: " + l_payload)
			Result := get_json_object_from_string(l_payload)
		end


	get_json_object_from_string(data: STRING): JSON_OBJECT
			-- Parse the content of the request 'req' and return the corresponding json object
			-- To be used for content of the form {"key": value}
		local
			parser: JSON_PARSER
		do
			create parser.make_parser (data)
			if attached {JSON_OBJECT} parser.parse as j_object then
				Result := j_object
			end
		end


	get_json_array_from_string(data: STRING): JSON_ARRAY
			-- Parse the content of the request 'req' and return the corresponding array of json objects
			-- To be used for content of the form [{"key": value}, {"key": value}]
		local
			parser: JSON_PARSER
		do
			create parser.make_parser (data)
			if attached {JSON_ARRAY} parser.parse as j_array then
				Result := j_array
			end
		end
end
