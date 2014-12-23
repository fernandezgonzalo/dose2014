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
	req_has_cookie(req: WSF_REQUEST; a_cookie_name: STRING): BOOLEAN
		do
			Result := False

			if attached {WSF_STRING} req.cookie (a_cookie_name) as c_id then
				Result := session_manager.session_exists (c_id.value)
			end
		end


	get_session_from_req(req: WSF_REQUEST; a_cookie_name: STRING): detachable WSF_SESSION_DATA
		local
			l_session_id: STRING
		do
			Result := Void

			if attached {WSF_STRING} req.cookie (a_cookie_name) as c_id then
				l_session_id := c_id.value
				Result := session_manager.session_data (l_session_id)
			end
		end
end
