note
	description: "Summary description for {COFFEE_USER_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_USER_CTRL

	inherit
	COFFEE_HEADER_JSON_HELPER
		-- inherit this helper to get a procedure that simplifies setting
		-- the HTTP response header correctly

	COFFEE_SESSION_HELPER

create
	make


feature {NONE} -- Creation

	make (a_dao: COFFEE_DB a_session_manager: WSF_SESSION_MANAGER)
		do
			my_db := a_dao
			session_manager := a_session_manager
		end

feature {NONE} -- Private attributes

	my_db: COFFEE_DB
	session_manager: WSF_SESSION_MANAGER


feature -- Handlers

	add_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new users; the user_name is expected to be part of the request's payload
		local
			l_payload, l_email, l_password, l_first_name, l_last_name, l_message: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_email.make_empty
			create l_password.make_empty
			create l_first_name.make_empty
			create l_last_name.make_empty
			create l_message.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("email") as s then
					l_email := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("password") as s then
					l_password := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("first_name") as s then
					l_first_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("last_name") as s then
					l_last_name := s.unescaped_string_8
				end

			end
				-- create the user in the database
			if my_db.add_user (l_email,l_password, l_first_name, l_last_name) then
				l_message := "OK"
			else
				l_message := "Could not create user " + l_email
			end
				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json (l_message), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	get_users (req: WSF_REQUEST; res: WSF_RESPONSE)

	local

	do

	end

	delete_user (req: WSF_REQUEST; res: WSF_RESPONSE)
		-- adds a new users; the user_name is expected to be part of the request's payload
		local
			l_payload,l_id, l_email, l_message: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_email.make_empty
			create l_message.make_empty
			create l_result.make

			if req_has_cookie (req, "_coffee_session_" ) then

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

				if attached {JSON_STRING} j_object.item ("id") as s then
					l_id := s.unescaped_string_8
				end
					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("email") as s then
					l_email := s.unescaped_string_8
				end
			end
				-- deletes the user in the database
			if equal(l_id, get_session_from_req (req, "_coffee_session_").item ("id").out) then
				if my_db.delete_user (l_email) then
					l_message := "OK"
				else
					l_message := "Could not delete user " + l_email
				end
			else
				l_message := "User can only delete himself"
			end

			l_result.put (create {JSON_STRING}.make_json (l_message), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)

			else
				reject(l_result, res)

			end
		end

	update_user (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_payload, l_email, l_message, l_first_name, l_last_name, l_password, l_string_id: STRING
			l_id : INTEGER
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_email.make_empty
			create l_first_name.make_empty
			create l_last_name.make_empty
			create l_password.make_empty
			create l_message.make_empty
			create l_result.make

			if req_has_cookie (req, "_coffee_session_" ) then

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				l_string_id := req.path_parameter("user_id").string_representation
				l_id := l_string_id.to_integer
					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("email") as s then
					l_email := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("password") as s then
					l_password := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("first_name") as s then
					l_first_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("last_name") as s then
					l_last_name := s.unescaped_string_8
				end
			end
				-- create the user in the database
			if l_id = get_session_from_req (req, "_coffee_session_").item ("id").out.to_integer then
				if my_db.update_user (l_id, l_email, l_password, l_first_name, l_last_name)then
					l_message := "OK"
				else
					l_message := "Could not update user " + l_email
				end
			else
				l_message := "User can only update himself"
			end
				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)

			l_result.put (create {JSON_STRING}.make_json (l_message), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)

			else
				reject(l_result, res)

			end

	end


feature {NONE} -- helpers
	reject(l_result_payload: JSON_OBJECT res: WSF_RESPONSE)

	local

	do
		-- the request has no session cookie and thus the user is not logged in
		-- we return an error stating that the user is not authorized to add todos
	l_result_payload.put_string ("User is not logged in.", create {JSON_STRING}.make_json ("Message"))

		-- set the header to status code 401-unauthorized
	set_json_header (res, 401, l_result_payload.representation.count)

	end


end
