note
	description: "Summary description for {WORK_ITEM_CTRL}."
	author: "Anna Maria Nestorov - Milan2"
	date: "$Date$"
	revision: "$Revision$"

class
	WORK_ITEM_CTRL

inherit
	DEMO_HEADER_JSON_HELPER

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

	--OK
	get_work_item_info(req: WSF_REQUEST; res: WSF_RESPONSE)
		--Sends a response which contains a json object with the information about a work_item; the work_item_id, the iteration number and the project name are expected to be
		--Part of the request payload
		local
				l_id: STRING
				l_result_payload: JSON_OBJECT
		do
			-- Create l_id empty
			create l_id.make_empty
			-- Create json object that we send back as in response
			create l_result_payload.make
			-- The the work_item_id from the URL (as defined by the placeholder in the route)
			l_id:= req.query_parameter ("work_item_id").string_representation
			if my_db.work_item_exists (l_id.to_integer) then
				-- Get from the database all the work_items which are associated with the given iteration which is into the given project
				l_result_payload := my_db.work_item_info(l_id.to_integer)
				l_result_payload.put(create {JSON_STRING}.make_json ("SUCCESS: The fields of the work_item '" + l_id + "' are listed above."),create {JSON_STRING}.make_json ("success"))
				-- Everything ok	
				set_json_header_ok (res, l_result_payload.representation.count)
			else
				l_result_payload.put(create {JSON_STRING}.make_json ("ERROR: The work_item '" + l_id + "' doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			end
			-- Add the message to the respons
			res.put_string (l_result_payload.representation)
		end

	--OK
	create_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		-- Adds a new work_item; iteration number (can't be empty), project name (can't be empty), name (can't be empty and should be less
		--than 40 characters), description (can't be empty and has less than 165536 characters), created_by (can't be empty)
		--and owner are expected to be part of the request payload
		local
			l_payload, l_project,l_state, l_name, l_description, l_created_by, l_owner: STRING
			l_number, l_points, l_iteration:INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do
			-- Create string objects to read-in the payload that comes with the request
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
			-- Create json object that we send back as in response
			create l_result_payload.make
			-- Read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- Now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- We have to convert the json string into an eiffel string
				if attached {JSON_NUMBER} j_object.item ("number") as s then
					l_number := s.item.to_integer
				end
				if attached {JSON_NUMBER} j_object.item ("nb_iteration") as s then
					l_iteration := s.item.to_integer
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
					l_points := s.item.to_integer
				end
				if attached {JSON_STRING} j_object.item ("created_by") as s then
					l_created_by := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("status") as s then
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
			elseif l_points < 0 OR l_points >100 then
				-- The work_item points is a negative value or are greater than 100
				l_result_payload.put ( create {JSON_STRING}.make_json ("ERROR: The work_item points aren't in the valid range [0-100]."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_iteration (l_iteration,l_project) = False then
				-- The iteration doesn't exist
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given iteration doesn't exist."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_status (l_state) = False then
				-- The status isn't correct
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given status isn't among the possible choices."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_owner.same_string ("System") = True then
				-- System can't be the new owner
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: System can't be the owner."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_created_by.same_string ("System") = True then
				-- System can't be the new owner
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: System can't be the owner."), create {JSON_STRING}.make_json ("error"))
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
				-- Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The work_item '" + l_name + "' was added successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end

			-- Add the message to the response
			res.put_string (l_result_payload.representation)
		end

	--OK
	change_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		-- Changes an existing work_item; all information about the work_item are expeted to be part of the request payload
		local
			l_payload, l_state, l_name, l_description, l_owner, l_id, l_project: STRING
			l_points, l_iteration:INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
			old_name: STRING
		do
			-- Create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_id.make_empty
			create l_iteration.default_create
			create l_points.default_create
			create l_project.make_empty
			create l_name.make_empty
			create l_description.make_empty
			create l_owner.make_empty
			create l_state.make_empty
			-- Create json object that we send back as in response
			create l_result_payload.make
			-- The the work_item_id from the URL (as defined by the placeholder in the route)
			l_id:= req.query_parameter("work_item_id").string_representation
			-- Read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- Now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- We have to convert the json string into an eiffel string
				if attached {JSON_NUMBER} j_object.item ("nb_iteration") as s then  --
					l_iteration := s.item.to_integer
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
					l_points := s.item.to_integer
				end
				if attached {JSON_STRING} j_object.item ("status") as s then --
					l_state := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("owner") as s then --
					l_owner := s.unescaped_string_8
				end
			end
			-- Check if the name is empty
			if l_name.is_empty or l_name = Void then
				-- The work_item name is empty
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item name is empty."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_name.count > 40  then
				-- The work_item name has more then 40 characters
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item name has more then 40 characters."), create {JSON_STRING}.make_json ("Error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_description.is_empty or l_description = Void then
				-- The work_item description is empty
				l_result_payload.put ( create {JSON_STRING}.make_json ("ERROR: The work_item description is empty."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_description.count > 165536 then
				-- The work_item description has more then 165536 characters
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item description has more then 166536 characters."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_points < 0 OR l_points >100 then
				-- The work_item points is a negative value or are greater than 100
				l_result_payload.put ( create {JSON_STRING}.make_json ("ERROR: The work_item points aren't in the valid range [0-100]."), create {JSON_STRING}.make_json ("error"))
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
				-- The status isn't valid
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given status isn't in the valid ones"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif l_owner.same_string ("System") = True then
				-- System can't be the new owner
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: System can't be the new owner."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_if_mail_already_present (l_owner) = False then
				-- The owner isn't into the db
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given owner doesn't exist into the db"), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				old_name:=my_db.modify_work_item(l_id.to_integer,l_iteration,l_project,l_name,l_points,l_state,l_owner,l_description)
				-- Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The work_item '" + old_name + "' was modified successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- Add the message to the response
			res.put_string (l_result_payload.representation)
		end

	--OK
	delete_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		-- Deletes an existing work_item; work_item_id is expected to be part of the request payload
		local
			l_id: STRING
			l_result_payload: JSON_OBJECT
		do
			-- Create l_id like empty
			create l_id.make_empty
			-- Create json object that we send back as in response
			create l_result_payload.make
			-- The the work_item_id from the URL (as defined by the placeholder in the route)
			l_id:= req.query_parameter ("work_item_id").string_representation
			-- Check if the given work_item exists into the db
			if my_db.work_item_exists (l_id.to_integer) = False then
				-- The given work_item doesn't exist
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given work_item doesn't exist."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Update the numbers of the work_item which have a greater number
				my_db.update_number (l_id.to_integer)
				-- Remove all links regardin this work_item
				my_db.remove_all_work_item_links (l_id.to_integer)
				-- Remove all comments regardin this work_item
				my_db.remove_all_work_item_comments (l_id.to_integer)
				-- Remore the given work_item
				my_db.remove_work_item (l_id.to_integer)
				-- Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The work_item with id'" + l_id + "' was removed successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- Add the message to the response
			res.put_string (l_result_payload.representation)
		end

	get_all_iteration_work_items(req: WSF_REQUEST; res: WSF_RESPONSE)
		-- Gets all the work items related to an iteration; project's name and iteration's number are expected to be part of the request paylod
		local
			l_project,l_iteration_num: STRING
			j_obj: JSON_OBJECT
			l_result_payload: JSON_ARRAY
		do
			create l_iteration_num.make_empty
			create j_obj.make
			create l_project.make_empty
			-- Create json object that we send back as in response
			create l_result_payload.make_array
			l_project:= req.query_parameter ("project").string_representation
			l_iteration_num:=req.query_parameter ("number").string_representation
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
			elseif my_db.check_iteration (l_iteration_num.to_integer, l_project) = False then
				-- The given iteration doesn't exist into th db
				j_obj.put (create {JSON_STRING}.make_json ("ERROR: The iteration doesn't exist into db."), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Get from the database all the work_items which are associated with the given iteration and project
				l_result_payload := (my_db.iteration_work_items(l_iteration_num.to_integer, l_project))
				j_obj.put (create {JSON_STRING}.make_json ("SUCCESS: The work_items of iteration '" + l_iteration_num + "' into project '" + l_project + "' are listed above."), create {JSON_STRING}.make_json ("sucess"))
				l_result_payload.extend (j_obj)
				-- Everything ok
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- Add the message to the respons
			res.put_string (l_result_payload.representation)
		end








feature --handlers about comments

	-- OK
	add_comment(req: WSF_REQUEST; res: WSF_RESPONSE)
		-- Adds a new comment; all the information abount it (work_item, content, author) should be not empty and are expected to be part of the request payload
		local
			l_payload, l_content, l_author,l_work_item: STRING
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do
			-- Create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_content.make_empty
			create l_author.make_empty
			create l_work_item.make_empty
			l_work_item:= req.query_parameter("work_item_id").string_representation
			-- Create json object that we send back as in response
			create l_result_payload.make
			-- Read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- Now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- We have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("content") as s then
					l_content := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("author") as s then
					l_author := s.unescaped_string_8
				end
			end
			-- Checks if the work_item exists
			if my_db.work_item_exists(l_work_item.to_integer) = False then
				-- The comment is refered to work_item which doesn't exist into the db
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			-- Checks the correctness of content
			elseif l_content = VOID OR l_content.is_empty then
				-- The comment hasn't text
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The comment hasn't text."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			-- Checks if the author exists into the db
			elseif l_author.same_string ("System") = True then
				--System can't be the new owner
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: System can't be an author."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.check_if_mail_already_present (l_author) = False then
				-- The author doesn't exist into the db
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The user doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Everything is correct, therefore adds the new comment
				my_db.add_comment (l_work_item.to_integer, l_content, l_author)
				-- Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The comment was added successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- Add the message to the response
			res.put_string (l_result_payload.representation)
		end

	-- OK
	get_all_work_item_comments(req: WSF_REQUEST; res: WSF_RESPONSE)
		 -- Sends a response which contains a json array with all comments about a certain work_item; the work_item ID is expected to be part of the request payload
		local
			l_work_item: STRING
			j_obj: JSON_OBJECT
			l_result_payload: JSON_ARRAY
		do
			create l_work_item.make_empty
			create j_obj.make
			-- Create json object that we send back as in response
			create l_result_payload.make_array
			l_work_item:= req.query_parameter ("work_item_id").string_representation
			-- Checks if the given work_item_id exists into the db
			if my_db.work_item_exists (l_work_item.to_integer) = False then
				-- The work_item doesn't exist
				j_obj.put (create {JSON_STRING}.make_json ("error"), create {JSON_STRING}.make_json ("ERROR: The work_item doesn't exist."))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Gets from the database all the comments which are associated with the given id
				l_result_payload := (my_db.work_item_comments (l_work_item.to_integer))
				j_obj.put (create {JSON_STRING}.make_json ("success"), create {JSON_STRING}.make_json ("SUCCESS: The comments of the given work_item are listed above."))
				l_result_payload.extend (j_obj)
				-- Everything ok
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- Add the message to the respons
			res.put_string (l_result_payload.representation)
		end


feature -- handlers about links

	add_link(req: WSF_REQUEST; res: WSF_RESPONSE)
		-- Adds a new link between two work_items; both id are expected to be part of the request payload
		local
			l_work_item1, l_work_item2:STRING
			l_result_payload: JSON_OBJECT
		do
			-- Create json object that we send back as in response
			create l_result_payload.make
			l_work_item1:= req.query_parameter("work_item1").string_representation
			l_work_item2:= req.query_parameter("work_item2").string_representation
			-- Checks the existence of the given work_items
			if my_db.work_item_exists(l_work_item1.to_integer) = False AND my_db.work_item_exists(l_work_item2.to_integer) = True then
				-- The work_item1 doesn't exist into the db
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item1 '" + l_work_item1 + "'  doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.work_item_exists(l_work_item1.to_integer) = True AND my_db.work_item_exists(l_work_item2.to_integer) = False then
				-- The work_item2 doesn't exist into the db
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item2 '" + l_work_item2 + "'  doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			elseif my_db.work_item_exists(l_work_item1.to_integer) = False AND my_db.work_item_exists(l_work_item2.to_integer) = False then
				-- Both work_item and work_item2 don't exist
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: Both work_items '" + l_work_item1 + "' and '" + l_work_item2 + "' don't exist."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Everything is correct, therefore adds the new link
				my_db.add_link (l_work_item1.to_integer, l_work_item2.to_integer)
				-- Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The link was added successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- Add the message to the response
			res.put_string (l_result_payload.representation)
		end

	--OK
	remove_link(req: WSF_REQUEST; res: WSF_RESPONSE)
		-- Removes an existing link;  both id are expected to be part of the request payload
		local
			l_payload: STRING
			l_work_item1, l_work_item2:INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do
			-- Create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_work_item1.default_create
			create l_work_item2.default_create
			-- Create json object that we send back as in response
			create l_result_payload.make
			-- Read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- Now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- We have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("work_item1") as s then
					l_work_item1 := s.item.to_integer
				end
				if attached {JSON_STRING} j_object.item ("work_item2") as s then
					l_work_item2 := s.item.to_integer
				end
			end
			-- Checks the existence of the given work_items
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
			elseif my_db.link_exist (l_work_item1, l_work_item2) = False then
				-- The given link doesn't exist into the db
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The link between '" + l_work_item1.out + "' and '" + l_work_item2.out + "' don't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Everything is correct, therefore removes the new link
				my_db.remove_link (l_work_item1, l_work_item2)
				-- Send an appropriate message
				l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The link was deleted successfully."), create {JSON_STRING}.make_json ("success"))
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- Add the message to the response
			res.put_string (l_result_payload.representation)
		end

	--OK
	get_all_work_item_links(req: WSF_REQUEST; res: WSF_RESPONSE)
		-- Send a response which contains a json array with all links about a certain work_item; the work_item is expected to be part of the request payload
		local
			l_work_item: STRING
			j_obj: JSON_OBJECT
			l_result_payload: JSON_ARRAY
		do
			create l_work_item.make_empty
			-- Create json object that we send back as in response
			create l_result_payload.make_array
			l_work_item:= req.query_parameter("work_item").string_representation
			-- Checks if the given work_item_id exists into the db
			if my_db.work_item_exists(l_work_item.to_integer) = False then
				-- The work_item1 doesn't exist into the db
				j_obj.put(create {JSON_STRING}.make_json ("ERROR: The work_item '" + l_work_item + "'  doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Gets from the database all the links which are associated with the given work_item
				l_result_payload := (my_db.work_item_links (l_work_item.to_integer))
				-- Adds a proper message
				j_obj.put (create {JSON_STRING}.make_json ("SUCCESS: The links regading the work_item '" + l_work_item + "' are listed."), create {JSON_STRING}.make_json ("success"))
				l_result_payload.extend (j_obj)
				-- Everything ok
				set_json_header_ok (res, l_result_payload.representation.count)
			end
			-- Add the message to the respons
			res.put_string (l_result_payload.representation)
		end

end
