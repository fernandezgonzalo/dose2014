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
		--sends a response which contains a json object with the information about a work_item; the work_item_id, the iteration number and the project name are expected to be
		--part of the request payload
		local
				l_payload: STRING
				l_id: INTEGER
				l_result_payload: JSON_OBJECT
				parser: JSON_PARSER
		do
			-- create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_id.default_create
			-- create json object that we send back as in response
			create l_result_payload.make
			-- read the payload from the request and store it in the string
			req.read_input_data_into(l_payload)
			-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- if the parsing was successful and we have a json object, we fetch the properties
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
			-- we have to convert the json string into an eiffel string
				if attached {JSON_NUMBER} j_object.item ("id") as s then
					l_id:= s.integer_type
				end
			end
			print(l_id)
			if my_db.work_item_exists (l_id) then
				-- Get from the database all the work_items which are associated with the given iteration which is into the given project
				l_result_payload := my_db.work_item_info(l_id)
				-- Everything ok	
				set_json_header_ok (res, l_result_payload.representation.count)
			else
				l_result_payload.put(create {JSON_STRING}.make_json ("ERROR: The work_item '" + l_id.out + "'  doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			end
			-- add the message to the respons
			res.put_string (l_result_payload.representation)
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
			if l_name.is_empty or l_name = Void then
				-- The work_item name is empty
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item name is empty."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_name.count > 40  then
				-- The work_item name has more then 40 characters
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item name has more then 40 characters."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_description.is_empty or l_description = Void then
				-- The work_item description is empty
				l_result_payload.put ( create {JSON_STRING}.make_json ("ERROR: The work_item description is empty."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_description.count > 165536 then
				-- The work_item description has more then 165536 characters
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item description has more then 166536 characters."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_points < 0 then
				-- The work_item points is a negative value
				l_result_payload.put ( create {JSON_STRING}.make_json ("ERROR: The work_item points is a negative value."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_iteration (l_iteration,l_project) = False then
				-- The iteration doesn't exist
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given iteration doesn't exist."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_project_name (l_project) = False then
				-- The project doesn't exist
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given project doesn't exist."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_status (l_state) = False then
				-- The
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given status isn't among the possible choices."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_if_mail_already_present (l_owner) = False then
				-- The given user, as regards to the owner field, doesn't exist into the db
				l_result_payload.put(create{JSON_STRING}.make_json ("ERROR: The given user, as regards to the owner, field doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_if_mail_already_present (l_created_by) = False then
				-- The given user, as regards to the creator field, doesn't exist into the db
				l_result_payload.put(create{JSON_STRING}.make_json ("ERROR: The given user, as regards to the creator, field doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				my_db.add_work_item (l_name,l_description,l_points,l_iteration,l_project,l_state,l_created_by,l_owner)
				--Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The work_item '" + l_name + "' was added successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end

			-- add the message to the response
			res.put_string (l_result_payload.representation)
		end


	change_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		--changes an existing work_item; all information about the work_item are expeted to be part of the request payload
		local
			l_payload, l_project,l_state, l_name, l_description, l_created_by, l_owner: STRING
			l_id,l_number, l_points, l_iteration:INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do
			-- create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_id.default_create
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
				if attached {JSON_NUMBER} j_object.item ("id") as s then
					l_id := s.integer_type
				end
				if attached {JSON_NUMBER} j_object.item ("number") as s then
					l_number := s.integer_type
				end
				if attached {JSON_NUMBER} j_object.item ("iteration") as s then  --
					l_iteration := s.integer_type
				end
				if attached {JSON_STRING} j_object.item ("project") as s then
					l_project := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("name") as s then  --
					l_name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("description") as s then
					l_description := s.unescaped_string_8
				end
				if attached {JSON_NUMBER} j_object.item ("points") as s then  --
					l_points := s.integer_type
				end
				if attached {JSON_STRING} j_object.item ("created_by") as s then --
					l_created_by := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("state") as s then --
					l_state := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("owner") as s then --
					l_owner := s.unescaped_string_8
				end
			end

			-- Check if the name is empty
			if l_name.is_empty or l_name = Void then
				--The work_item name is empty
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item name is empty."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_name.count > 40  then
				--The work_item name has more then 40 characters
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item name has more then 40 characters."), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_description.is_empty or l_description = Void then
				--The work_item description is empty
				l_result_payload.put ( create {JSON_STRING}.make_json ("ERROR: The work_item description is empty."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_description.count > 165536 then
				--The work_item description has more then 165536 characters
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item description has more then 166536 characters."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_points < 0 then
				-- The work_item points is a negative value
				l_result_payload.put ( create {JSON_STRING}.make_json ("ERROR: The work_item points is a negative value."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_iteration (l_iteration,l_project) = False then
				--The iteration doesn't exist
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given iteration doesn't exist."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_project_name (l_project) = False then
				--The project doesn't exist
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given project doesn't exist."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_status (l_state) = False then
				--The status isn't valid
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given status isn't in the valid ones"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				my_db.add_work_item (l_name,l_description,l_points,l_iteration,l_project,l_state,l_created_by,l_owner)
				-- Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The work_item '" + l_name + "' was added successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end

			-- add the message to the response
			res.put_string (l_result_payload.representation)
		end


	delete_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		--deletes an existing work_item; work_item_id is expected to be part of the request payload
		local
			l_payload: STRING
			l_id:INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do
			-- create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_id.default_create
			-- create json object that we send back as in response
			create l_result_payload.make
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- if the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- we have to convert the json number into an eiffel integer
				if attached {JSON_NUMBER} j_object.item ("id") as s then
					l_id:= s.integer_type
				end
			end
			-- Check if the given work_item exists into the db
			if my_db.work_item_exists (l_id) = False then
				-- The given work_item doesn't exist
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given work_item doesn't exist."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				my_db.remove_work_item (l_id)
				-- Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The work_item with id'" + l_id.out + "' was removed successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- add the message to the response
			res.put_string (l_result_payload.representation)
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
				-- The project name is empty
				j_obj.put (create {JSON_STRING}.make_json ("ERROR: The project name is empty."), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_project_name (l_project) = False then
				-- The project doesn't exist into the db
				j_obj.put (create {JSON_STRING}.make_json ("ERROR: The project doesn't exist into db."), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			-- Checks the existence of the given iteration
			elseif my_db.check_iteration (l_iteration_num, l_project) = False then
				j_obj.put (create {JSON_STRING}.make_json ("ERROR: The iteration doesn't exist into db."), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Get from the database all the work_items which are associated with the given iteration and project
				l_result_payload := (my_db.iteration_work_items(l_iteration_num, l_project))
				-- Send an appropriate message
				j_obj.put (create {JSON_STRING}.make_json ("SUCCESS: The work_items regading the given iteration are listed."), create {JSON_STRING}.make_json ("success"))
				l_result_payload.extend (j_obj)
				-- Everything ok
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- add the message to the respons
			res.put_string (l_result_payload.representation)
		end


feature --handlers about comments

	add_comment(req: WSF_REQUEST; res: WSF_RESPONSE)
		--adds a new comment; all the information abount it (work_item, content, author) should be not empty and are expected to be part of the
		--request payload
		local
			l_payload, l_content, l_author: STRING
			l_work_item:INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do
			-- create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_content.make_empty
			create l_author.make_empty
			create l_work_item.default_create
			-- create json object that we send back as in response
			create l_result_payload.make
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- if the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- we have to convert the json string into an eiffel string
				if attached {JSON_NUMBER} j_object.item ("work_item") as s then
					l_work_item := s.integer_type
				end
				if attached {JSON_STRING} j_object.item ("content") as s then
					l_content := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("author") as s then
					l_author := s.unescaped_string_8
				end
			end
			-- Checks if the work_item exists
			if my_db.work_item_exists(l_work_item) = False then
				-- The comment is refered to work_item which doesn't exist into the db
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			-- Checks the correctness of content
			elseif l_content = VOID OR l_content.is_empty then
				-- The comment hasn't text
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The comment hasn't text."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			-- Cecks if the author exists into the db
			elseif my_db.check_if_mail_already_present (l_author) then
				-- The author doesn't exist into the db
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The user doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				--Everything is correct, therefore adds the new comment
				my_db.add_comment (l_work_item, l_content, l_author)
				-- Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The comment was added successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- add the message to the response
			res.put_string (l_result_payload.representation)
		end

	get_all_work_item_comments(req: WSF_REQUEST; res: WSF_RESPONSE)
		 --sends a response which contains a json array with all comments about a certain work_item; the work_item ID is expected to be part of the request payload
		local
			l_payload: STRING
			l_work_item: INTEGER
			j_obj: JSON_OBJECT
			l_result_payload: JSON_ARRAY
			parser: JSON_PARSER
		do
			-- create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_work_item.default_create
			-- create json object that we send back as in response
			create l_result_payload.make_array
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- if the parsing was successful and we have a json object, we fetch the properties
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- we have to convert the json number into an eiffel integer
				if attached {JSON_NUMBER} j_object.item ("work_item") as s then
					l_work_item := s.integer_type
				end
			end
			-- Checks if the given work_item_id exists into the db
			if my_db.work_item_exists (l_work_item) = False then
				-- The work_item doesn't exist
				j_obj.put (create {JSON_STRING}.make_json ("ERROR: The work_item doesn't exist."), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Gets from the database all the comments which are associated with the given id
				l_result_payload := (my_db.work_item_comments (l_work_item))
				-- Adds a proper message
				j_obj.put (create {JSON_STRING}.make_json ("SUCCESS: The comments regading the given work_item are listed."), create {JSON_STRING}.make_json ("success"))
				l_result_payload.extend (j_obj)
				-- Everything ok
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- add the message to the respons
			res.put_string (l_result_payload.representation)
		end


feature -- handlers about links

	add_link(req: WSF_REQUEST; res: WSF_RESPONSE)
		--adds a new link between two work_items; both id are expected to be part of the request payload
		local
			l_payload: STRING
			l_work_item1, l_work_item2:INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do
			-- create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_work_item1.default_create
			create l_work_item2.default_create
			-- create json object that we send back as in response
			create l_result_payload.make
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- if the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- we have to convert the json string into an eiffel string
				if attached {JSON_NUMBER} j_object.item ("work_item1") as s then
					l_work_item1 := s.integer_type
				end
				if attached {JSON_NUMBER} j_object.item ("work_item2") as s then
					l_work_item2 := s.integer_type
				end
			end
			--Checks the existence of the given work_items
			if my_db.work_item_exists(l_work_item1) = False AND my_db.work_item_exists(l_work_item2) = True then
				-- The work_item1 doesn't exist into the db
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item1 '" + l_work_item1.out + "'  doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.work_item_exists(l_work_item1) = True AND my_db.work_item_exists(l_work_item2) = False then
				-- The work_item2 doesn't exist into the db
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item2 '" + l_work_item2.out + "'  doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.work_item_exists(l_work_item1) = False AND my_db.work_item_exists(l_work_item2) = False then
				-- Both work_item and work_item2 don't exist
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: Both work_items '" + l_work_item1.out + "' and '" + l_work_item2.out + "' don't exist."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				--Everything is correct, therefore adds the new link
				my_db.add_link (l_work_item1, l_work_item2)
				-- Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The comment was added successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- add the message to the response
			res.put_string (l_result_payload.representation)
		end

	remove_link(req: WSF_REQUEST; res: WSF_RESPONSE)
		--removes an existing link;  both id are expected to be part of the request payload
		local
			l_payload: STRING
			l_work_item1, l_work_item2:INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do
			-- create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_work_item1.default_create
			create l_work_item2.default_create
			-- create json object that we send back as in response
			create l_result_payload.make
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- if the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- we have to convert the json number into an eiffel integer
				if attached {JSON_NUMBER} j_object.item ("work_item1") as s then
					l_work_item1:= s.integer_type
				end
				if attached {JSON_NUMBER} j_object.item ("work_item2") as s then
					l_work_item2:= s.integer_type
				end
			end
			--Checks the existence of the given work_items
			if my_db.work_item_exists(l_work_item1) = False AND my_db.work_item_exists(l_work_item2) = True then
				-- The work_item1 doesn't exist into the db
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item1 '" + l_work_item1.out + "'  doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.work_item_exists(l_work_item1) = True AND my_db.work_item_exists(l_work_item2) = False then
				-- The work_item2 doesn't exist into the db
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item2 '" + l_work_item2.out + "'  doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.work_item_exists(l_work_item1) = False AND my_db.work_item_exists(l_work_item2) = False then
				-- Both work_item and work_item2 don't exist
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: Both work_items '" + l_work_item1.out + "' and '" + l_work_item2.out + "' don't exist."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				--Everything is correct, therefore removes the new link
				my_db.remove_link (l_work_item1, l_work_item2)
				-- Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The link was deleted successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- add the message to the response
			res.put_string (l_result_payload.representation)
		end


	get_all_work_item_links(req: WSF_REQUEST; res: WSF_RESPONSE)
		--send a response which contains a json array with all links about a certain work_item; the work_item is expected to be part of the request payload
		local
			l_payload: STRING
			l_work_item: INTEGER
			j_obj: JSON_OBJECT
			l_result_payload: JSON_ARRAY
			parser: JSON_PARSER
		do
			-- create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_work_item.default_create
			-- create json object that we send back as in response
			create l_result_payload.make_array
			-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- if the parsing was successful and we have a json object, we fetch the properties
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- we have to convert the json number into an eiffel integer
				if attached {JSON_NUMBER} j_object.item ("work_item") as s then
					l_work_item := s.integer_type
				end
			end
			-- Checks if the given work_item_id exists into the db
			if my_db.work_item_exists(l_work_item) = False then
				-- The work_item1 doesn't exist into the db
				j_obj.put(create {JSON_STRING}.make_json ("ERROR: The work_item '" + l_work_item.out + "'  doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Gets from the database all the links which are associated with the given work_item
				l_result_payload := (my_db.work_item_links (l_work_item))
				-- Adds a proper message
				j_obj.put (create {JSON_STRING}.make_json ("SUCCESS: The links regading the given work_item are listed."), create {JSON_STRING}.make_json ("success"))
				l_result_payload.extend (j_obj)
				-- Everything ok
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- add the message to the respons
			res.put_string (l_result_payload.representation)
		end


end
