note
	description: "Provides helper functions to set the HTTP header of a response that returns json."
	author: "hce"

class
	CONTROLLER_BASE
inherit
	SESSION_HELPER
feature
	update(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload: STRING
			parser: JSON_PARSER
			j_obj: JSON_OBJECT
			id: STRING
		do
			if req_has_cookie (req, "_session_") then
				create payload.make_empty
				create id.make_empty

				id := req.path_parameter ("id").string_representation

				req.read_input_data_into(payload)
				create parser.make_parser(payload)

				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
					j_obj := j_object
					db_model.update_fields(j_obj, id.to_integer)
				end

				prepare_response("Successfull update", 200, res, true)
			else
				prepare_response("User is not logged in",401,res,true)
			end
		end

	get_all(req: WSF_REQUEST; res: WSF_RESPONSE)
		local

			payload: STRING
		do
			payload := db_model.get_all.representation

			set_json_header_ok(res, payload.count)
			res.put_string(payload)
		end

	remove(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			id: STRING
			l_result: JSON_OBJECT
		do
			if req_has_cookie (req, "_session_") then
				id := req.path_parameter("id").string_representation
				db_model.delete_by_id(id.to_natural)

				prepare_response("Successfull update", 200, res, true)
			else
				prepare_response("User is not logged in", 401,res,true)
			end
		end


	show(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			id, result_payload: STRING
		do
			id := req.path_parameter ("id").string_representation

			result_payload := db_model.get_by_id(id.to_natural).representation

			set_json_header_ok(res, result_payload.count)
			res.put_string (result_payload)
		end


feature {NONE}
	set_json_header_ok (res: WSF_RESPONSE; a_content_length: INTEGER)
			-- sets the header of the given repsonse to status code 200
			-- sets the content type to json
			-- sets the content lenght according to `a_content_lenght'
		do
			res.set_status_code (200)
			res.header.put_content_type_application_json
			res.header.put_content_length (a_content_length)
		end
	set_json_header_error (res: WSF_RESPONSE; a_content_length: INTEGER)
			-- sets the header of the given repsonse to status code 400
			-- sets the content type to json
			-- sets the content lenght according to `a_content_lenght'
		do
			res.set_status_code (400)
			res.header.put_content_type_application_json
			res.header.put_content_length (a_content_length)
		end

	prepare_response (content : STRING; a_status_code : INTEGER; res : WSF_RESPONSE ; is_message : BOOLEAN)
		local
			json_result : JSON_OBJECT
		do
			res.set_status_code(a_status_code)
			res.header.put_content_type_application_json
			create json_result.make
			if is_message then
				json_result.put_string ( content , create {JSON_STRING}.make_json ("Message"))
				res.header.put_content_length (json_result.representation.count)
				res.put_string (json_result.representation)
			else
				res.header.put_content_length (content.count)
				res.put_string(content)
			end
		end

	db_model : DB_MAPPER_BASE
	session_manager: WSF_SESSION_MANAGER
end
