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
		do
			my_db := a_dao
		end

feature {NONE} -- Private attributes

	my_db: DB

	session_manager: WSF_SESSION_MANAGER

feature -- Handlers

	get_sprints (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all sprints
		local
			l_result_payload: STRING
		do
			l_result_payload := my_db.search_sprint.representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	get_a_sprint (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with a sprints
		local
			l_result_payload: STRING
			l_sprint_id: STRING
		do
			l_sprint_id := req.path_parameter ("id_sprint").string_representation
			l_result_payload := my_db.search_a_sprint (l_sprint_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	get_tasks_by_sprint (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all tasks of a sprint
		local
			l_result_payload: STRING
			l_sprint_id: STRING
			l_user_id: STRING
		do
			l_sprint_id := req.path_parameter ("id_sprint").string_representation
			l_user_id := req.path_parameter ("id_user").string_representation
			l_result_payload := my_db.search_tasks_by_sprint (l_user_id.to_integer, l_sprint_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end


end
