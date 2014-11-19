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

	add_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Add a new project
		local
			l_payload, l_user_email, l_project_name: STRING
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do

				-- create string object to read-in the payload that comes with the request
			create l_payload.make_empty
				-- create json object that we send back as in response
			create l_result_payload.make

				-- Receive the name of the new project

				if req_has_cookie(req, "_demo_session_") then

					l_user_email := get_session_from_req(req, "_demo_session_").at("id").out
				end

			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

			-- if the parsing was successful and we have a json object, we fetch the properties
			-- for the project name
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

				-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("project_name") as s then
									l_project_name := s.unescaped_string_8
				end
			end

			-- Check if the name doesn't already exist
			if l_project_name.is_empty or l_project_name = Void then
				--Error name project empty
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name empty"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_project_name (l_project_name) then
				--Error name already existing
				l_result_payload.put (create {JSON_STRING}.make_json ("Project name already existing"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_user_email.is_empty or l_user_email = void  then
				--Error nobody is logged in
				l_result_payload.put (create {JSON_STRING}.make_json ("User is not logged in"), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				my_db.add_project (l_project_name, l_user_email)
				-- Message tutto bene
				l_result_payload.put (create {JSON_STRING}.make_json ("New project '" + l_project_name + "' added successfully."), create {JSON_STRING}.make_json ("Success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end

			-- add the message to the response response
			res.put_string (l_result_payload.representation)
		end

	remove_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Remove a project
		do
				-- Receive the name of the project

				-- Check if the project is empty (no iterations): db.is_project_empty(a_project_name)

				-- If yes, delete oit from the database: db.remove_project(a_project_name)

				--Otherwise, Error message
		end

	rename_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Rename a project
		do
				-- Receive the old and the new name of the project

				-- Change it into the database: db.rename_project(a_old_project_name, a_new_old_project_name)
		end

	get_all_user_projects (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Get all the projects of a user
		local
			l_payload, l_user_email: STRING
			j_obj: JSON_OBJECT
			l_result_payload: JSON_ARRAY
			parser: JSON_PARSER
		do

			-- create string object to read-in the payload that comes with the request
			create l_payload.make_empty
			-- create json object that we send back as in response
			create l_result_payload.make_array

			-- Receive the email of the user
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

			-- if the parsing was successful and we have a json object, we fetch the properties
			-- for the user email
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

				-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("user_email") as s then
									l_user_email := s.unescaped_string_8
				end
			end

			-- Check if the name doesn't already exist
			if l_user_email.is_empty or l_user_email = Void then
				--Error user email empty
				j_obj.put (create {JSON_STRING}.make_json ("User email empty"), create {JSON_STRING}.make_json ("Error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Get from the database all the projects which the user takes part in: db.get_all_user_project(a_user_email)
				l_result_payload := (my_db.get_all_user_projects (l_user_email))
				-- Message tutto bene
				set_json_header_ok (res, l_result_payload.representation.count)
			end

			-- add the message to the response response
			res.put_string (l_result_payload.representation)
		end

	get_all_project_members (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Get all the members and owners of a project
		do
				-- Receive the name of a project

				-- Get from the database all the members of the projet
		end

	get_all_project_owners (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Get all the owners of a project
		do
				-- Receive the name of a project

				-- Get from the database all the owners of the projet
		end

	add_member_to_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Add a member or an owner to a project
		do
				-- Receive the name of the prject, the email of the user and a true flag if the user is also an owner

				-- Add it in the daabase: add_member_to_project(a_project_name: STRING, a_user_email: STRING, a_owner: BOOLEAN)
		end

	remove_member_from_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Remove a member from a project
		do
				-- Receive the name of the project and the user's email to remove but also the email of the user who wants to remove a member

				-- Check if the user is allowed to remove a member: if he is aan owner

				-- Remove from the database: remove_member_project(a_project_name: STRING, a_user_email: STRING)
		end

end
