note
	description: "Handlers for everything that concerns users"
	author: "Nicol� Gallo peozzi"
	date: "$Date$"
	revision: "$Revision$"

class
	USER_CTRL

inherit
	DEMO_HEADER_JSON_HELPER

create
	make

feature {NONE} --creation

	make (a_dao: DEMO_DB)
		do
			my_db := a_dao
		end

feature {NONE} --private attributes

	my_db: DEMO_DB

feature --handlers

	get_users(req: WSF_REQUEST; res: WSF_RESPONSE)
			--gets a list of all the users into the database;
		local
			l_result_payload: STRING
		do
			l_result_payload := my_db.get_all_users.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	create_user(req: WSF_REQUEST; res: WSF_RESPONSE)
			--creates a new user to the database; new user's information (mail, password, name, surname,
			--gender, role, photo) are expected to be part of the request payload
		local
				l_payload, l_name, l_surname, l_email, l_pwd, l_role, l_photo: STRING
				l_gender: BOOLEAN
				parser: JSON_PARSER
				l_result: JSON_OBJECT
			do
					-- create emtpy string objects
				create l_payload.make_empty
				create l_name.make_empty
				create l_surname.make_empty
				create l_email.make_empty
				create l_pwd.make_empty
				create l_role.make_empty
				create l_photo.make_empty

					-- read the payload from the request and store it in the string
				req.read_input_data_into (l_payload)

					-- now parse the json object that we got as part of the payload
				create parser.make_parser (l_payload)

					-- if the parsing was successful and we have a json object, we fetch the properties
					-- for the todo description and the userId
				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

						-- we have to convert the json string into an eiffel string
					if attached {JSON_STRING} j_object.item ("name") as s then
						l_name := s.unescaped_string_8
					end
					if attached {JSON_STRING} j_object.item ("surname") as s then
						l_surname := s.unescaped_string_8
					end
					if attached {JSON_STRING} j_object.item ("email") as s then
						l_email := s.unescaped_string_8
					end
					if attached {JSON_STRING} j_object.item ("password") as s then
						l_pwd := s.unescaped_string_8
					end
					if attached {JSON_STRING} j_object.item ("role") as s then
						l_role := s.unescaped_string_8
					end
					if attached {JSON_STRING} j_object.item ("photo") as s then
						l_photo := s.unescaped_string_8
					end
					if attached {JSON_BOOLEAN} j_object.item ("gender") as b then
						l_gender := b.item
					end

				end

					--create the result object
				create l_result.make

					-- checking if the EMAIL is already present into the database
				if  (l_email = VOID)then

						-- EMAIL not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("ERROR: email not valid. New user was not created."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				elseif my_db.check_if_mail_already_present (l_email) then

						-- EMAIL already present into the database. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("ERROR: email already present into the database. New user was not created."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

					-- checking if NAME and SURNAME are valid
				elseif (l_name = VOID) OR (l_name.is_empty) OR (l_surname = VOID) OR (l_surname.is_empty)	then

						-- NAME or SURNAME is not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("ERROR: name or surname not valid. New user was not created."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

					-- checking if PASSWORD is valid
				elseif (l_pwd = VOID) OR (l_pwd.count /= 8) then

						-- PASSWORD not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("ERROR: password not valid. New user was not created."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

					-- checking if ROLE and PHOTO are valid
				elseif (l_role = VOID) OR (l_photo = VOID) then

					-- ROLE or PHOTO not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("ERROR: role or photo not valid. New user was not created."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				else
						-- everything ok. Create the user in the database
					my_db.add_user (l_email, l_pwd, l_name, l_surname, l_role, l_photo, l_gender)

						-- Sending back a success message
					l_result.put (create {JSON_STRING}.make_json ("Successfully added new user " + l_email + " to the database."), create {JSON_STRING}.make_json ("success"))
					set_json_header_ok (res, l_result.representation.count)

				end

					-- sending back the result
				res.put_string (l_result.representation)

			end

	delete_user(req: WSF_REQUEST; res: WSF_RESPONSE)
			--removes a user from the database; user's email is expected to be part of the request payload
		local
			l_payload, l_email: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_email.make_empty

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

				--create the result object
			create l_result.make

				-- checking if the EMAIL is already present into the database
			if (l_email = VOID) OR my_db.check_if_mail_already_present (l_email) then

					-- remove the user from the database
				my_db.remove_user (l_email)

					-- create a json object that as a "Message" property that states what happend
				l_result.put (create {JSON_STRING}.make_json ("Removed user " + l_email + " from the database."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result.representation.count)

			else
					-- EMAIL not present into the database. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("ERROR: the email is not present into the database."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			end

				--sending back the result
			res.put_string (l_result.representation)

		end

	change_password(req: WSF_REQUEST; res: WSF_RESPONSE)
		--changes the user's password to a new one; user's email and the new value for the password are expected to be part of the request payload
		local
			l_payload, l_email, l_new_pwd: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_email.make_empty
			create l_new_pwd.make_empty

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
					l_new_pwd := s.unescaped_string_8
				end

			end

				-- change user password into the database
			my_db.change_user_password (l_email, l_new_pwd)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Password for user " + l_email + " has been changed."), create {JSON_STRING}.make_json ("success"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	update_user(req: WSF_REQUEST; res: WSF_RESPONSE)
			--updates user's information into the database; user's email, name, surname, role, photo are expected to be part of the request payload
		local
			l_payload, l_email, l_name, l_surname, l_role, l_photo: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_email.make_empty
			create l_name.make_empty
			create l_surname.make_empty
			create l_role.make_empty
			create l_photo.make_empty


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
				if attached {JSON_STRING} j_object.item ("name") as s then
					l_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("surname") as s then
					l_surname := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("role") as s then
					l_role := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("photo") as s then
					l_photo := s.unescaped_string_8
				end

			end

			if (l_email = VOID) OR (not my_db.check_if_mail_already_present(l_email)) then

					-- EMAIL not valid. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("ERROR: email not valid."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			elseif (l_name = VOID) OR (l_name.is_empty) OR (l_surname = VOID) OR (l_surname.is_empty) then

					-- NAME or SURNAME not valid. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("ERROR: name or surname not valid."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			elseif (l_role = VOID) OR (l_role.is_empty) then

					-- ROLE not valid. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("ERROR: role not valid."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			elseif (l_photo = VOID) OR (l_photo.is_empty) then

					-- PHOTO not valid. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("ERROR: photo not valid."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			else
					-- update user's information into the database
				my_db.update_user_information (l_email, l_name, l_surname, l_role, l_photo)

				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("User information for  " + l_email + " has been updated."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result.representation.count)

			end

			res.put_string (l_result.representation)
		end

	get_user_info(req: WSF_REQUEST; res: WSF_RESPONSE)
			--gets user's information from the database; user's email is expected to be part of the request payload
		local
			l_payload, l_email: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_email.make_empty

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

			if (l_email = VOID) OR (l_email.is_empty) then

					-- EMAIL not valid. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("ERROR: email not valid."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			elseif (my_db.check_if_mail_already_present (l_email)) then

					-- getting user information
				l_result := my_db.get_user_info (l_email)

				l_result.put (create {JSON_STRING}.make_json ("User information for  " + l_email), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result.representation.count)

			else

					-- EMAIL not present into the database. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("ERROR: email not present into the database."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			end

			res.put_string (l_result.representation)
		end


end




