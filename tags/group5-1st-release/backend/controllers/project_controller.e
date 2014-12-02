note
	description: "Handlers for everything that concerns projects."
	author: "Heredia Joaquin"
	date: "11/13/2014"
	revision: "0.01"

class
	PROJECT_CONTROLLER

inherit
	DEMO_HEADER_JSON_HELPER

create
	make

feature {NONE} -- Creation

	make (a_dao: CRUD_PROJECT)
		do
			my_crud_project := a_dao
		end


feature {NONE} -- Private attributes

	my_crud_project: CRUD_PROJECT

feature -- Handlers

	get_projects (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all users
		local
			l_result_payload: STRING
		do
			l_result_payload := my_crud_project.projects.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	get_project_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a response that contains a json object with a specific project
		local
			l_id: STRING
			l_result: JSON_OBJECT

		do
			-- create emtpy string objects
			create l_id.make_empty

			-- assign the path parameter "id" to the l_id field

			l_id := req.path_parameter ("id").string_representation

			-- transform the string "id" to natural
			l_result := my_crud_project.project_by_id (l_id.to_natural)

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)

		end

--	get_projects_by_user_id(req: WSF_REQUEST; res: WSF_RESPONSE)
			--sends a response that contains a json array with all the projects related to an user
--
--		do
--
--		end

	--Creates a new project
	create_project (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_payload, l_name, l_deadline, l_client, l_user_id: STRING
			was_created : BOOLEAN
			project_id : INTEGER
			result_add_project : TUPLE[BOOLEAN,INTEGER]
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
			-- create emtpy string objects
			create l_payload.make_empty
			create l_name.make_empty
			create l_deadline.make_empty
			create l_client.make_empty
			create l_user_id.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the user info
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("name") as s then
					l_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("deadline") as s then
					l_deadline := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("client_name") as s then
					l_client := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("id_user") as s then
					l_user_id := s.unescaped_string_8
				end
			end
			create l_result.make
				-- create the project in the database
			result_add_project := my_crud_project.add_project (l_name, l_deadline, l_client, l_user_id.to_natural)
			was_created := result_add_project.boolean_item (1)
			project_id := result_add_project.integer_32_item (2)
			if was_created then
			--if the project was created,set the response
				l_result.put (create {JSON_STRING}.make_json (project_id.out), create {JSON_STRING}.make_json ("id"))
				set_json_header (res, 200, l_result.representation.count)
			end

			res.put_string (l_result.representation)
		end



		--Deletes a single project
		delete_project_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_id: STRING
			l_result: JSON_OBJECT

		do
			-- create emtpy string objects
			create l_id.make_empty
			l_id := req.path_parameter ("id").string_representation
			create l_result.make
			if my_crud_project.remove_project_by_id (l_id.to_natural) then
			--if the project was removed,set the response
			set_json_header (res, 204, l_result.representation.count)

			end
			res.put_string (l_result.representation)
		end


		--Updates a project
		update_project (req: WSF_REQUEST; res: WSF_RESPONSE)

			local
			l_id, l_payload, l_name, l_deadline, l_client: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT

		do
			-- create emtpy string objects
			create l_payload.make_empty
			create l_name.make_empty
			create l_deadline.make_empty
			create l_client.make_empty

			l_id := req.path_parameter ("id").string_representation


			-- read the payload from the request and store it in the string
					req.read_input_data_into (l_payload)

						-- now parse the json object that we got as part of the payload
					create parser.make_parser (l_payload)

						-- if the parsing was successful and we have a json object, we fetch the properties
						-- for the todo description and the user info
					if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

							-- we have to convert the json string into an eiffel string
						if attached {JSON_STRING} j_object.item ("name") as s then
							l_name := s.unescaped_string_8
						end
						if attached {JSON_STRING} j_object.item ("deadline") as s then
							l_deadline := s.unescaped_string_8
						end
						if attached {JSON_STRING} j_object.item ("client_name") as s then
							l_client := s.unescaped_string_8
						end

					end



			create l_result.make
			if my_crud_project.update_project_client_name (l_client, l_id.to_natural) and
				my_crud_project.update_project_deadline (l_deadline, l_id.to_natural) and
				my_crud_project.update_project_name (l_name, l_id.to_natural) then
			--if the project was updated,set the response
				l_result := my_crud_project.project_by_id (l_id.to_natural)
				set_json_header_ok (res, l_result.representation.count)

			end
			res.put_string (l_result.representation)
		end

end


