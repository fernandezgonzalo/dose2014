note
	description: "Handlers for everything that concerns tasks."
	author: "Group1"

class
	TASK

inherit

	HEADER_JSON_HELPER

	SESSION_HELPER

create
	make

feature {NONE} -- Creation

	make (a_dao: DB; a_session_manager: WSF_SESSION_MANAGER)
		require
			valid_parameter: a_dao /= Void and a_session_manager /= Void
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

	add_a_task (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new task
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_requirement").string_representation /= Void and req.path_parameter ("id_sprint").string_representation /= Void and req.path_parameter ("id_user").string_representation /= Void
		local
			l_payload, desc, comment, duration, points, status, l_user_id, l_requirement_id, l_sprint_id: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			flag: BOOLEAN
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create desc.make_empty
			create comment.make_empty
			create duration.make_empty
			create points.make_empty
			create status.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("desc") as n then
					desc := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("comment") as n then
					comment := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("duration") as n then
					duration := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("points") as n then
					points := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("status") as n then
					status := n.unescaped_string_8
				end
			end
			l_user_id := req.path_parameter ("id_user").string_representation
			l_requirement_id := req.path_parameter ("id_requirement").string_representation
			l_sprint_id := req.path_parameter ("id_sprint").string_representation
			flag := my_db.add_task (desc, comment, status, duration, points, l_user_id, l_requirement_id, l_sprint_id)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added task "), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		ensure
			response_not_null: res /= Void
		end

	get_tasks (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all tasks
		require
			valid_session: req_has_cookie (req, "_session_")
		local
			l_result_payload: STRING
		do
			l_result_payload := my_db.search_tasks.representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			response_not_null: res /= Void
		end

	get_a_task (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with a task
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_task").string_representation /= Void
		local
			l_result_payload: STRING
			l_task_id: STRING
		do
			l_task_id := req.path_parameter ("id_task").string_representation
			l_result_payload := my_db.search_a_task (l_task_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			response_not_null: res /= Void
		end

	get_tasks_by_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all task by user
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_user").string_representation /= Void
		local
			l_result_payload: STRING
			l_user_id: STRING
		do
			l_user_id := req.path_parameter ("id_user").string_representation
			l_result_payload := my_db.search_tasks_by_user (l_user_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			response_not_null: res /= Void
		end

	update_task (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_task").string_representation /= Void
		local
			l_payload, l_task_id, desc, comment, duration, points, status, id_user: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			flag: BOOLEAN
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create desc.make_empty
			create comment.make_empty
			create duration.make_empty
			create points.make_empty
			create status.make_empty
			create id_user.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("desc") as n then
					desc := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("comment") as n then
					comment := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("duration") as n then
					duration := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("points") as n then
					points := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("status") as n then
					status := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("id_user") as n then
					id_user := n.unescaped_string_8
				end
			end
			l_task_id := req.path_parameter ("id_task").string_representation
			flag := my_db.update_task (l_task_id, desc, comment, status, duration, points, id_user)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Task updated "), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		ensure
			response_not_null: res /= Void
		end

	delete_task (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a response that contains a confiramtion message of a deleted project
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_task").string_representation /= Void
		local
			l_result: JSON_OBJECT
			l_task_id: STRING
		do
			l_task_id := req.path_parameter ("id_task").string_representation
			my_db.remove_task (l_task_id.to_natural_8)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Task removed " + l_task_id.out), create {JSON_STRING}.make_json ("Message"))
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		ensure
			response_not_null: res /= Void
		end

end
