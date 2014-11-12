note
	description: "Handlers for everything that concerns users."
	author: "Zensich Ezequiel"
	date: "$11/11/2014$"
	revision: "$Revision$"

class
	USER_CONTROLLER

inherit
	DEMO_HEADER_JSON_HELPER

create
	make


feature {NONE} -- Creation

	make (a_dao: CRUD_USER)
		do
			my_crud_user := a_dao
		end


feature {NONE} -- Private attributes

	my_crud_user: CRUD_USER


feature -- Handlers

	get_users (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all users
		local
			l_result_payload: STRING
		do
			l_result_payload := my_crud_user.users.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	get_user_by_email (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_payload, l_email: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT

		do
			-- create emtpy string objects
			create l_email.make_empty
			create l_payload.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the user info
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("email") as s then
					l_email := s.unescaped_string_8
				end
			end
			l_result := my_crud_user.user_by_email (l_email)

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)

		end



	create_user (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_payload, l_email, l_username, l_password, l_name: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
			-- create emtpy string objects
			create l_payload.make_empty
			create l_name.make_empty
			create l_email.make_empty
			create l_username.make_empty
			create l_password.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the user info
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("name") as s then
					l_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("email") as s then
					l_email := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("username") as s then
					l_username := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("password") as s then
					l_password := s.unescaped_string_8
				end

			end

				-- create the user in the database
			my_crud_user.add_user (l_email, l_username, l_password, l_name)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added user " + l_name), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	delete_user_by_email (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_payload, l_email: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT

		do
			-- create emtpy string objects
			create l_email.make_empty
			create l_payload.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the user info
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("email") as s then
					l_email := s.unescaped_string_8
				end
			end

			my_crud_user.remove_user_by_email (l_email)
			-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("The user was removed."), create {JSON_STRING}.make_json ("Message"))

			-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


--	update_user_password


--	update_user_name


--	update_user_email


--	update_user_username




end
