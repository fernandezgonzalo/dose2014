note
	description: "Handlers for everything that concerns sprints."
	author: "$Rio Cuarto4 Team$"
	date: "$2014-11-11$"
	revision: "$0.01$"

class
	SPRINT_CONTROLLER

inherit
	HEADER_JSON_HELPER

create
	make


feature {NONE} -- Creation

	make (a_path_to_db_file: STRING)
		do
			create db_handler_project.make (a_path_to_db_file)
		end


feature {NONE} -- Private attributes

	db_handler_project : DB_HANDLER_SPRINT


feature -- Handlers

	get_sprints (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all users
		local
			l_result_payload: STRING
		do
			l_result_payload := db_handler_project.find_all.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	add_project (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new users; the user data are expected to be part of the request's payload
		local
			l_payload : STRING
			new_name, new_status, new_description, new_mpps, new_user_id : STRING
			new_project : PROJECT
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
				if attached {JSON_STRING} j_object.item ("name") as name then
					new_name := name.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("status") as status then
					new_status := status.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("description") as description then
					new_description := description.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("mpps") as mpps then
					new_mpps := mpps.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_id") as user_id then
					new_user_id := user_id.unescaped_string_8
				end

			end

			create new_project.make (new_name, new_status, new_description, new_mpps.to_integer_32, new_user_id.to_integer_32)
				-- create the user in the database
			db_handler_project.add (new_project)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added project " + new_project.name ), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	update_project (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- update a user from the database
		local
			l_payload: STRING
			l_project_id: STRING
			project_name, project_status, project_description, project_mpps, project_user_id : STRING
			project : PROJECT
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
				if attached {JSON_STRING} j_object.item ("name") as name then
					project_name := name.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("status") as status then
					project_status := status.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("description") as description then
					project_description := description.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("mpps") as mpps then
					project_mpps := mpps.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_id") as user_id then
					project_user_id := user_id.unescaped_string_8
				end

			end

				-- create the user
			create project.make (project_name, project_status, project_description, project_mpps.to_integer_32, project_user_id.to_integer_32)

				-- the user_id from the URL (as defined by the placeholder in the route)
			l_project_id := req.path_parameter ("project_id").string_representation

				-- update the user in the database
			db_handler_project.update (l_project_id.to_natural,project)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Updated project "+ project.name), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	remove_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- remove a user from the database
		local
			l_project_id: STRING
			l_result: JSON_OBJECT
		do
				-- the user_id from the URL (as defined by the placeholder in the route)
			l_project_id := req.path_parameter ("project_id").string_representation
				-- remove the user
			db_handler_project.remove (l_project_id.to_natural)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


end
