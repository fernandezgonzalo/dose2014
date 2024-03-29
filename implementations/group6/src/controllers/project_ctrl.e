note
	description: "This class contains all the methods to handle the project controller"
	author: "Milan2 - Marion Depuydt"
	date: "$Date$"
	revision: "$Revision$"

class
	PROJECT_CTRL

inherit
	DEMO_HEADER_JSON_HELPER

	DEMO_SESSION_HELPER

create make

feature {NONE} -- creation

	make (a_dao: DEMO_DB; a_session_manager: WSF_SESSION_MANAGER)
		do
			my_db := a_dao;
			session_manager := a_session_manager;
		end

feature -- Private attributes

	my_db: DEMO_DB

	session_manager: WSF_SESSION_MANAGER

feature --Handlers

	get_projects(req: WSF_REQUEST; res: WSF_RESPONSE)
			--gets a list of all the users into the database;
		local
			l_result_payload: STRING
		do
			l_result_payload := my_db.get_projects.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	add_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Add a new project
		local
			l_payload, l_user_email, l_project_name: STRING
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
			l_iteration: TUPLE[number: STRING; name: STRING]
		do

			--create string object to read-in the payload that comes with the request
			create l_payload.make_empty
			-- create json object that we send back as in response
			create l_result_payload.make
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			--now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

			--if the parsing was successful and we have a json object, we fetch the properties
			-- for the project name
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				--we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("project_name") as s then
									l_project_name := s.unescaped_string_8
				end
			end
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end
			--l_user_email := "marid06@hotmail.fr"


			-- Check data
			if l_project_name = Void or l_project_name.is_empty then
				--Error name project empty
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name empty"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_project_name (l_project_name) then
				--Error name already existing
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name already existing"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_user_email = void or l_user_email.is_empty then
				--Error nobody is logged in
				l_result_payload.put (create {JSON_STRING}.make_json ("User is not logged in"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
				--Error more than 40 caracters for the name
			elseif l_project_name.count > 40 then
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name too long"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				--add in the database, project name and owner
				my_db.add_project (l_project_name, l_user_email)
				 --create the backlog iteration
				l_iteration := my_db.add_iteration (l_project_name)
				-- Message tutto bene
				l_result_payload.put (create {JSON_STRING}.make_json ("New project '" + l_project_name + "' added successfully."), create {JSON_STRING}.make_json ("success"))
				l_result_payload.put (create {JSON_STRING}.make_json (l_project_name), create {JSON_STRING}.make_json ("project_name"))
				l_result_payload.put (create {JSON_STRING}.make_json ("0"), create {JSON_STRING}.make_json ("points"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- add the message to the response response
			res.put_string (l_result_payload.representation)
		end

	remove_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Remove a project
		local
			l_user_email, l_project_name, l_payload: STRING
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do
			--create string object to read-in the payload that comes with the request
			create l_payload.make_empty
			-- create json object that we send back as in response
			create l_result_payload.make
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			--now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

			--if the parsing was successful and we have a json object, we fetch the properties
			-- for the project name
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				--we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("project_name") as s then
						l_project_name := s.unescaped_string_8
				end
			end

			-- Receive the name of the user
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end
			--l_user_email := "jimmy@yahoo.com"

			-- Check data
			if  l_project_name = Void or l_project_name.is_empty then
				--Error name project empty
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name empty"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_project_name (l_project_name) = false then
				--Error name already existing
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name doesn't exist"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.is_project_empty (l_project_name) = false then
				-- Check if the project is empty (no iterations): db.is_project_empty(a_project_name) except backlog
				l_result_payload.put (create {JSON_STRING}.make_json ("Project is not empty"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_user_email = void or l_user_email.is_empty then
				--Error nobody is logged in
				l_result_payload.put (create {JSON_STRING}.make_json ("User is not logged in"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
				--Error more than 40 caracters for the name
			elseif my_db.is_owner (l_user_email, l_project_name) = false then
				-- Check is the user owns the project
				l_result_payload.put (create {JSON_STRING}.make_json ("User doesn't own the project"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.has_member(l_project_name) then
				-- Check that the project doesn't have any members
				l_result_payload.put (create {JSON_STRING}.make_json ("Project still has some members"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_project_name.count > 40 then
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name too long"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				my_db.remove_project (l_project_name)
				-- Message tutto bene
				l_result_payload.put (create {JSON_STRING}.make_json ("Project '" + l_project_name + "' removed successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end

			-- add the message to the response response
			res.put_string (l_result_payload.representation)

		end

	rename_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Rename a project
		local
			l_payload, l_user_email, l_new_project_name, l_old_project_name: STRING
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do

			-- create string object to read-in the payload that comes with the request
			create l_payload.make_empty
				-- create json object that we send back as in response
			create l_result_payload.make
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

			-- if the parsing was successful and we have a json object, we fetch the properties
			-- for the project name
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

				-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("project_name_id") as s then
									l_old_project_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("new_project_name_id") as s then
									l_new_project_name := s.unescaped_string_8
				end
			end

			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end
			--l_user_email := "giorgio@hotmail.it"

			if l_old_project_name = Void or l_old_project_name.is_empty then
				--Error old name project empty
				l_result_payload.put (create {JSON_STRING}.make_json ("Old project name empty"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_new_project_name = Void or  l_new_project_name.is_empty then
				--Error new name project empty
				l_result_payload.put (create {JSON_STRING}.make_json ("New project name empty"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_project_name (l_new_project_name) then
				--Error name already existing
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name already existing"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_user_email = void or l_user_email.is_empty then
				--Error nobody is logged in
				l_result_payload.put (create {JSON_STRING}.make_json ("User is not logged in"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
				--Error more than 40 caracters for the name
			elseif l_new_project_name.count > 40 then
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name too long"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.is_owner (l_user_email, l_old_project_name) = false then
				--check if user is owner.
				l_result_payload.put (create {JSON_STRING}.make_json ("The user is not an owner"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				my_db.rename_project (l_old_project_name, l_new_project_name)
				-- Message tutto bene
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name changed successfully"), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end

			-- add the message to the response response
			res.put_string (l_result_payload.representation)
		end

	get_all_user_projects (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Get all the projects of a user
		local
			l_user_email: STRING
			j_obj: JSON_OBJECT
			l_result_payload: JSON_ARRAY
		do
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end

			create j_obj.make
			create l_result_payload.make_array

			-- Check if the name doesn't already exist
			if l_user_email = Void or l_user_email.is_empty then
				--Error user email empty
				j_obj.put (create {JSON_STRING}.make_json ("User email empty"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_if_mail_already_present (l_user_email) = false then
				j_obj.put (create {JSON_STRING}.make_json (l_user_email +" is not valid"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				j_obj.put (create {JSON_STRING}.make_json ("Projects of user"), create {JSON_STRING}.make_json ("success"))
				j_obj.put (my_db.get_all_user_projects (l_user_email), create {JSON_STRING}.make_json ("projects"))
				l_result_payload.extend (j_obj)
				set_json_header_ok (res, l_result_payload.representation.count)
			end

			-- add the message to the response response
			res.put_string (l_result_payload.representation)
		end

	get_all_user_projects_not_login (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Get all the projects of a user
		local
			l_user_email, l_payload: STRING
			j_obj: JSON_OBJECT
			l_result_payload: JSON_ARRAY
			parser: JSON_PARSER
		do

			create l_payload.make_empty
			create j_obj.make
			create l_result_payload.make_array
			req.read_input_data_into (l_payload)
				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the project name
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				if attached {JSON_STRING} j_object.item ("email") as s then
					l_user_email := s.unescaped_string_8
				end
			end
			-- Check if the name doesn't already exist
			if l_user_email = Void or l_user_email.is_empty then
				--Error user email empty
				j_obj.put (create {JSON_STRING}.make_json ("User email empty"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_if_mail_already_present (l_user_email) = false then
				j_obj.put (create {JSON_STRING}.make_json (l_user_email +" is not valid"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				j_obj.put (create {JSON_STRING}.make_json ("Projects of user"), create {JSON_STRING}.make_json ("success"))
				j_obj.put (my_db.get_all_user_projects (l_user_email), create {JSON_STRING}.make_json ("projects"))
				l_result_payload.extend (j_obj)
				set_json_header_ok (res, l_result_payload.representation.count)
			end

			-- add the message to the response response
			res.put_string (l_result_payload.representation)
		end

	get_all_project_members (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Get all the members and owners of a project
		local
			l_project_name, l_payload: STRING
			j_obj: JSON_OBJECT
			l_result_payload: JSON_ARRAY
			parser: JSON_PARSER
		do

			create l_payload.make_empty
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			create j_obj.make
			create l_result_payload.make_array
				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the project name
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				if attached {JSON_STRING} j_object.item ("project_name_id") as s then
					l_project_name := s.unescaped_string_8
				end
			end

			if l_project_name = Void or l_project_name.is_empty then
				--Error user email empty
				j_obj.put (create {JSON_STRING}.make_json ("Project name empty"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_project_name (l_project_name) = false then
				--Error user email empty
				j_obj.put (create {JSON_STRING}.make_json (l_project_name +" does not exist"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Get from the database all the projects which the user takes part in: db.get_all_user_project(a_user_email)
				j_obj.put (create {JSON_STRING}.make_json ("Members of project " + l_project_name), create {JSON_STRING}.make_json ("success"))
				--j_obj.put (my_db.get_all_project_members (l_project_name), create {JSON_STRING}.make_json ("members"))
				j_obj.put (my_db.get_members_info (l_project_name), create {JSON_STRING}.make_json ("members"))
				l_result_payload.extend (j_obj)
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- add the message to the response response
			res.put_string (l_result_payload.representation)
		end

--TODO useless?
--	get_all_project_owners (req: WSF_REQUEST; res: WSF_RESPONSE)
--	-- Get all the owners of a project
--		local
--			l_project_name: STRING
--			j_obj: JSON_OBJECT
--			l_result_payload: JSON_ARRAY
--		do
--			-- catch the project name in the uri
--			l_project_name := req.path_parameter ("project_name_id").string_representation
--			create j_obj.make
--			create l_result_payload.make_array
--			if l_project_name = Void or l_project_name.is_empty then
--				--Error user email empty
--				j_obj.put (create {JSON_STRING}.make_json ("Project name empty"), create {JSON_STRING}.make_json ("Error"))
--				l_result_payload.extend (j_obj)
--				set_json_header (res, 401, l_result_payload.representation.count)
--			elseif my_db.check_project_name (l_project_name) = false then
--				--Error user email empty
--				j_obj.put (create {JSON_STRING}.make_json ("Project name does not exist"), create {JSON_STRING}.make_json ("Error"))
--				l_result_payload.extend (j_obj)
--				set_json_header (res, 401, l_result_payload.representation.count)
--			else
--				-- Get from the database all the projects which the user takes part in: db.get_all_user_project(a_user_email)
--				l_result_payload := (my_db.get_all_project_owners(l_project_name))
--				-- Message tutto bene
--				set_json_header_ok (res, l_result_payload.representation.count)
--			end

--			-- add the message to the response response
--			res.put_string (l_result_payload.representation)
--		end

	add_member_to_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Add a member or an owner to a project
		local
			l_user_email, l_project_name, l_new_member, l_payload: STRING
			l_result_payload: JSON_ARRAY
			j_obj: JSON_OBJECT
			parser: JSON_PARSER
			-- Adds for sending email
			env: EXECUTION_ENVIRONMENT
			array_owners: ARRAYED_LIST[STRING]
			j_owners: JSON_ARRAY
			i: INTEGER
			string, email, path: STRING
				---------------
		do
			create j_obj.make
			--create string object to read-in the payload that comes with the request
			create l_payload.make_empty
				-- create json object that we send back as in response
			create l_result_payload.make_array
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			--now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

			--if the parsing was successful and we have a json object, we fetch the properties
			-- for the project name and new member id
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				--we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("project_name_id") as s then
									l_project_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_email_id") as s then
									l_new_member := s.unescaped_string_8
				end
			end
			-- catch the name of the project and the new member
			--l_new_member := req.path_parameter ("user_email_id").string_representation
			--l_project_name:= req.path_parameter ("project_name_id").string_representation

			-- Receive the name of the user logged in
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end
			--l_user_email := "marid06@hotmail.fr"
			if l_project_name = Void or l_project_name.is_empty then
				--Error old name project empty
				j_obj.put (create {JSON_STRING}.make_json ("Project name empty"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_new_member = Void or l_new_member.is_empty then
				--Error new member
				j_obj.put (create {JSON_STRING}.make_json ("New member email empty"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_project_name (l_project_name) = false then
				--Error name does not exist
				j_obj.put (create {JSON_STRING}.make_json ("Project name does not exist"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_if_mail_already_present (l_new_member) = false then
				-- New member doesn't exist
				j_obj.put (create {JSON_STRING}.make_json ("The user you want to add doesn't exist"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.is_member (l_new_member, l_project_name) then
				-- User is already a member
				j_obj.put (create {JSON_STRING}.make_json ("The user you want to add is already a member"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_user_email = void or l_user_email.is_empty then
				--Error nobody is logged in
				j_obj.put (create {JSON_STRING}.make_json ("User is not logged in"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
				--Error more than 40 caracters for the name
			elseif l_project_name.count > 40 then
				j_obj.put (create {JSON_STRING}.make_json ("Project name too long"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.is_member (l_user_email, l_project_name) = false then
				--check if user is member.
				j_obj.put (create {JSON_STRING}.make_json ("The user is not a member of this project"), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				my_db.add_member_to_project (l_project_name, l_new_member, False)
				j_obj.put (create {JSON_STRING}.make_json ("New member '" + l_new_member + "' added successfully to '" + l_project_name + "'."), create {JSON_STRING}.make_json ("success"))
				j_obj.put (create {JSON_STRING}.make_json (my_db.get_user_name (l_new_member)), create {JSON_STRING}.make_json ("name"))
				j_obj.put (create {JSON_STRING}.make_json (my_db.get_user_surname (l_new_member)), create {JSON_STRING}.make_json ("surname"))
				j_obj.put (create {JSON_STRING}.make_json (l_new_member), create {JSON_STRING}.make_json ("email"))
				j_obj.put (create {JSON_STRING}.make_json (my_db.get_project_points (l_project_name).out), create {JSON_STRING}.make_json ("points"))
				j_obj.put (create {JSON_STRING}.make_json ("0"), create {JSON_STRING}.make_json ("owner"))
				l_result_payload.extend (j_obj)
				--l_result_payload.extend (my_db.get_members_info (l_project_name, l_new_member))
				set_json_header_ok (res, l_result_payload.representation.count)

				-- Adds code for sending email to the owners of the project -------------------------------------------
				create j_owners.make_array
				-- Retrieve the owners email
				j_owners:=my_db.get_all_project_owners(l_project_name)
				print(my_db.get_all_project_owners(l_project_name).representation)
				create array_owners.make (j_owners.count)
				print(j_owners.count)
				across j_owners.array_representation as array loop
					-- Reads one email at time
					if attached {JSON_OBJECT} array.item as owner then
						if attached {JSON_STRING} owner.item ("email") as t then
								email:= t.unescaped_string_8
								print(email)
								array_owners.extend (email)
						end
					end
				end
				create env
				-- Sends emails
				-- In first place to all owners of the given project
				from
					i:=1
				until
					i>array_owners.count
				loop
					-- Make a strint to call python script
					create string.make_empty
					path:=my_db.path_to_src_folder(7)
					string:="python "
					string.append_string (path)
					string.append_string(array_owners[i])
					string.append_string(" ")
					string.append_string(l_new_member)
					string.append(" %"")
					string.append (l_project_name)
					string.append ("%"")
					env.launch(string)
					i:=i+1
				end
				--In second plase to new member
				create string.make_empty
				path:=my_db.path_to_src_folder(8)
				string:="python "
				string.append_string (path)
				string.append_string(l_user_email)
				string.append_string(" ")
				string.append_string(l_new_member)
				string.append(" %"")
				string.append (l_project_name)
				string.append ("%"")
				env.launch(string)

			-----------------------------------------------------------------------------------------------------

			end
			-- add the message to the response response
			res.put_string (l_result_payload.representation)
		end

	remove_member_from_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Remove a member from a project
		local
			l_user_email, l_project_name, l_member, l_payload: STRING
			l_result_payload: JSON_OBJECT
			j_obj: JSON_OBJECT
			parser: JSON_PARSER
			-- Adds for sending email
			env: EXECUTION_ENVIRONMENT
			array_owners: ARRAYED_LIST[STRING]
			j_owners: JSON_ARRAY
			i: INTEGER
			string, email, path: STRING
				---------------
		do
			create j_obj.make
			--create string object to read-in the payload that comes with the request
			create l_payload.make_empty
				-- create json object that we send back as in response
			create l_result_payload.make
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			--now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				--we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("project_name_id") as s then
									l_project_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_email_id") as s then
									l_member := s.unescaped_string_8
				end
			end

			-- Receive the name of the user logged in
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end
			--l_user_email := "marid06@hotmail.fr"
			if l_project_name = Void or l_project_name.is_empty then
				--Error old name project empty
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name empty"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_member = Void or l_member.is_empty then
				--Error new member
				l_result_payload.put (create {JSON_STRING}.make_json ("Member email empty"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_project_name (l_project_name) = false then
				--Error name does not exist
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name does not exist"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_user_email = void or l_user_email.is_empty then
				--Error nobody is logged in
				l_result_payload.put (create {JSON_STRING}.make_json ("User is not logged in"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
				--Error more than 40 caracters for the name
			elseif l_project_name.count > 40 then
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name too long"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.is_member (l_user_email, l_project_name) = false then
				--check if user is member.
				l_result_payload.put (create {JSON_STRING}.make_json ("The user is not a member of this project"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.is_owner (l_user_email, l_project_name) = false then
				--check is user is owner
				l_result_payload.put (create {JSON_STRING}.make_json ("The user is not an owner of this project"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				my_db.remove_member_from_project (l_project_name, l_member)
				-- Message tutto bene
				l_result_payload.put (create {JSON_STRING}.make_json ("Member '" + l_member + "' removed successfully from '" + l_project_name + "'."), create {JSON_STRING}.make_json ("Success"))
				set_json_header_ok (res, l_result_payload.representation.count)

				-- Adds code for sending email to the owners of the project
				create j_owners.make_array
				-- Retrieve the owners email
				j_owners:=my_db.get_all_project_owners(l_project_name)
				print(my_db.get_all_project_owners(l_project_name).representation)
				create array_owners.make (j_owners.count)
				print(j_owners.count)
				across j_owners.array_representation as array loop
					-- Reads one email at time
					if attached {JSON_OBJECT} array.item as owner then
						if attached {JSON_STRING} owner.item ("email") as t then
								email:= t.unescaped_string_8
								print(email)
								array_owners.extend (email)
						end
					end
				end
				create env
				-- Sends emails
				-- In first place to all owners of the given project
				from
					i:=1
				until
					i>array_owners.count
				loop
					-- Make a strint to call python script
					create string.make_empty
					path:=my_db.path_to_src_folder(9)
					string:="python "
					string.append_string (path)
					string.append_string(array_owners[i])
					string.append_string(" ")
					string.append_string(l_member)
					string.append(" %"")
					string.append (l_project_name)
					string.append ("%" ")
					string.append (l_user_email)
					env.launch(string)
					i:=i+1
				end
				--In second plase to new member
				create string.make_empty
				path:=my_db.path_to_src_folder(10)
				string:="python "
				string.append_string (path)
				string.append_string(l_user_email)
				string.append_string(" ")
				string.append_string(l_member)
				string.append(" %"")
				string.append (l_project_name)
				string.append ("%"")
				env.launch(string)

			-----------------------------------------------------------------------------------------------------

			end

			-- add the message to the response response
			res.put_string (l_result_payload.representation)
		end

		promote_owner (req: WSF_REQUEST; res: WSF_RESPONSE)
		-- promote a member, owner to a project
		local
			l_user_email, l_project_name, l_new_owner, l_payload: STRING
			l_result_payload: JSON_OBJECT
			j_obj: JSON_OBJECT
			parser: JSON_PARSER
			env: EXECUTION_ENVIRONMENT
			array_owners: ARRAYED_LIST[STRING]
			j_owners: JSON_ARRAY
			i: INTEGER
			string, email, path: STRING
		do
			create j_obj.make
			--create string object to read-in the payload that comes with the request
			create l_payload.make_empty
				-- create json object that we send back as in response
			create l_result_payload.make
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			--now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

				--we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("project_name_id") as s then
									l_project_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_email_id") as s then
									l_new_owner := s.unescaped_string_8
				end
			end

			-- Receive the name of the user logged in
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end
			--l_user_email := "marid06@hotmail.fr"
			if l_project_name = Void or l_project_name.is_empty then
				--Error old name project empty
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name empty"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_new_owner = Void or l_new_owner.is_empty then
				--Error new owner
				l_result_payload.put (create {JSON_STRING}.make_json ("New owner email empty"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_project_name (l_project_name) = false then
				--Error name does not exist
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name does not exist"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_user_email = void or l_user_email.is_empty then
				--Error nobody is logged in
				l_result_payload.put (create {JSON_STRING}.make_json ("User is not logged in"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
				--Error more than 40 caracters for the name
			elseif l_project_name.count > 40 then
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name too long"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.is_member (l_new_owner, l_project_name) = false then
				--check if user is member.
				l_result_payload.put (create {JSON_STRING}.make_json ("The new owner is not member of this project"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.is_owner (l_user_email, l_project_name) = false then
				--check if user is member.
				l_result_payload.put (create {JSON_STRING}.make_json ("The user is not owner of this project"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.is_owner (l_new_owner, l_project_name) then
				--check if user is already owner.
				l_result_payload.put (create {JSON_STRING}.make_json ("The user is already owner of the project"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				my_db.promote_owner (l_project_name, l_new_owner)
				l_result_payload.put (create {JSON_STRING}.make_json ("New owner '" + l_new_owner + "' added successfully to '" + l_project_name + "'."), create {JSON_STRING}.make_json ("Success"))
				set_json_header_ok (res, l_result_payload.representation.count)

				--Send an email to the new owner
				create string.make_empty
				create env
				path:= my_db.path_to_src_folder(6)
				string:="python "
				string.append_string (path)
				string.append(l_new_owner)
				string.append(" %"")
				string.append(l_project_name)
				string.append ("%"")
				env.launch(string)
				-- Adds code for sending email to the owners of the project
				create j_owners.make_array
				-- Retrieve the owners email
				j_owners:=my_db.get_all_project_owners(l_project_name)
				print(my_db.get_all_project_owners(l_project_name).representation)
				create array_owners.make (j_owners.count)
				print(j_owners.count)
				across j_owners.array_representation as array loop
					-- Reads one email at time
					if attached {JSON_OBJECT} array.item as owner then
						if attached {JSON_STRING} owner.item ("email") as t then
								email:= t.unescaped_string_8
								print(email)
								array_owners.extend (email)
						end
					end
				end
				create env
					-- Sends emails
					from
						i:=1
					until
						i>array_owners.count
					loop
						-- Make a strint to call python script
						create string.make_empty
						path:=my_db.path_to_src_folder(5)
						string:="python "
						string.append_string (path)
						string.append_string(array_owners[i])
						string.append_string(" ")
						string.append (l_project_name)
						string.append(" %"")
						string.append (l_new_owner)
						string.append ("%"")
						env.launch(string)
						i:=i+1

					end
			end

			-- add the message to the response response
			res.put_string (l_result_payload.representation)
		end

downgrade_owner (req: WSF_REQUEST; res: WSF_RESPONSE)
		-- downgrade a owner, member to a project
		local
			l_user_email, l_project_name, l_owner, l_payload: STRING
			l_result_payload: JSON_OBJECT
			j_obj: JSON_OBJECT
			parser: JSON_PARSER
			env: EXECUTION_ENVIRONMENT
			array_owners: ARRAYED_LIST[STRING]
			j_owners: JSON_ARRAY
			i: INTEGER
			string, email, path: STRING
		do
			create j_obj.make
			--create string object to read-in the payload that comes with the request
			create l_payload.make_empty
				-- create json object that we send back as in response
			create l_result_payload.make
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			--now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

				--we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("project_name_id") as s then
									l_project_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_email_id") as s then
									l_owner := s.unescaped_string_8
				end
			end

			-- Receive the name of the user logged in
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end
			--l_user_email := "marid06@hotmail.fr"
			if l_project_name = Void or l_project_name.is_empty then
				--Error old name project empty
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name empty"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_owner = Void or l_owner.is_empty then
				--Error new owner
				l_result_payload.put (create {JSON_STRING}.make_json ("New owner email empty"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_project_name (l_project_name) = false then
				--Error name does not exist
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name does not exist"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_user_email = void or l_user_email.is_empty then
				--Error nobody is logged in
				l_result_payload.put (create {JSON_STRING}.make_json ("User is not logged in"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
				--Error more than 40 caracters for the name
			elseif l_project_name.count > 40 then
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name too long"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.is_owner (l_user_email, l_project_name) = false then
				--check if user is owner.
				l_result_payload.put (create {JSON_STRING}.make_json ("The user is not owner of this project"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.is_owner (l_owner, l_project_name) = false then
				--check if user is already owner.
				l_result_payload.put (create {JSON_STRING}.make_json ("The user is not an owner of the project"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.is_member (l_owner, l_project_name) = false then
				--check if user is member.
				l_result_payload.put (create {JSON_STRING}.make_json ("The owner is not member of this project"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				my_db.downgrade_owner (l_project_name, l_owner)
				-- Message tutto bene
				l_result_payload.put (create {JSON_STRING}.make_json ("User '" + l_owner + "' is no longer a owner of the project '" + l_project_name + "'."), create {JSON_STRING}.make_json ("Success"))
				set_json_header_ok (res, l_result_payload.representation.count)

				--Send an email to the new owner
				create string.make_empty
				create env
				path:= my_db.path_to_src_folder(14)
				string:="python "
				string.append_string (path)
				string.append(l_owner)
				string.append(" %"")
				string.append(l_project_name)
				string.append ("%"")
				env.launch(string)
				-- Adds code for sending email to the owners of the project
				create j_owners.make_array
				-- Retrieve the owners email
				j_owners:=my_db.get_all_project_owners(l_project_name)
				print(my_db.get_all_project_owners(l_project_name).representation)
				create array_owners.make (j_owners.count)
				print(j_owners.count)
				across j_owners.array_representation as array loop
					-- Reads one email at time
					if attached {JSON_OBJECT} array.item as owner then
						if attached {JSON_STRING} owner.item ("email") as t then
								email:= t.unescaped_string_8
								print(email)
								array_owners.extend (email)
						end
					end
				end
				create env
					-- Sends emails
					from
						i:=1
					until
						i>array_owners.count
					loop
						-- Make a strint to call python script
						create string.make_empty
						path:=my_db.path_to_src_folder(15)
						string:="python "
						string.append_string (path)
						string.append_string(array_owners[i])
						string.append_string(" ")
						string.append (l_project_name)
						string.append(" %"")
						string.append (l_owner)
						string.append ("%"")
						env.launch(string)
						i:=i+1

					end
			end

			-- add the message to the response response
			res.put_string (l_result_payload.representation)
		end

end
