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
			l_user_data: TUPLE[check_result: BOOLEAN; email: STRING; password: STRING; name: STRING; surname: STRING; gender: STRING; role: STRING; changepwd: STRING]

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
				l_session.remember (l_user_data.email, "email")
					-- we store the user password and the key "password"
				l_session.remember (l_user_data.password, "password")
					-- we store the user name and the key "name"
				l_session.remember (l_user_data.name, "name")
					-- we store the user surname and use the key "surname"
				l_session.remember (l_user_data.surname, "surname")
					-- we store the user gender and use the key "gender"
				l_session.remember (l_user_data.gender, "gender")
					-- we store the user role and use the key "role"
				l_session.remember (l_user_data.role, "role")
				-- we store the user changepwd and use the key "changepwd"
				l_session.remember (l_user_data.changepwd, "changepwd")

					-- commit the data; this will trigger the session_manager to actually store the data to disk (in the session folder _WFS_SESSIONS_)
				l_session.commit

					-- apply the session cookie to the response; we use path "/" which makes the session cookie available on path of our app
				l_session.apply (req, res, "/")


					-- create the response
					-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("User logged in."), create {JSON_STRING}.make_json ("success"))
				l_result.put (create {JSON_STRING}.make_json (l_user_data.email), create {JSON_STRING}.make_json ("email"))
				l_result.put (create {JSON_STRING}.make_json (l_user_data.password), create {JSON_STRING}.make_json ("password"))
				l_result.put (create {JSON_STRING}.make_json (l_user_data.name), create {JSON_STRING}.make_json ("name"))
				l_result.put (create {JSON_STRING}.make_json (l_user_data.surname), create {JSON_STRING}.make_json ("surname"))
				l_result.put (create {JSON_STRING}.make_json (l_user_data.gender), create {JSON_STRING}.make_json ("gender"))
				l_result.put (create {JSON_STRING}.make_json (l_user_data.role), create {JSON_STRING}.make_json ("role"))
				l_result.put (create {JSON_STRING}.make_json (l_user_data.changepwd), create {JSON_STRING}.make_json ("changepwd"))

					-- set the repsone header, indicating that everything went ok by statuscode 200
				set_json_header_ok (res, l_result.representation.count)
			else

				-- the username & password combination was wrong
				-- so we don't create a session

					-- Sendig back an error message
				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("Username or password incorrect"), create {JSON_STRING}.make_json ("error"))

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
			l_result.put (create {JSON_STRING}.make_json ("User logged out"), create {JSON_STRING}.make_json ("success"))
				-- set the respone header, indicating that everything went ok by statuscode 200
			set_json_header_ok (res, l_result.representation.count)
				-- add the message to the response
			res.put_string (l_result.representation)
		end




	forgot_password (req: WSF_REQUEST; res: WSF_RESPONSE)


		local
			l_result: JSON_OBJECT
			l_payload, l_email: STRING
			parser: JSON_PARSER

			--Modifica Anna
			env: EXECUTION_ENVIRONMENT
			new_pass: STRING
			string: STRING
    		file_input: PLAIN_TEXT_FILE
    		-----------------

		do
			-- create emtpy string object
			create l_payload.make_empty
			create l_result.make

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

			end


			if (l_email = VOID) OR (l_email.is_empty) then

					-- EMAIL not valid. Sending back a error message
				l_result.put (create {JSON_STRING}.make_json ("Email not valid."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			elseif (not my_db.check_if_mail_already_present (l_email)) then

				-- EMAIL not present into the database. Sending back an error message
				l_result.put (create {JSON_STRING}.make_json ("Email not present into the database."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result.representation.count)

			else

				-- send an email with a random password which need then to be changed

				--Modifica Anna
				create env
				create new_pass.make_empty
				-- Autogenerates a password
				env.launch("python /Users/Anna/Desktop/Corsi/SE2/DOSE/dose2014/implementations/group6/src/temp_pass.py")
				-- Reads generated password from file
				create file_input.make_open_read("/Users/Anna/Desktop/Corsi/SE2/DOSE/dose2014/implementations/group6/src/generation_pass.txt")
				from file_input.start ; file_input.read_character ;
				until file_input.off
				loop
     			 	new_pass.append_character (file_input.last_character)
     			  	file_input.read_character
    			end
    			file_input.close
    			-- Removes the generated password into file
    			env.launch ("python /Users/Anna/Desktop/Corsi/SE2/DOSE/dose2014/implementations/group6/src/delete_file_content.py")
				-- Make a strint to call python script
				string:="python /Users/Anna/Desktop/Corsi/SE2/DOSE/dose2014/implementations/group6/src/send_email_pass.py "
				string.append_string(l_email)
				string.append(" ")
				string.append_string(new_pass)
				env.launch(string)
				-- Update the password into user field
				my_db.change_user_password (l_email, new_pass)


 				----------

					--set CHANGEPWD at true into the database
				my_db.set_changepwd (l_email, true)

				l_result.put (create {JSON_STRING}.make_json ("Sent an email to " + l_email + " with a random password."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result.representation.count)

			end

				--sending back the result
			res.put_string (l_result.representation)

		end






end
