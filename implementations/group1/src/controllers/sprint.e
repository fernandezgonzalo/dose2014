note
	description: "Handlers for everything that concerns sprints."
	author: "Group1"

class
	SPRINT

inherit

	HEADER_JSON_HELPER

	SESSION_HELPER

create
	make

feature {NONE} -- Creation

	make (a_dao: DB; a_session_manager: WSF_SESSION_MANAGER)
		require
			valid_parameter: a_dao /= void and a_session_manager /= void
		do
			my_db := a_dao
			session_manager := a_session_manager
		ensure
			my_db = a_dao and session_manager = a_session_manager
		end

feature {NONE} -- Private attributes

	my_db: DB

	session_manager: WSF_SESSION_MANAGER

feature -- Handlers

	add_sprint (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_project").string_representation /= void
		local
			l_payload, l_project_id, duration: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			flag: BOOLEAN
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create duration.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("duration") as n then
					duration := n.unescaped_string_8
				end
			end
			l_project_id := req.path_parameter ("id_project").string_representation
			flag := my_db.add_sprint (duration, l_project_id)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Sprint added "), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		ensure
			response_not_null: res /= void
		end

	get_sprints (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all sprints
		require
			valid_session: req_has_cookie (req, "_session_")
		local
			l_result_payload: STRING
		do
			l_result_payload := my_db.search_sprint.representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			response_not_null: res /= void
		end

	get_a_sprint (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with a sprints
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_sprint").string_representation /= void
		local
			l_result_payload: STRING
			l_sprint_id: STRING
		do
			l_sprint_id := req.path_parameter ("id_sprint").string_representation
			l_result_payload := my_db.search_a_sprint (l_sprint_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			response_not_null: res /= void
		end

	get_tasks_by_sprint (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all tasks of a sprint
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_sprint").string_representation /= void
		local
			l_result_payload: STRING
			l_sprint_id: STRING
			l_user_id: STRING
		do
			l_sprint_id := req.path_parameter ("id_sprint").string_representation
			l_result_payload := my_db.search_tasks_by_sprint (l_sprint_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			response_not_null: res /= void
		end

	delete_sprint (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a response that contains a confiramtion message of a deleted sprint
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_sprint").string_representation /= void
		local
			l_result: JSON_OBJECT
			l_sprint_id: STRING
		do
			l_sprint_id := req.path_parameter ("id_sprint").string_representation
			my_db.remove_user (l_sprint_id.to_natural_8)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Sprint removed " + l_sprint_id.out), create {JSON_STRING}.make_json ("Message"))
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		ensure
			response_not_null: res /= void
		end

	update_sprint (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_sprint").string_representation /= void
		local
			l_payload, duration, l_sprint_id: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			flag: BOOLEAN
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create duration.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the sprintId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("duration") as n then
					duration := n.unescaped_string_8
				end
			end
			l_sprint_id := req.path_parameter ("id_sprint").string_representation
			flag := my_db.update_sprint (l_sprint_id.to_natural_8, duration.to_natural_8)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Sprint updated: new duration = " + duration.out + "."), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		ensure
			response_not_null: res /= void
		end

end
