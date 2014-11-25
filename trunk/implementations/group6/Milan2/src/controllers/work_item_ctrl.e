note
	description: "Summary description for {WORK_ITEM_CTRL}."
	author: "Anna Maria Nestorov - Milan2"
	date: "$Date$"
	revision: "$Revision$"

class
	WORK_ITEM_CTRL

inherit
	DEMO_HEADER_JSON_HELPER

--	DEMO_SESSION_HELPER

create
	make

feature {NONE} --creation

	make(a_dao: DEMO_DB)
		do
			my_db := a_dao;

		end


feature -- Private attributes

	my_db: DEMO_DB

	session_manager: WSF_SESSION_MANAGER


feature --handlers about work_items

	get_work_item_info(req: WSF_REQUEST; res: WSF_RESPONSE)
		--sends a response which contains a json object with the information about a work_item; the work_item_id is expected to be
		--part of the request payload
		do

		end

	create_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		--adds a new work_item; iteration number (can't be empty), project name (can't be empty), name (can't be empty and should be less
		--than 40 characters), description (can't be empty and has less than 165536 characters), created_by (can't be empty)
		--and owner are expected to be part of the request payload
		local
			l_payload, l_project,l_state, l_name, l_description, l_created_by, l_owner: STRING
			l_number, l_points, l_iteration:INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
			right:BOOLEAN
		do
			-- create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_iteration.default_create
			create l_points.default_create
			create l_project.make_empty
			create l_name.make_empty
			create l_description.make_empty
			create l_created_by.make_empty
			create l_owner.make_empty
			create l_state.make_empty
			create l_number.default_create
			-- create json object that we send back as in response
			create l_result_payload.make
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- if the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- we have to convert the json string into an eiffel string
				if attached {JSON_NUMBER} j_object.item ("number") as s then
					l_number := s.integer_type
				end
				if attached {JSON_NUMBER} j_object.item ("iteration") as s then
					l_iteration := s.integer_type
				end
				if attached {JSON_STRING} j_object.item ("project") as s then
					l_project := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("name") as s then
					l_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("description") as s then
					l_description := s.unescaped_string_8
				end
				if attached {JSON_NUMBER} j_object.item ("points") as s then
					l_points := s.integer_type
				end
				if attached {JSON_STRING} j_object.item ("created_by") as s then
					l_created_by := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("state") as s then
					l_state := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("owner") as s then
					l_owner := s.unescaped_string_8
				end
			end

			right:=True
			-- Check if the name is empty
			if l_name.is_empty or l_name = Void then
				--The work_item name is empty
				l_result_payload.put (create {JSON_STRING}.make_json ("Error: The work_item name is empty."), create {JSON_STRING}.make_json ("ERROR"))
				set_json_header (res, 401, l_result_payload.representation.count)
				right:=False
			end
			-- Check the lenght of the name
			if l_name.count > 40  then
				--The work_item name has more then 40 characters
				l_result_payload.put (create {JSON_STRING}.make_json ("Error: The work_item name has more then 40 characters."), create {JSON_STRING}.make_json ("ERROR"))
				set_json_header (res, 401, l_result_payload.representation.count)
				right:=False
			end
			-- Check if the description is empty
			if l_description.is_empty or l_description = Void then
				--The work_item description is empty
				l_result_payload.put ( create {JSON_STRING}.make_json ("Error: The work_item description is empty."), create {JSON_STRING}.make_json ("ERROR"))
				set_json_header (res, 401, l_result_payload.representation.count)
				right:=False
			end
			-- Check the lenght of the description
			if l_description.count > 165536 then
				--The work_item description has more then 165536 characters
				l_result_payload.put (create {JSON_STRING}.make_json ("Error: The work_item description has more then 166536 characters."), create {JSON_STRING}.make_json ("ERROR"))
				set_json_header (res, 401, l_result_payload.representation.count)
				right:=False
			end
			-- Check if the points is a negative value
			if l_points < 0 then
				-- The work_item points is a negative value
				l_result_payload.put ( create {JSON_STRING}.make_json ("Error: The work_item points is a negative value."), create {JSON_STRING}.make_json ("ERROR"))
				set_json_header (res, 401, l_result_payload.representation.count)
				right:=False
			end
			-- Check if the iteration exists
			if my_db.iteration_exists (l_iteration,l_project) = False then
				--The iteration doesn't exist
				l_result_payload.put (create {JSON_STRING}.make_json ("Error: The given iteration doesn't exist."), create {JSON_STRING}.make_json ("ERROR"))
				set_json_header (res, 401, l_result_payload.representation.count)
				right:=False
			end
			-- Check if the project exists
			if my_db.project_exists (l_project) = False then
				--The project doesn't exist
				l_result_payload.put (create {JSON_STRING}.make_json ("Error: The given project doesn't exist."), create {JSON_STRING}.make_json ("ERROR"))
				set_json_header (res, 401, l_result_payload.representation.count)
				right:=False
			end
			--Every parameter is ok
			if right then
				my_db.add_work_item (l_name,l_description,l_points,l_iteration,l_project,l_state,l_created_by,l_owner)
				-- Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("Success: The work_item '" + l_name + "' was added successfully."), create {JSON_STRING}.make_json ("SUCCESS"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end

			-- add the message to the response
			res.put_string (l_result_payload.representation)
		end


	delete_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		--deletes an existing work_item; work_item_id is expected to be part of the request payload
		do

		end

	update_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		--updates an existing work_item; all the information about it (number, iteration, project, name (can't be empty and
		--has less than 40 characters), description (can't be empty and has less than 165536 characters), points (can't be empty), created_by,
		--owner) is expected to be part of the request payload
		do

		end

	get_all_iteration_work_items(req: WSF_REQUEST; res: WSF_RESPONSE)
		--gets all the work items related to an iteration; project's name and iteration's number are expected to be
		--part of the request paylod

		local
			l_payload, l_project: STRING
			l_iteration_num: INTEGER
			j_obj: JSON_OBJECT
			l_result_payload: JSON_ARRAY
			parser: JSON_PARSER
		do

			-- create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_iteration_num.default_create
			-- create json object that we send back as in response
			create l_result_payload.make_array
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

			-- if the parsing was successful and we have a json object, we fetch the properties
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("project") as s then
					l_project := s.unescaped_string_8
				end
				-- we have to convert the json number into an eiffel integer
				if attached {JSON_NUMBER} j_object.item ("iteration") as s then
					l_iteration_num:= s.integer_type
				end
			end
			if l_project.is_empty or l_project = Void then
				--Error project name is empty
				j_obj.put (create {JSON_STRING}.make_json ("Error: Project name is empty."), create {JSON_STRING}.make_json ("ERROR"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Get from the database all the work_items which are associated with the given iteration which is into the given project
				l_result_payload := (my_db.iteration_work_items(l_iteration_num, l_project))
				-- Everything ok
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- add the message to the respons
			res.put_string (l_result_payload.representation)
		end


feature --handlers about comments

	add_comment(req: WSF_REQUEST; res: WSF_RESPONSE)
		--adds a new comment; all the information abount it (date, work_item, content, author) should be not empty and are expected to be part of the
		--request payload
		do

		end

	get_all_work_item_comments(req: WSF_REQUEST; res: WSF_RESPONSE)
		 --sends a response which contains a json array with all comments about a certain work_item; the work_item ID is expected to be part of the request payload
		 do

		 end


feature -- handlers about links

	add_link(req: WSF_REQUEST; res: WSF_RESPONSE)
		--adds a new link between two work_items; both id are expected to be part of the request payload
		do

		end

	remove_link(req: WSF_REQUEST; res: WSF_RESPONSE)
		--removes an existing link;  both id are expected to be part of the request payload
		do

		end

	get_all_work_item_links(req: WSF_REQUEST; res: WSF_RESPONSE)
		--send a response which contains a json array with all links about a certain work_item; the work_item is expected to be part of the request payload
		do

		end

end
