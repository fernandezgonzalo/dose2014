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
			-- sends a reponse that contains a json array with all tasks
		local
			l_result_payload: STRING
		do
			l_result_payload := db_handler_task.find_all.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	get_sub_tasks (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all subtasks out of a task
		local
			l_super_task_id: STRING
			l_result_payload: STRING
		do
			-- First we have to obtain the super task id
			-- from the URL (as defined by the placeholder in the route)
			l_super_task_id := req.path_parameter ("task_id").string_representation

			-- Then, we return the corresponding result
			l_result_payload := db_handler_task.find_all_sub_tasks(l_super_task_id.to_natural).representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	add_task (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new task; the task data is expected to be part of the request's payload
		local
			l_payload : STRING
			new_title, new_descr, new_priority, new_position, new_type, new_sprint_id, new_user_id : STRING
			new_task : TASK
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
				-- for the topic data
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string for each topic attribute.
				if attached {JSON_STRING} j_object.item ("title") as title then
					new_title := title.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("description") as descr then
					new_descr := descr.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("priority") as priority then
					new_priority := priority.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("position") as position then
					new_position := position.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("sprint_id") as sprint_id then
					new_sprint_id := sprint_id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_id") as user_id then
					new_user_id := user_id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("type") as type then
					new_type := type.unescaped_string_8
				end

			end

			create new_task.make (new_sprint_id.to_natural, new_user_id.to_natural, new_title, new_descr, new_type, new_priority, new_position)
				-- create the topic in the database
			db_handler_task.add_super (new_task)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added task " + new_task.title ), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	add_sub_task (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new task; the task data is expected to be part of the request's payload
		local
			l_payload : STRING
			new_title, new_descr, new_priority, new_position, new_type, new_sprint_id, new_user_id, new_super_task_id : STRING
			new_task : TASK
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
				-- for the topic data
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string for each topic attribute.
				if attached {JSON_STRING} j_object.item ("title") as title then
					new_title := title.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("description") as descr then
					new_descr := descr.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("priority") as priority then
					new_priority := priority.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("position") as position then
					new_position := position.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("sprint_id") as sprint_id then
					new_sprint_id := sprint_id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_id") as user_id then
					new_user_id := user_id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("super_task_id") as super_task_id then
					new_super_task_id := super_task_id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("type") as type then
					new_type := type.unescaped_string_8
				end

			end

			create new_task.make_sub_task (new_sprint_id.to_natural, new_user_id.to_natural, new_super_task_id.to_natural, new_title, new_descr, new_type, new_priority, new_position)
				-- create the topic in the database
			db_handler_task.add_super (new_task)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added subtask " + new_task.title ), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	update_task (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- update a task from the database
		local
			l_payload: STRING
			l_task_id: STRING
			l_priority, l_position, l_type, l_descr, l_title, l_super_task_id, l_sprint_id, l_user_id : STRING
			l_task: TASK
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

				-- we have to convert the json string into an eiffel string for each task attribute.
				if attached {JSON_STRING} j_object.item ("title") as title then
					l_title := title.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("description") as descr then
					l_descr := descr.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("priority") as priority then
					l_priority := priority.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("position") as position then
					l_position := position.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("sprint_id") as sprint_id then
					l_sprint_id := sprint_id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_id") as user_id then
					l_user_id := user_id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("super_task_id") as super_task_id then
					l_super_task_id := super_task_id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("type") as type then
					l_type := type.unescaped_string_8
				end

			end

				-- create the task
			create l_task.make (l_sprint_id.to_natural, l_user_id.to_natural, l_title, l_descr, l_type, l_priority, l_position)

				-- the user_id from the URL (as defined by the placeholder in the route)
			l_task_id := req.path_parameter ("task_id").string_representation

				-- update the task in the database
			db_handler_task.update (l_task_id.to_natural,l_task)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Updated task "+ l_task.title), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	remove_task (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- remove a task from the database
		local
			l_task_id: STRING
			l_result: JSON_OBJECT
		do
				-- the task_id from the URL (as defined by the placeholder in the route)
			l_task_id := req.path_parameter ("task_id").string_representation
				-- remove the topic
			db_handler_task.remove (l_task_id.to_natural)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


end


