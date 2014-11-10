note
	description: "Handlers for everything that concerns tasks."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-10$"
	revision: "$0.01$"

class
	TASK_CONTROLLER

inherit
	HEADER_JSON_HELPER

create
	make

feature {NONE} -- Initialization

	make (a_path_to_db_file: STRING)
		do
			create db_handler_task.make(a_path_to_db_file)
		end


feature {NONE} -- Private attributes

	db_handler_task : DB_HANDLER_TASK

feature -- Handlers

	get_tasks (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all task
		local
			l_result_payload: STRING
		do
			--TODO
		end

	add_task (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new topic; the topic data is expected to be part of the request's payload
		local
			l_payload : STRING
			new_title, new_descr, new_project_id, new_task_id, new_user_id : STRING
			new_topic : TOPIC
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
			--TODO
		end

	update_task (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- update a topic from the database
		do
			--TODO
		end

	remove_task (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- remove a topic from the database
		local
			l_topic_id: STRING
			l_result: JSON_OBJECT
		do
			--TODO
		end


end


