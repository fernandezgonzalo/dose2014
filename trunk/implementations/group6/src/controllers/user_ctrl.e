note
	description: "Handlers for everything that concerns users"
	author: "Nicolò Gallo peozzi"
	date: "$Date$"
	revision: "$Revision$"

class
	USER_CTRL

inherit
	DEMO_HEADER_JSON_HELPER
	DEMO_SESSION_HELPER

create
	make

feature {NONE} --creation

	make (a_dao: DEMO_DB;  a_session_manager: WSF_SESSION_MANAGER)
		do
			my_db := a_dao
			session_manager := a_session_manager;
		end

feature {NONE} --private attributes

	my_db: DEMO_DB
	session_manager: WSF_SESSION_MANAGER

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
				-- Adds for sending email
				env: EXECUTION_ENVIRONMENT
				string,path: STRING
				---------------------------
			do
					-- create emtpy string objects
				create l_payload.make_empty
				create l_name.make_empty
				create l_surname.make_empty
				create l_email.make_empty
				create l_pwd.make_empty
				create l_role.make_empty
				create l_photo.make_empty
				create l_gender.default_create

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
					if attached {JSON_STRING} j_object.item ("gender") as b then
						if b.item.is_equal("true") then
							l_gender := true
						else
							l_gender := false
						end
					end

				end

					--create the result object
				create l_result.make

					-- checking if the EMAIL is already present into the database
				if  (l_email = VOID)then

						-- EMAIL not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("Email not valid"), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				elseif my_db.check_if_mail_already_present (l_email) then

						-- EMAIL already present into the database. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("Mail already present into the database."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

					-- checking if NAME and SURNAME are valid
				elseif (l_name = VOID) OR (l_name.is_empty) OR (l_surname = VOID) OR (l_surname.is_empty)	then

						-- NAME or SURNAME is not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("Name or surname not valid."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

					-- checking if PASSWORD is valid
				elseif (l_pwd = VOID) OR (l_pwd.count /= 8) then

						-- PASSWORD not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("Password not valid."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

					-- checking if ROLE and PHOTO are valid
				elseif (l_role = VOID) OR (l_photo = VOID) then

					-- ROLE or PHOTO not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("Role or photo not valid."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				else
						-- everything ok. Create the user in the database
					my_db.add_user (l_email, l_pwd, l_name, l_surname, l_role, l_photo, l_gender)

						-- Sending back a success message
					l_result.put (create {JSON_STRING}.make_json ("Added new user " + l_email + " to the database."), create {JSON_STRING}.make_json ("success"))
					set_json_header_ok (res, l_result.representation.count)

					-- send the invitation from the user to the recipient email
				-- Adds code for sending email to the owner of the project (Anna)
				create env
				-- Sends email
				-- Make a strint to call python script
				create string.make_empty
				path:=my_db.path_to_src_folder(11)
				string:="python "
				string.append_string (path)
				string.append (l_email)
				string.append ("")
				env.launch(string)

				----------------------------------------------------

				end

					-- sending back the result
				res.put_string (l_result.representation)

			end




	delete_user(req: WSF_REQUEST; res: WSF_RESPONSE)
			--removes a user from the database; user's email is expected to be part of the request payload
		local
			l_email: STRING
			l_result: JSON_OBJECT
		do

				-- catching the user EMAIL from the cookie
			if req_has_cookie(req, "_session_") then
				l_email := get_session_from_req(req, "_session_").at("email").out
			end

				--create the result object
			create l_result.make

				-- checking if the user is logged in
			if (l_email = VOID) OR (l_email.is_empty) then

					-- user is not logged in. Sending back a error message
				l_result.put (create {JSON_STRING}.make_json ("User not logged in."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

				-- checking if te email already exists into the database
			elseif (not my_db.check_if_mail_already_present (l_email)) then

					-- EMAIL not present into the database. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("Email not present into the database."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			else
					-- remove the user from the database
				my_db.remove_user (l_email)

				l_result.put (create {JSON_STRING}.make_json ("Removed user " + l_email + " from the database."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result.representation.count)

			end

				--sending back the result
			res.put_string (l_result.representation)

		end


	send_invitation(req: WSF_REQUEST; res: WSF_RESPONSE)
			--sends an invitation from the logged in user to someone else; recipient's email is expected to be part of the request payload
		local
			l_payload, l_user, l_email: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			-- Adds for sending email
			env: EXECUTION_ENVIRONMENT
			string,path: STRING
				---------------
		do
			create l_payload.make_empty
				-- catching the user EMAIL from the cookie
			if req_has_cookie(req, "_session_") then
				l_user := get_session_from_req(req, "_session_").at("email").out
			end

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

--			l_user:="annamaria.nestorov@hotmail.it"

			if (l_user = VOID) OR (l_user.is_empty ) then

					-- EMAIL not valid. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("User not logged in."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			elseif (not my_db.check_if_mail_already_present (l_user)) then

					-- EMAIL not present into the database. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("User not present into the database."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			elseif (l_email = VOID) OR (l_email.is_empty ) then

					-- user not allowed to change password. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("Email not valid."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			else

				-- send the invitation from the user to the recipient email
				-- Adds code for sending email to the owner of the project (Anna)
				create env
				-- Sends email
				-- Make a strint to call python script
				create string.make_empty
				path:=my_db.path_to_src_folder(4)
				string:="python "
				string.append_string (path)
				string.append (l_user)
				string.append (" ")
				string.append (l_email)
				string.append ("")
				env.launch(string)

				----------------------------------------------------

				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("Invitation successfully sent."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result.representation.count)

			end
				--send the response
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
				if attached {JSON_STRING} j_object.item ("new_password") as s then
					l_new_pwd := s.unescaped_string_8
				end

			end


				--
			if (l_email = VOID) OR (l_email.is_empty )then

					-- EMAIL not valid. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("Email not valid."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			elseif (not my_db.check_if_mail_already_present (l_email)) then

					-- EMAIL not present into the database. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("Email not present into the database."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			elseif (l_new_pwd = VOID) OR (l_new_pwd.count /= 8) then

					-- PASSWORD not valid. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("New password not valid."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			else

					-- change user password into the database, then set CHANGEPWD to false
				my_db.change_user_password (l_email, l_new_pwd)
				my_db.set_changepwd (l_email, false)

				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("Password successfully changed."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result.representation.count)

			end
				--send the response
			res.put_string (l_result.representation)
		end




	update_user(req: WSF_REQUEST; res: WSF_RESPONSE)
			--updates user's information into the database; user's email, name, surname, role, photo are expected to be part of the request payload
		local
			l_payload, l_email, l_name, l_surname, l_role, l_photo: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
			create l_payload.make_empty
			create l_result.make
				-- catching the user EMAIL from the cookie
			if req_has_cookie(req, "_session_") then
				l_email := get_session_from_req(req, "_session_").at("email").out
			end
			--l_email := "marid06@hotmail.fr"
				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

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

			if (l_email = VOID) OR (l_email.is_empty )then

					-- EMAIL not valid. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("User not logged in."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			elseif (not my_db.check_if_mail_already_present (l_email)) then

					-- EMAIL not present into the database. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("Email not present into the database."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)


			elseif (l_name = VOID) OR (l_name.is_empty) OR (l_surname = VOID) OR (l_surname.is_empty) then

					-- NAME or SURNAME not valid. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("Name or surname not valid."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			elseif (l_role = VOID) then

					-- ROLE not valid. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("Role not valid."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			elseif (l_photo = VOID) then

					-- PHOTO not valid. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("Photo not valid."), create {JSON_STRING}.make_json ("error"))
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


end




