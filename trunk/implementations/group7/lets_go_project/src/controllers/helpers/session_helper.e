note
	description: "Helper for classes with authorization (sessions)."
	author: "ar"
	date: "18.11.14"


deferred class
	SESSION_HELPER


feature {NONE} -- Attributes
	session_manager: WSF_SESSION_MANAGER
		deferred
		end


feature {NONE} -- Convenience methods for session handling

	req_has_cookie (req: WSF_REQUEST): BOOLEAN
			-- Checks if the request has a cookie with the right name.
		do
			Result := False

			if attached {WSF_STRING} req.cookie ("lets_go_session") as c_id then
				Result := session_manager.session_exists (c_id.value)
			end
		end


	get_user_id_from_req(req: WSF_REQUEST): STRING
			-- Returns the user id stored in the cookie of the request 'req'.
		local
			session: WSF_SESSION_DATA
			id: ANY
		do
			session := get_session_from_req(req, "lets_go_session")
			if session /= Void and then session.at("id") /= Void then
				Result := session.at("id").out
			end
		end


	get_salted_and_hashed_password(password, id: STRING): STRING
			-- Returns the hashed 'password' salted with some 'id'.
		local
	        hash: SHA256
		do
			create hash.make
	        hash.update_from_string(password + id)
	        Result := hash.digest_as_string
		end


feature {NONE} -- Internal helpers

	get_session_from_req (req: WSF_REQUEST; a_cookie_name: STRING): detachable WSF_SESSION_DATA
			-- Returns the session data that belongs to the session cookie of name a_cookie_name
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
end
