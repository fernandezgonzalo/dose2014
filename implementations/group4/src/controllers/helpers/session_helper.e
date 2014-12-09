note
	description: "[
		Helper functions checking request for session cookies.
		 Inherit this class in the controller that access to the session manager
		 ]"
	author: "hce"

deferred class
	SESSION_HELPER

feature
	session_manager: WSF_SESSION_MANAGER
		deferred
		end

feature

	req_has_cookie (req: WSF_REQUEST; a_cookie_name: STRING): BOOLEAN
			-- checks if the request has a cookie with the given name
			-- returns true if it has, otherwise false
		do
			Result := False

			if attached {WSF_STRING} req.cookie (a_cookie_name) as c_id then
				Result := session_manager.session_exists (c_id.value)
			end
		end


	get_session_from_req (req: WSF_REQUEST; a_cookie_name: STRING): detachable WSF_SESSION_DATA
			-- returns the session data that belongs to the session cookie of name a_cookie_name
		local
			l_session_id: STRING
		do
				-- we might return Void if we can't find a session cookie with name a_cookie_name
			Result := Void

				-- check if we have a session cookie; if yes, get the session id
			if attached {WSF_STRING} req.cookie (a_cookie_name) as c_id then
				l_session_id := c_id.value
				Result := session_manager.session_data (l_session_id)
			end
		end

	prepare_response (message : STRING; a_status_code : INTEGER; res : WSF_RESPONSE)
			-- Prepare the response `resp' with a json_object that contains a `message' `and a_status_code'
		local
			json_result : JSON_OBJECT
		do
			create json_result.make
			json_result.put_string ( message , create {JSON_STRING}.make_json ("Message"))
			res.set_status_code (a_status_code)
			res.header.put_content_type_application_json
			res.header.put_content_length (json_result.representation.count)
			res.put_string(json_result.representation)
		end

	prepare_response_2 (content : STRING; a_status_code : INTEGER; res : WSF_RESPONSE ; is_message : BOOLEAN)
			-- Prepare the response `resp' with a json_object that contains a `message' `and a_status_code'
		local
			json_result : JSON_OBJECT
		do
			res.set_status_code (a_status_code)
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

end
