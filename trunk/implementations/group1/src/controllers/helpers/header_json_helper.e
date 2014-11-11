note
	description: "Provides helper functions to set the HTTP header of a response that returns json."
	author: "Giovannini Guido"

class
	HEADER_JSON_HELPER


feature

	set_json_header_ok (res: WSF_RESPONSE; a_content_length: INTEGER)
			-- sets the header of the given repsonse to status code 200
			-- sets the content type to json
			-- sets the content lenght according to `a_content_lenght'
		do
			res.set_status_code (200)
			res.header.put_content_type_application_json
			res.header.put_content_length (a_content_length)
		end

end
