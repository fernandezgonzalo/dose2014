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
		do
			my_db := a_dao
		end

feature {NONE} -- Private attributes

	my_db: DB

	session_manager: WSF_SESSION_MANAGER

feature -- Handlers

	get_tasks (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all tasks
		local
			l_result_payload: STRING
		do
			l_result_payload := my_db.search_tasks.representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	get_a_task (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with a task
		local
			l_result_payload: STRING
			l_task_id: STRING
		do
			l_task_id := req.path_parameter ("id_task").string_representation
			l_result_payload := my_db.search_a_task (l_task_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end



end
