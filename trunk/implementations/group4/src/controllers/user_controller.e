note
	description: "Handlers for everything that concerns users."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-08$"
	revision: "$0.01$"

class
	USER_CONTROLLER

inherit
	HEADER_JSON_HELPER

create
	make

feature {NONE} -- Initialization

	make (a_path_to_db_file: STRING; a_session_manager: WSF_SESSION_MANAGER)
		do
			create db_handler_user.make(a_path_to_db_file)
			session_manager := a_session_manager
		end


feature {NONE} -- Private attributes

	db_handler_user : DB_HANDLER_USER

	session_manager : WSF_SESSION_MANAGER

feature -- Handlers

	get_users (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all users
		local
			l_result_payload: STRING
		do
			l_result_payload := db_handler_user.find_all.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	get_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a response that contains a json object with a user with given id
		local
			l_result_payload: STRING
			l_user_id : STRING
		do
			-- the user_id from the URL
			l_user_id := req.path_parameter ("user_id").string_representation

			l_result_payload := db_handler_user.find_by_id (l_user_id.to_natural).representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	add_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- add a new user; the user data are expected to be part of the request's payload
		local
			l_payload : STRING
			l_user_name, l_email, l_password : STRING
			l_user : USER
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string for each user attribute.
				if attached {JSON_STRING} j_object.item ("user_name") as user_name then
					l_user_name := user_name.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("email") as email then
					l_email := email.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("password") as password then
					l_password := password.unescaped_string_8
				end

			end

			create l_user.make(l_user_name,l_email,l_password)
				-- create the user in the database
			db_handler_user.add (l_user)

				-- create a json object that as a "Message" property that states what happend
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added user " + l_user.username ), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	update_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- update a existent user
		local
			l_payload: STRING
			l_user_id: STRING
			l_user_name, l_email, l_password : STRING
			l_user : USER
			parser : JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

				-- we have to convert the json string into an eiffel string for each user attribute.
				if attached {JSON_STRING} j_object.item ("user_name") as user_name then
					l_user_name := user_name.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("email") as email then
					l_email := email.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("password") as password then
					l_password := password.unescaped_string_8
				end

			end

				-- create the user
			create l_user.make (l_user_name, l_email, l_password)

				-- the user_id from the URL (as defined by the placeholder in the route)
			l_user_id := req.path_parameter ("user_id").string_representation

				-- update the user in the database
			db_handler_user.update (l_user_id.to_natural,l_user)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Updated user "+ l_user.username), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	remove_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- remove a user from the database
		local
			l_user_id: STRING
			l_result: JSON_OBJECT
		do
				-- the user_id from the URL (as defined by the placeholder in the route)
			l_user_id := req.path_parameter ("user_id").string_representation
				-- remove the user
			db_handler_user.remove (l_user_id.to_natural)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	login (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- login a user if the username and password provided with the request are correct
			-- "login" is done via attaching a session cookie to the response. The browser will
			-- then send this session cookie on all subsequent request, allowing us to lookup the
			-- session data for that user based on the cookie

		local
			l_payload, l_username, l_password: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
				-- if true the username and password match
			l_user_data: TUPLE [has_user: BOOLEAN; user_id: STRING; user_name: STRING]
				-- a session
			l_session: WSF_COOKIE_SESSION
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_result.make

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- in this case the username and password
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string for each propertie.
				if attached {JSON_STRING} j_object.item ("user_name") as s then
					l_username := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("password") as s then
					l_password := s.unescaped_string_8
				end

			end

				-- check if the database has this particular username & password combination
			l_user_data := db_handler_user.has_user_with_password(l_username, l_password)


			if l_user_data.has_user then
					-- yes, the username & password combo was correct
					-- so next, we create a session

					-- create the session; choose a name for the cookie that we'll send back
				create l_session.make_new ("_casd_session_", session_manager)

					-- add all the data we need to the session (format here is [value, key] pairs)
					-- we store the username and the key "username"
				l_session.remember (l_user_data.user_name, "user_name")
					-- we store the user id and use the key "id"
				l_session.remember (l_user_data.user_id, "user_id")

					-- commit the data; this will trigger the session_manager to acutally store the data to disk (in the session folder _WFS_SESSIONS_)
				l_session.commit

					-- apply the session cookie to the response; we use path "/" which makes the session cookie available on path of our app
				l_session.apply (req, res, "/")


					-- create the response
					-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
				--l_result.put (create {JSON_STRING}.make_json ("User logged in"), create {JSON_STRING}.make_json ("Message"))
					-- set the repsone header, indicating that everything went ok by statuscode 200
				set_json_header (res, 200, l_result.representation.count)
			else

				-- the username & password combination was wrong
				-- so we don't create a session
				-- but return an error message

					-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
				l_result.put (create {JSON_STRING}.make_json ("Username or password incorrect"), create {JSON_STRING}.make_json ("Message"))

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
			create l_session.make (req, "_casd_session_", session_manager)
			l_session.destroy


				-- create the response
				-- create a json object that has a "Message" property that states what happend
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("User logged out"), create {JSON_STRING}.make_json ("Message"))
				-- set the repsone header, indicating that everything went ok by statuscode 200
			set_json_header_ok (res, l_result.representation.count)
				-- add the message to the response response
			res.put_string (l_result.representation)
		end
end
