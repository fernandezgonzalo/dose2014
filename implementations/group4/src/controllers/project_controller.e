note
	description: "Handlers for everything that concerns projects."
	author: "$Rio Cuarto4 Team$"
	date: "$2014-11-11$"
	revision: "$0.01$"

class
	PROJECT_CONTROLLER

inherit
	HEADER_JSON_HELPER

create
	make


feature {NONE} -- Creation

	make (a_path_to_db_file: STRING)
		do
			create db_handler_project.make (a_path_to_db_file)
			create db_handler_sprint.make (a_path_to_db_file)
			create db_handler_task.make (a_path_to_db_file)
			create db_handler_user.make (a_path_to_db_file)
		end


feature {NONE} -- Private attributes

	db_handler_project : DB_HANDLER_PROJECT
	db_handler_sprint: DB_HANDLER_SPRINT
	db_handler_task: DB_HANDLER_TASK
	db_handler_user: DB_HANDLER_USER


feature -- Handlers

	get_projects (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all users
		local
			l_result_payload: STRING
		do
			l_result_payload := db_handler_project.find_all.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end


	get_project (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a response that contains a json object with a project with given id
		local
			l_result_payload: STRING
			l_project_id : STRING
		do
			-- the project_id from the URL
			l_project_id := req.path_parameter ("project_id").string_representation

			l_result_payload := db_handler_project.find_by_id (l_project_id.to_integer).representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end


	get_users (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a response that contains a json array with all users of a project
		local
			project_id: STRING
			l_result_payload, other_payload: STRING
			parser: JSON_PARSER
			new_user_id: STRING
			i: INTEGER
		do
			-- obtain the project id via the URL
			project_id := req.path_parameter ("project_id").string_representation

			-- and use the project handler to obtain all its collaborators
			l_result_payload := db_handler_project.find_collabs_user_id_by_id (project_id.to_integer).representation



			-- now parse the json array that we got as part of the l_result_payload
					create parser.make_parser (l_result_payload)


			if attached {JSON_ARRAY} parser.parse as j_array and parser.is_parsed then
				from
					i:=1
					other_payload:=""
				until
					i > j_array.count
				loop
					if attached {JSON_OBJECT} j_array.i_th (i) as j_object then
						if attached {JSON_STRING} j_object.item ("user_id") as user_id then
							new_user_id := user_id.unescaped_string_8
						end
						other_payload.append (db_handler_user.find_by_id (new_user_id.to_natural).representation)
					end
					i:=i+1
				end
			end

			if	other_payload.is_equal ("") then
				other_payload:="{}"
			end

			set_json_header_ok (res, other_payload.count)
			res.put_string (other_payload)
		end


	get_sprints (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a response that contains a json array with all sprints of a project
		local
			project_id: STRING
			l_result_payload: STRING
		do
			-- obtain the project id via the URL
			project_id := req.path_parameter ("project_id").string_representation
			-- and use the sprint handler to obtain all its sprints
			l_result_payload := db_handler_sprint.find_by_project_id (project_id.to_natural).representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	get_tasks (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a response that contains a json array with all tasks of a project
		local
			project_id: STRING
			l_result_payload: STRING
		do
			-- obtain the project id via the URL
			project_id := req.path_parameter ("project_id").string_representation

			-- and use the sprint handler to obtain all its sprints
			l_result_payload := db_handler_task.find_by_project_id (project_id.to_natural).representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end


	add_project (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new project; the project data are expected to be part of the request's payload
		local
			l_payload : STRING
			new_name, new_status, new_description, new_mpps, new_number_of_sprints, new_user_id : STRING
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
				-- for the project description
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string for each project attribute.
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
				if attached {JSON_STRING} j_object.item ("number_of_sprints") as number_of_sprints then
					new_number_of_sprints := number_of_sprints.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_id") as user_id then
					new_user_id := user_id.unescaped_string_8
				end

			end

			create new_project.make (new_name, new_status, new_description, new_mpps.to_integer_32, new_number_of_sprints.to_integer_32, new_user_id.to_integer_32)
				-- create the project in the database
			db_handler_project.add (new_project)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added project " + new_project.name ), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	add_task (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new project; the project data are expected to be part of the request's payload
		local
			l_payload : STRING
			new_id, new_priority, new_position, new_type, new_description, new_title, new_points : STRING
			new_super_task_id, new_sprint_id, new_user_id: STRING
			l_project_id: STRING
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
				-- for the project description
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string for each project attribute.
				if attached {JSON_STRING} j_object.item ("id") as id then
					new_id := id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("priority") as priority then
					new_priority := priority.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("position") as position then
					new_position := position.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("type") as type then
					new_type := type.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("description") as description then
					new_description := description.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("title") as title then
					new_title := title.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("points") as points then
					new_points := points.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("super_task_id") as super_task_id then
					new_super_task_id := super_task_id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("sprint_id") as sprint_id then
					new_sprint_id := sprint_id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_id") as user_id then
					new_user_id := user_id.unescaped_string_8
				end

			end

			-- obtain the project id via the URL
					l_project_id := req.path_parameter ("project_id").string_representation

			create new_task.make (new_sprint_id.to_natural, new_user_id.to_natural, l_project_id.to_natural, new_points.to_natural, new_title, new_description, new_type, new_priority, new_position)

				-- create the task in the database
			db_handler_task.add_super (new_task)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added task " + new_task.super_task_id.out ), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


	add_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new project; the project data are expected to be part of the request's payload
		local
			l_payload : STRING
			new_user_name, new_email, new_password: STRING
			new_user: USER
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
				-- for the project description
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string for each project attribute.
				if attached {JSON_STRING} j_object.item ("user_name") as user_name then
					new_user_name := user_name.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("email") as email then
					new_email := email.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("password") as password then
					new_password := password.unescaped_string_8
				end
			end


			create new_user.make (new_user_name, new_email, new_password)

				-- create the task in the database
			db_handler_user.add (new_user)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added user "), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


	update_project (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- update a project from the database
		local
			l_payload: STRING
			l_project_id: STRING
			project_name, project_status, project_description, project_mpps, project_user_id, project_number_of_sprints : STRING
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
				-- for the project description
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

				-- we have to convert the json string into an eiffel string for each project attribute.
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
				if attached {JSON_STRING} j_object.item ("number_of_sprints") as number_of_sprints then
					project_number_of_sprints := number_of_sprints.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_id") as user_id then
					project_user_id := user_id.unescaped_string_8
				end

			end

				-- create the project
			create project.make (project_name, project_status, project_description, project_mpps.to_integer_32, project_number_of_sprints.to_integer,project_user_id.to_integer_32)

				-- the project_id from the URL (as defined by the placeholder in the route)
			l_project_id := req.path_parameter ("project_id").string_representation

				-- update the project in the database
			db_handler_project.update (l_project_id.to_natural,project)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Updated project "+ project.name), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	remove_project (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- remove a project from the database
		local
			l_project_id: STRING
			l_result: JSON_OBJECT
		do
				-- the project_id from the URL (as defined by the placeholder in the route)
			l_project_id := req.path_parameter ("project_id").string_representation
				-- remove the project
			db_handler_project.remove (l_project_id.to_natural)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


	remove_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- remove a project from the database
		local
			l_user_id, l_project_id: STRING
			l_result: JSON_OBJECT
		do
				-- the user_id from the URL (as defined by the placeholder in the route)
			l_user_id := req.path_parameter ("user_id").string_representation

				-- the user_id from the URL (as defined by the placeholder in the route)
			l_project_id := req.path_parameter ("project_id").string_representation

				-- remove the user
			db_handler_user.remove (l_user_id.to_natural)

				-- remove the collaborator
			db_handler_project.remove_collaborator (l_user_id.to_natural, l_project_id.to_natural)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed items"), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

end
