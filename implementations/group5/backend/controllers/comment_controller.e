note
	description: "Handlers for everything that concerns comments."
	author: "Heredia Joaquin"
	date: "20/11/2014"
	revision: "0.01"

class
	COMMENT_CONTROLLER

inherit
	DEMO_HEADER_JSON_HELPER

create
	make


feature {NONE} -- Creation

	make (a_dao: CRUD_COMMENT)
		do
			my_crud_comment := a_dao
		end


feature {NONE} -- Private attributes

	my_crud_comment : CRUD_COMMENT


feature -- Handlers

	get_comment_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_id: STRING
			l_result: JSON_OBJECT

		do
			-- create emtpy string objects
			create l_id.make_empty

			l_id := req.path_parameter ("comment_id").string_representation
			l_result := my_crud_comment.comment_by_id (l_id.to_natural)

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)

		end

		--returns json array with the coments for a task
	get_comment_by_task_id(req: WSF_REQUEST; res: WSF_RESPONSE)

	local
		l_task_id, l_result_payload: STRING
	do
		-- create emtpy string objects
		create l_task_id.make_empty

		l_task_id := req.path_parameter ("id").string_representation
		l_result_payload := my_crud_comment.comment_by_id_task (l_task_id.to_natural).representation

		set_json_header_ok (res, l_result_payload.count)
		res.put_string (l_result_payload)

	end

	create_comment (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_payload, l_comment, l_user_id, l_task_id: STRING
			was_created : BOOLEAN
			comment_id : INTEGER
			result_add_comment : TUPLE[BOOLEAN,INTEGER]
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
			-- create emtpy string objects
			create l_comment.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the comment, the task and the user
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("comment") as s then
					l_comment := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("id_user") as s then
					l_user_id := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("id_task") as s then
					l_task_id := s.unescaped_string_8
				end
			end
			create l_result.make
				-- create the comment in the database
			result_add_comment := my_crud_comment.add_comment (l_comment, l_task_id.to_natural, l_user_id.to_natural)
			was_created := result_add_comment.boolean_item (1)
			comment_id := result_add_comment.integer_32_item (2)
			if was_created then
			--if the comment was created,set the response
			l_result.put (create {JSON_STRING}.make_json (comment_id.out), create {JSON_STRING}.make_json ("id"))
			set_json_header (res, 201, l_result.representation.count)
			end

			res.put_string (l_result.representation)
		end

	delete_comment_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_id: STRING
			l_result: JSON_OBJECT

		do
			-- create emtpy string objects
			create l_id.make_empty
			l_id := req.path_parameter ("comment_id").string_representation
			create l_result.make
			if my_crud_comment.remove_project_by_id (l_id.to_natural) then
			--if the comment was removed,set the response
			set_json_header (res, 204, l_result.representation.count)

			end
			res.put_string (l_result.representation)
		end

		update_comment (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_payload, l_commentary, l_user_id, l_task_id, l_id : STRING
			parser : JSON_PARSER
			l_result : JSON_OBJECT

		do
			--create empty string objects
			create l_payload.make_empty
			create l_commentary.make_empty
			create l_user_id.make_empty
			create l_task_id.make_empty
			create l_id.make_empty

			--reads the comment id from the path
			l_id := req.path_parameter ("comment_id").string_representation

			--read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

			--now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

			--if the parsing was successful and we have a json object we fetch
			--the properties for the comment info

			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
			--we have to convert the json string into a eiffel string
				if attached {JSON_STRING} j_object.item ("commentary") as s then
					l_commentary := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("id_user") as s then
					l_user_id := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("id_task") as s then
					l_task_id := s.unescaped_string_8
				end
			end
			create l_result.make
			if my_crud_comment.update_comment (l_commentary, l_id.to_natural) then
				l_result := my_crud_comment.comment_by_id (l_id.to_natural)
				set_json_header_ok (res, l_result.representation.count)

			end
			res.put_string (l_result.representation)
		end




end
