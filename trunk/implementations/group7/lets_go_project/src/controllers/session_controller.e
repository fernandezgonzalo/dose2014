note
	description: "Controls user sessions (login/logout)."
	author: "ar"
	date: "14.11.2014"

class
	SESSION_CONTROLLER

inherit
	HEADER_JSON_HELPER

create
	make


feature {NONE} -- Creation

	make (a_db: DATABASE; a_session_manager: WSF_SESSION_MANAGER)
		do
			db := a_db
			session_manager := a_session_manager
		end


feature {NONE} -- Private attributes

	db: DATABASE

	session_manager: WSF_SESSION_MANAGER


feature -- Handlers


	login (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- login a user if the email and password provided with the request are correct
			-- "login" is done via attaching a session cookie to the response. The browser will
			-- then send this session cookie on all subsequent request, allowing us to lookup the
			-- session data for that user based on the cookie

		local
			l_payload, l_username, l_password: STRING
			parser: JSON_PARSER


				-- if true the username and password match
			l_user_data: TUPLE [has_user: BOOLEAN; id: STRING; username: STRING]

				-- a session
			l_session: WSF_COOKIE_SESSION

		do
				-- create emtpy string object
			create l_payload.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- in this case the username and password
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("email") as s then
					l_username := s.unescaped_string_8
				end

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("password") as s then
					l_password := s.unescaped_string_8
				end

			end


				-- we now have the username and password that were send.
				-- check if the database has this particular username & password combination
			l_user_data := db.has_user_with_password(l_username, l_password)


			if l_user_data.has_user then
					-- yes, the username & password combo was correct
					-- so next, we create a session

					-- create the session; choose a name for the cookie that we'll send back
				create l_session.make_new ("lets_go_session", session_manager)

					-- add all the data we need to the session (format here is [value, key] pairs)
					-- we store the username and the key "username"
				l_session.remember (l_user_data.username, "email")
					-- we store the user id and use the key "id"
				l_session.remember (l_user_data.id, "id")

					-- commit the data; this will trigger the session_manager to acutally store the data to disk (in the session folder _WFS_SESSIONS_)
				l_session.commit

					-- apply the session cookie to the response; we use path "/" which makes the session cookie available on path of our app
				l_session.apply (req, res, "/")

				res.set_status_code (204)
			else

				-- the username & password combination was wrong
				-- so we don't create a session

				res.set_status_code (401)
			end
		end



	logout (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- logout a user
			-- that means we destroy the user's session (if one exists)

		local
			l_result: JSON_OBJECT
			l_session: WSF_COOKIE_SESSION
		do
				-- we load the session if it exists (if no session exists, we're acutally creating a new one. But that's okay because we'll immediately destroy it)
			create l_session.make (req, "lets_go_session", session_manager)
			l_session.destroy

				-- create the response
				-- create a json object that has a "Message" property that states what happend
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("User logged out"), create {JSON_STRING}.make_json ("Message"))
				-- set the repsone header, indicating that everything went ok by statuscode 204
			set_json_header (res, 204, l_result.representation.count)
				-- add the message to the response response
			res.put_string (l_result.representation)
		end
end