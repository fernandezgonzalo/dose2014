note
	description: "Handlers for everything that concerns projects."
	author: "Group1"

class
	PROJECT

inherit

	HEADER_JSON_HELPER

	SESSION_HELPER

create
	make

feature {NONE} -- Creation

	make (a_dao: DB; a_session_manager: WSF_SESSION_MANAGER)
		do
			my_db := a_dao
			session_manager := a_session_manager
		end

feature {NONE} -- Private attributes

	my_db: DB

	session_manager: WSF_SESSION_MANAGER

feature -- Handlers

	get_projects (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all projects
		require
			valid_session: req_has_cookie (req, "_session_")
		local
			l_result_payload: STRING
		do
			l_result_payload := my_db.search_all_projects.representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			response_not_null: res /= void
		end

	get_users_by_id_project (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_project").string_representation /= void
		local
			l_result_payload: STRING
			l_project_id: STRING
		do
			l_project_id := req.path_parameter ("id_project").string_representation
			l_result_payload := my_db.search_all_users_by_project (l_project_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			response_not_null: res /= void
		end

	update_project (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_project").string_representation /= void
		local
			l_payload, info, name, l_project_id: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			flag: BOOLEAN
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create info.make_empty
			create name.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("info") as n then
					info := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("name") as n then
					name := n.unescaped_string_8
				end
			end
			l_project_id := req.path_parameter ("id_project").string_representation
			flag := my_db.update_project (l_project_id.to_natural_8, name, info)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added project "), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		ensure
			response_not_null: res /= void
		end

	add_project (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new project
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_user").string_representation /= void
		local
			l_payload, info, name, l_user_id: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			flag: BOOLEAN
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create info.make_empty
			create name.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("info") as n then
					info := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("name") as n then
					name := n.unescaped_string_8
				end
			end
			l_user_id := req.path_parameter ("id_user").string_representation
			flag := my_db.create_project_by_user (l_user_id.to_natural_8, name, info)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added project "), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		ensure
			response_not_null: res /= void
		end

	add_user_in_project (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a user in a project
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_project").string_representation /= void
			req.path_parameter ("id_user").string_representation /= void
		local
			l_payload, l_user_id, l_project_id, role: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			flag: BOOLEAN
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create role.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("role") as n then
					role := n.unescaped_string_8
				end
			end
			l_user_id := req.path_parameter ("id_user").string_representation
			l_project_id := req.path_parameter ("id_project").string_representation
			flag := my_db.add_user_project (l_user_id, l_project_id, role)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added user in project "), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		ensure
			response_not_null: res /= void
		end

	delete_user_in_project (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a response that contains a confiramtion message of a deleted project
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_project").string_representation /= void and req.path_parameter ("id_user").string_representation /= void
		local
			l_result: JSON_OBJECT
			l_project_id: STRING
			l_user_id: STRING
			flag: BOOLEAN
		do
			l_project_id := req.path_parameter ("id_project").string_representation
			l_user_id := req.path_parameter ("id_user").string_representation
			flag := my_db.remove_user_project (l_user_id, l_project_id)
			create l_result.make
			if flag then
				l_result.put (create {JSON_STRING}.make_json ("ok"), create {JSON_STRING}.make_json ("Message"))
			else
				l_result.put (create {JSON_STRING}.make_json ("Error"), create {JSON_STRING}.make_json ("Message"))
			end
			set_json_header_ok (res, l_result.count)
			res.put_string (l_result.representation)
		ensure
			response_not_null: res /= void
		end

	get_project_sprints (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all sprints of a selected project
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_project").string_representation /= void
		local
			l_result_payload: STRING
			l_project_id: STRING
		do
			l_project_id := req.path_parameter ("id_project").string_representation
			l_result_payload := my_db.search_project_sprints (l_project_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			response_not_null: res /= void
		end

	delete_project (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a response that contains a confiramtion message of a deleted project
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_project").string_representation /= void
		local
			l_result: JSON_OBJECT
			l_project_id: STRING
		do
			l_project_id := req.path_parameter ("id_project").string_representation
			my_db.remove_project (l_project_id.to_natural_8)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Project removed " + l_project_id.out), create {JSON_STRING}.make_json ("Message"))
			set_json_header_ok (res, l_result.count)
			res.put_string (l_result.representation)
		ensure
			response_not_null: res /= void
		end

	get_ranking (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_project").string_representation /= void
		local
			l_result_payload, l_project_id: STRING
		do
			l_project_id := req.path_parameter ("id_project").string_representation
			l_result_payload := my_db.search_user_points_by_project (l_project_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			response_not_null: res /= void
		end

end
