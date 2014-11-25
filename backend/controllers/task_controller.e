note
	description: "Handlers for everything that concerns tasks.."
	author: "Zensich Ezequiel"
	date: "$11/13/2014$"
	revision: "$Revision$"

class
	TASK_CONTROLLER

inherit
	DEMO_HEADER_JSON_HELPER

create
	make


feature {NONE} -- Creation

	make (a_dao: CRUD_TASK)
		do
			my_crud_task := a_dao
		end


feature {NONE} -- Private attributes

	my_crud_task: CRUD_TASK

feature -- Handlers

	create_task (req: WSF_REQUEST; res: WSF_RESPONSE)
		-- adds a new task
		local
			l_payload, l_title, l_description, l_status, l_priority, l_deadline, l_estimation, l_id_user_creator, l_id_user_assigned, l_id_project: STRING
			result_add_task : TUPLE[BOOLEAN,INTEGER]
			was_created : BOOLEAN
			task_id : INTEGER
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_title.make_empty
			create l_deadline.make_empty
			create l_description.make_empty
			create l_estimation.make_empty
			create l_id_project.make_empty
			create l_id_user_assigned.make_empty
			create l_id_user_creator.make_empty
			create l_priority.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("title") as s then
					l_title := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("description") as s then
					l_description := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("status") as s then
					l_status := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("priority") as s then
					l_priority := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("deadline") as s then
					l_deadline := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("estimation") as s then
					l_estimation := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("id_user_creator") as s then
					l_id_user_creator := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("id_user_assigned") as s then
					l_id_user_assigned := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("id_project") as s then
					l_id_project := s.unescaped_string_8
				end

			end
			create l_result.make
				-- create the user in the database
			result_add_task := my_crud_task.add_task (l_title, l_description, l_status, l_priority, l_deadline, l_estimation, l_id_user_creator.to_natural, l_id_user_assigned.to_natural, l_id_project.to_natural)
			was_created := result_add_task.boolean_item (1)
			task_id := result_add_task.integer_32_item (2)
			if was_created then
				--if the task was created,set the response
				l_result.put (create {JSON_STRING}.make_json (task_id.out), create {JSON_STRING}.make_json ("id"))
				set_json_header (res, 201, l_result.representation.count)
			end

			res.put_string (l_result.representation)
		end

		get_task_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)
		-- returns a json object with the task from a specific Id
			local
				l_task_id, l_result_payload: STRING
			do
					-- extract the task_id from the url path of the request
				l_task_id := req.path_parameter ("id").string_representation

					-- fetch data from to the database
				l_result_payload := my_crud_task.task_by_id (l_task_id.to_natural).representation

					-- set the response
				set_json_header_ok (res, l_result_payload.count)
				res.put_string (l_result_payload)
			end

	update_task (req: WSF_REQUEST; res: WSF_RESPONSE)

	local
		l_payload, l_title, l_description, l_status, l_priority, l_deadline, l_estimation, l_id_user_assigned, l_task_id, l_id_user_creator, l_id_project: STRING
		parser: JSON_PARSER
		l_result: JSON_OBJECT
	do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_title.make_empty
			create l_deadline.make_empty
			create l_description.make_empty
			create l_estimation.make_empty
			create l_status.make_empty
			create l_id_user_assigned.make_empty
			create l_priority.make_empty
			create l_id_user_creator.make_empty
			create l_id_project.make_empty
			create l_task_id.make_empty
			-- read the payload from the request and store it in the string
							req.read_input_data_into (l_payload)

								-- now parse the json object that we got as part of the payload
							create parser.make_parser (l_payload)

								-- if the parsing was successful and we have a json object, we fetch the properties
								-- for the task info
							if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
								-- we have to convert the json string into an eiffel string
											if attached {JSON_STRING} j_object.item ("id") as s then
												l_task_id := s.unescaped_string_8
											end
											if attached {JSON_STRING} j_object.item ("title") as s then
												l_title := s.unescaped_string_8
											end
											if attached {JSON_STRING} j_object.item ("description") as s then
												l_description := s.unescaped_string_8
											end
											if attached {JSON_STRING} j_object.item ("status") as s then
												l_status := s.unescaped_string_8
											end
											if attached {JSON_STRING} j_object.item ("priority") as s then
												l_priority := s.unescaped_string_8
											end
											if attached {JSON_STRING} j_object.item ("deadline") as s then
												l_deadline := s.unescaped_string_8
											end
											if attached {JSON_STRING} j_object.item ("estimation") as s then
												l_estimation := s.unescaped_string_8
											end
											if attached {JSON_STRING} j_object.item ("id_user_assigned") as s then
												l_id_user_assigned := s.unescaped_string_8
											end

		create l_result.make
		if my_crud_task.update_task_deadline (l_deadline, l_task_id.to_natural) And
			my_crud_task.update_task_description (l_description, l_task_id.to_natural) And
			my_crud_task.update_task_estimation (l_estimation, l_task_id.to_natural) And
			my_crud_task.update_task_id_user_assigned (l_id_user_assigned.to_natural, l_task_id.to_natural) And
			my_crud_task.update_task_priority (l_priority, l_task_id.to_natural) And
			my_crud_task.update_task_status (l_status, l_task_id.to_natural) And
			my_crud_task.update_task_title (l_title, l_task_id.to_natural) then
			--if the task was updated,set the response
			l_result := my_crud_task.task_by_id (l_task_id.to_natural)
			set_json_header_ok (res, l_result.representation.count)

		end
		res.put_string (l_result.representation)

		end


	end

	delete_task_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_id: STRING
			l_result: JSON_OBJECT

		do
			-- create emtpy string objects
			create l_id.make_empty
			l_id := req.path_parameter ("id").string_representation
			create l_result.make
			if my_crud_task.remove_task_by_id (l_id.to_natural) then
			--if the task was removed,set the response
			set_json_header (res, 204, l_result.representation.count)

			end
			res.put_string (l_result.representation)
		end

	get_tasks_of_the_user (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_user_id, l_result_payload: STRING

		do
			-- extract the user_id from the url path of the request
				l_user_id := req.path_parameter ("id").string_representation
			-- fetch data from to the database
				l_result_payload := my_crud_task.tasks_of_the_user (l_user_id.to_natural).representation
			-- set the response
					set_json_header_ok (res, l_result_payload.count)
					res.put_string (l_result_payload)
		end

	get_task_by_id_project(req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_project_id, l_result_payload: STRING

		do
			-- extract the project_id from the url path of the request
				l_project_id := req.path_parameter ("id").string_representation
			-- fetch data from to the database
				l_result_payload := my_crud_task.task_by_id_project (l_project_id.to_natural).representation
			-- set the response
					set_json_header_ok (res, l_result_payload.count)
					res.put_string (l_result_payload)
		end
end
