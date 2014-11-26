note
	description: "Summary description for {DEMO_SESSION_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DEMO_SESSION_CTRL

inherit
	DEMO_HEADER_JSON_HELPER

create
	make


feature {NONE} -- Creation

	make (a_dao: DEMO_DB; a_session_manager: WSF_SESSION_MANAGER)
		do
			my_db := a_dao

				-- create a session manager
			session_manager := a_session_manager
		end


feature {NONE} -- Private attributes

	my_db: DEMO_DB

	session_manager: WSF_SESSION_MANAGER


feature -- Handlers


	login (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- login a user if the username and password provided with the request are correct
			-- "login" is done via attaching a session cookie to the response. The browser will
			-- then send this session cookie on all subsequent request, allowing us to lookup the
			-- session data for that user based on the cookie

		local
			l_payload, l_email, l_password: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT


				-- if true the username and password match
			l_user_data: TUPLE [check_result: BOOLEAN; user_email: STRING; user_name: STRING; user_surname: STRING]

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
					l_email := s.unescaped_string_8
				end

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("password") as s then
					l_password := s.unescaped_string_8
				end

			end


				-- we now have the username and password that were send.
				-- check if the database has this particular username & password combination
			l_user_data := my_db.check_user_password(l_email, l_password)


			if l_user_data.check_result then
					-- yes, the username & password combo was correct
					-- so next, we create a session

					-- create the session; choose a name for the cookie that we'll send back
				create l_session.make_new ("_session_", session_manager)

					-- add all the data we need to the session (format here is [value, key] pairs)

					-- we store the user email and the key "email"
				l_session.remember (l_user_data.user_email, "email")
					-- we store the user name and the key "name"
				l_session.remember (l_user_data.user_name, "name")
					-- we store the user surname and use the key "surname"
				l_session.remember (l_user_data.user_surname, "surname")

					-- commit the data; this will trigger the session_manager to actually store the data to disk (in the session folder _WFS_SESSIONS_)
				l_session.commit

					-- apply the session cookie to the response; we use path "/" which makes the session cookie available on path of our app
				l_session.apply (req, res, "/")


					-- create the response
					-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
				create l_result.make

					-- set the repsone header, indicating that everything went ok by statuscode 200
				set_json_header (res, 200, l_result.representation.count)
			else

				-- the username & password combination was wrong
				-- so we don't create a session
				-- but return an error message

					-- create the response
					-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("ERROR: Username or password incorrect"), create {JSON_STRING}.make_json ("ERROR"))

					-- set the repsone header, indicating that no session in created because the client was not authorized
				set_json_header (res, 401, l_result.representation.count)
			end

				-- add the message to the response response
			res.put_string (l_result.representation)
		end



	logout (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- logout a user
			-- that means we destroy the user's session (if one exists)

		local
			l_result: JSON_OBJECT
			l_session: WSF_COOKIE_SESSION
		do

				-- we load the session if it exists (if no session exists, we're acutally creating a new one. But that's okay because we'll immediately destroy it)
			create l_session.make (req, "_session_", session_manager)
			l_session.destroy


				-- create the response
				-- create a json object that has a "Message" property that states what happend
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("User logged out"), create {JSON_STRING}.make_json ("SUCCESS"))
				-- set the respone header, indicating that everything went ok by statuscode 200
			set_json_header_ok (res, l_result.representation.count)
				-- add the message to the response
			res.put_string (l_result.representation)
		end
end
