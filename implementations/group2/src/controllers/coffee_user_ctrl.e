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

create
	make


feature {NONE} -- Creation

	make (a_dao: COFFEE_DB)
		do
			my_db := a_dao
		end

feature {NONE} -- Private attributes

	my_db: COFFEE_DB


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
			l_payload, l_email, l_message: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_email.make_empty
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
			end
				-- create the user in the database
			if my_db.delete_user (l_email) then
				l_message := "OK"
			else
				l_message := "Could not delete user " + l_email
			end
				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json (l_message), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)

		end

	update_user (req: WSF_REQUEST; res: WSF_RESPONSE)

	local

	do

	end


end
