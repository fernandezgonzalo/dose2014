note
	description: "Inherit this class in the a controller that access to the session manager"
	author: "ar"

deferred class
	SESSION_HELPER

feature
	session_manager: WSF_SESSION_MANAGER
		deferred
		end

feature

	req_has_cookie (req: WSF_REQUEST): BOOLEAN
			-- checks if the request has a cookie with the right name
		do
			Result := False

			if attached {WSF_STRING} req.cookie ("lets_go_session") as c_id then
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


	get_user_id_from_req(req: WSF_REQUEST): STRING
		local
			session: WSF_SESSION_DATA
			id: ANY
		do
			session := get_session_from_req(req, "lets_go_session")
			if session /= Void and then session.at("id") /= Void then
				Result := session.at("id").out
			end
		end

end