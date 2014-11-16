note
	description: "Summary description for {COFFEE_PROJECT_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_PROJECT_CTRL

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

	create_project (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_payload, l_name, l_description, l_manager_id, l_message: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_name.make_empty
			create l_description.make_empty
			create l_manager_id.make_empty
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
				if attached {JSON_STRING} j_object.item ("name") as s then
					l_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("description") as s then
					l_description := s.unescaped_string_8
				end
			end
				-- create the user in the database
			l_manager_id := get_session_from_req (req, "_coffee_session_").item("id").out
			if my_db.create_project (l_name, l_description, l_manager_id)then
				l_message := "OK"
			else
				l_message := "Could not create project"
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

	delete_project (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_project_id, l_message: STRING
			l_manager_id : INTEGER
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_project_id.make_empty
			create l_message.make_empty
			create l_result.make

			if req_has_cookie (req, "_coffee_session_" ) then


			l_project_id := req.path_parameter("project_id").string_representation

			l_manager_id := get_session_from_req (req, "_coffee_session_").item("id").out.to_integer
			if l_manager_id = my_db.get_project(l_project_id).manager_id then
				if my_db.delete_project(l_project_id) then
					l_message := "OK"
				else
					l_message := "Could not create project"
				end
			else
				l_message := "Must be owner to delete project"
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

	get_projects (req: WSF_REQUEST; res: WSF_RESPONSE)

	local

	do

	end

	update_project (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_payload, l_name, l_description, l_project_id,l_manager_id, l_message: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_name.make_empty
			create l_description.make_empty
			create l_manager_id.make_empty
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

				l_project_id := req.path_parameter("project_id").string_representation

				l_manager_id := get_session_from_req (req, "_coffee_session_").item("id").out

				if attached {JSON_STRING} j_object.item ("name") as s then
					l_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("description") as s then
					l_description := s.unescaped_string_8
				end
			end

			if l_manager_id.to_integer = my_db.get_project(l_project_id).manager_id then

				if my_db.update_project (l_project_id, l_name, l_description, l_manager_id)then
					l_message := "OK"
				else
					l_message := "Could not update project"
				end
			else
				l_message := "Must be owner to update project"
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
