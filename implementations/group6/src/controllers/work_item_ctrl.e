note
	description: "Summary description for {WORK_ITEM_CTRL}."
	author: "Anna Maria Nestorov - Milan2"
	date: "$Date$"
	revision: "$Revision$"

class
	WORK_ITEM_CTRL

inherit
	DEMO_HEADER_JSON_HELPER
	DEMO_SESSION_HELPER

create
	make

feature {NONE} --creation

	make(a_dao: DEMO_DB; a_session_manager: WSF_SESSION_MANAGER)
		do
			my_db := a_dao;
			session_manager := a_session_manager;

		end


feature -- Private attributes

	my_db: DEMO_DB

	session_manager: WSF_SESSION_MANAGER


feature --handlers about work_items

	--OK
	get_achieved_work_items(req: WSF_REQUEST; res: WSF_RESPONSE)
		--Send a responcse which contains all work_items with 'Done' status
		local
			l_user_email: STRING
			j_obj: JSON_OBJECT
			j_array: JSON_ARRAY
		do

			-- create json object that we send back as in response
			create j_obj.make
			-- Receive the user email
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end
			-- Checks if the given user is logged in
			if l_user_email = VOID OR l_user_email.is_empty then
				-- The user isn't logged in
				j_obj.put (create {JSON_STRING}.make_json ("ERROR: the user isn't logged in."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, j_obj.representation.count)
			else
				-- Get from the database all the work_items which are associated with the given iteration and project
				j_array := my_db.all_user_done_work_items (l_user_email)
				if j_array.count > 0 then
					j_obj.put (create {JSON_STRING}.make_json ("SUCCESS: All 'Done' work_items of '"+ l_user_email + "' are listed above."), create {JSON_STRING}.make_json ("sucess"))
				else
					j_obj.put (create {JSON_STRING}.make_json ("SUCCESS: The user '" + l_user_email + "' hasn't any 'Done' work_item."), create {JSON_STRING}.make_json ("sucess"))
				end
				j_obj.put (j_array, create {JSON_STRING}.make_json ("work_items"))
				-- Everything ok
				set_json_header_ok (res, j_obj.representation.count)
			end
			-- Add the message to the respons
			res.put_string (j_obj.representation)

		end

	--OK
	get_work_item_info(req: WSF_REQUEST; res: WSF_RESPONSE)
		--Sends a response which contains a json object with the information about a work_item; the work_item_id, the iteration number and the project name are expected to be
		--Part of the request payload
		local
				l_id: INTEGER
				l_result_payload: JSON_OBJECT
				l_payload: STRING
				parser: JSON_PARSER
		do
			create l_payload.make_empty
			-- Create l_id default
			create l_id.default_create
			-- Create json object that we send back as in response
			create l_result_payload.make
			-- Read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- Now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- We have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("work_item_id") as s then
					l_id := s.item.to_integer
				end
			end
			if my_db.work_item_exists (l_id) then
				-- Get from the database all the work_items which are associated with the given iteration which is into the given project
				l_result_payload := my_db.work_item_info(l_id)
				l_result_payload.put(create {JSON_STRING}.make_json ("SUCCESS: The fields of the work_item '" + l_id.out + "' are listed above."),create {JSON_STRING}.make_json ("success"))
				-- Everything ok	
				set_json_header_ok (res, l_result_payload.representation.count)
			else
				l_result_payload.put(create {JSON_STRING}.make_json ("ERROR: The work_item '" + l_id.out + "' doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
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
			l_payload, l_project,l_state, l_name, l_description, l_user_email: STRING
			l_number, l_points, l_iteration:INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
			new_id: INTEGER
			comment: COMMENT
			link: LINK
			c1: STRING
			l_comments: ARRAYED_LIST[COMMENT]
			l_links: ARRAYED_LIST[LINK]
			num: INTEGER -- counts hw many comments there are
			presence_work_item: BOOLEAN --it is True if the work_item of the link exist into the dd, False otherwise
			-- Adds for sending email--------------------------------------------
			env: EXECUTION_ENVIRONMENT
			array_owners: ARRAYED_LIST[STRING]
			j_owners: JSON_ARRAY
			i: INTEGER
			string, email, path: STRING
			---------------------------------------------------------------------
		do
			-- Create json object that we send back as in response
			create l_result_payload.make
			-- Receive the user email
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end
			-- Checks if the given user is logged in
			if l_user_email = VOID OR l_user_email.is_empty then
				-- The user isn't logged in
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: the user isn't logged in."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Create string objects to read-in the payload that comes with the request
				create l_payload.make_empty
				create l_iteration.default_create
				create l_points.default_create
				create l_project.make_empty
				create l_name.make_empty
				create l_description.make_empty
				create l_state.make_empty
				create l_number.default_create
				-- Read the payload from the request and store it in the string
				req.read_input_data_into (l_payload)
				-- Now parse the json object that we got as part of the payload
				create parser.make_parser (l_payload)
				-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
					-- We have to convert the json string into an eiffel string
					if attached {JSON_STRING} j_object.item ("iteration_number") as s then
						l_iteration := s.item.to_integer
					end
					if attached {JSON_STRING} j_object.item ("project_name_id") as s then
					l_project := s.unescaped_string_8
					end
					if attached {JSON_STRING} j_object.item ("work_item_title") as s then
						l_name := s.unescaped_string_8
					end
					if attached {JSON_STRING} j_object.item ("description") as s then
						l_description := s.unescaped_string_8
					end
					if attached {JSON_STRING} j_object.item ("points") as s then
						l_points := s.item.to_integer
					end
					if attached {JSON_STRING} j_object.item ("status") as s then
						l_state := s.unescaped_string_8
					end
 					if attached {JSON_ARRAY} j_object.item ("comments") as a then
 						-- Reads the comments
						create l_comments.make (a.count)
						across a.array_representation as array loop
							-- Reads one text at time
							if attached {JSON_OBJECT} array.item as comm then
								if attached {JSON_STRING} comm.item ("text") as t then
									c1:= t.unescaped_string_8
									create comment.make (c1, l_user_email)
									l_comments.extend (comment)
								end
							end
						end
					end
					if attached {JSON_ARRAY} j_object.item ("links") as a then
						presence_work_item := True
						create l_links.make (a.count)
						across a.array_representation as lconn loop
							if attached {JSON_OBJECT}  lconn.item as j_ob AND presence_work_item = True then
								if attached {JSON_STRING} j_ob.item ("work_item_2") as t then
									-- Checks if the given work_item exists
									if my_db.work_item_exists (t.item.to_integer) = False then
										presence_work_item:=False
										num:=t.item.to_integer
									else
										-- Adds link
										create link.make (t.item.to_integer)
										l_links.extend (link)
									end
								end
							end
						end
					end
				end
				if my_db.check_work_item (l_iteration, l_project,l_name ) = True then
					-- The work_item with name "l_name" into project "l_project" and into iteration "l_iteration" already exists
					l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item name '" + l_name + "' already exists into project:'"+ l_project + "' and iteraton:'" + l_iteration.out + "'"), create {JSON_STRING}.make_json ("Error"))
					set_json_header (res, 401, l_result_payload.representation.count)
				elseif presence_work_item = False then
					-- The given work_item to put into the new link doesn't exist
					l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item '" + num.out + "' as regards to adding links doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result_payload.representation.count)
				elseif l_name.is_empty or l_name = Void then
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
				elseif my_db.check_project_name (l_project) = False then
						-- The project doesn't exist
						l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given project doesn't exist."), create {JSON_STRING}.make_json ("error"))
						set_json_header (res, 401, l_result_payload.representation.count)
				elseif my_db.check_iteration (l_iteration,l_project) = False then
					-- The iteration doesn't exist
					l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given iteration doesn't exist."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result_payload.representation.count)
				elseif my_db.check_status (l_state) = False then
					-- The status isn't correct
					l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The given status isn't among the possible choices."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result_payload.representation.count)
				else
					new_id:=my_db.add_work_item (l_name,l_description,l_points,l_iteration,l_project,l_state,l_user_email,l_user_email)
					if (l_comments /= Void and l_comments.count >= 1 ) then
						-- There is at least one comment to add
						across l_comments as c
						loop
							my_db.add_comment (new_id, c.item.gettext, c.item.getauthor)
						end
					end
					if (l_links /= Void and l_links.count >= 1 ) then
						-- There is at least one link to add
						across l_links as l
						loop
							my_db.add_link (new_id, l.item.get2)
						end
					end
					l_result_payload.put ( create {JSON_STRING}.make_json (new_id.out), create {JSON_STRING}.make_json ("new_id"))
					-- Send an appropriate message
					l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The work_item '" + l_name + "' was added successfully."), create {JSON_STRING}.make_json ("success"))
					set_json_header_ok (res, l_result_payload.representation.count)

					-- Adds code for sending email to the owners of the project
					create j_owners.make_array
					-- Retrieve the owners email
					j_owners:=my_db.get_all_project_owners(l_project)

					create array_owners.make (j_owners.count)
					across j_owners.array_representation as array loop
						-- Reads one email at time
						if attached {JSON_OBJECT} array.item as owner then
							if attached {JSON_STRING} owner.item ("email") as t then
									email:= t.unescaped_string_8
									array_owners.extend (email)
							end
						end
					end
					create env
					-- Sends emails
					-- In first place to all owners of the given project
					from
						i:=1
					until
						i>array_owners.count
					loop
						-- Make a strint to call python script
						create string.make_empty
						path:=my_db.path_to_src_folder(12)
						string:="python "
						string.append_string (path)
						string.append_string(array_owners[i])
						string.append_string(" %"")
						string.append_string(l_name)
						string.append_string ("%" ")
						string.append_string(l_user_email)
						string.append_string(" %"")
						string.append_string(l_project)
						string.append_string("%" %"")
						string.append_string("ITERATION ")
						string.append_string (l_iteration.out)
						string.append_string ("%"")
						env.launch(string)
						i:=i+1
					end

				-----------------------------------------------------------------------------------------------------
				end
			end

			-- Add the message to the response
			res.put_string (l_result_payload.representation)
		end

	--OK
	change_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		-- Changes an existing work_item; all information about the work_item are expeted to be part of the request payload
		local
			l_payload, l_state, l_name, l_description, l_owner, l_project, l_user_email: STRING
			l_points, l_iteration,l_id:INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
			old_name: STRING
		do
			-- Create json object that we send back as in response
			create l_result_payload.make
			-- Receive the user email
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end

			-- Checks if the given user is logged in
			if l_user_email = VOID OR l_user_email.is_empty then
				-- The user isn't logged in
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: the user isn't logged in."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Create string objects to read-in the payload that comes with the request
				create l_payload.make_empty
				create l_id.default_create
				create l_iteration.default_create
				create l_points.default_create
				create l_project.make_empty
				create l_name.make_empty
				create l_description.make_empty
				create l_owner.make_empty
				create l_state.make_empty
				-- Create json object that we send back as in response
				create l_result_payload.make
				-- Read the payload from the request and store it in the string
				req.read_input_data_into (l_payload)
				-- Now parse the json object that we got as part of the payload
				create parser.make_parser (l_payload)
				-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
					-- We have to convert the json string into an eiffel string
					if attached {JSON_STRING} j_object.item ("work_item_id") as s then  --
						l_id := s.item.to_integer
					end
					if attached {JSON_STRING} j_object.item ("nb_iteration") as s then  --
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
					if attached {JSON_STRING} j_object.item ("points") as s then  --
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
				elseif my_db.check_work_item (l_iteration, l_project,l_name ) = True then
					-- The work_item with name "l_name" into project "l_project" and into iteration "l_iteration" already exists
					l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item name '" + l_name + "' already exists into project:'"+ l_project + "' and iteraton:'" + l_iteration.out + "'"), create {JSON_STRING}.make_json ("Error"))
					set_json_header (res, 401, l_result_payload.representation.count)
				elseif my_db.work_item_exists (l_id) = False then
					-- The work_item doesn't exist into the db
					l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item with id '" + l_id.out + "' doesn't exist."), create {JSON_STRING}.make_json ("Error"))
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
					old_name:=my_db.modify_work_item(l_id,l_iteration,l_name,l_points,l_state,l_owner,l_description,l_project)
					-- Send an appropriate message
					l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The work_item '" + old_name + "' was modified successfully."), create {JSON_STRING}.make_json ("success"))
					set_json_header_ok (res, l_result_payload.representation.count)
				end
			end
			-- Add the message to the response
			res.put_string (l_result_payload.representation)
		end

	--OK
	delete_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		-- Deletes an existing work_item; work_item_id is expected to be part of the request payload
		local
			l_payload, l_user_email: STRING
			l_id: INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
			-- Adds for sending email
			env: EXECUTION_ENVIRONMENT
			array_owners: ARRAYED_LIST[STRING]
			j_owners: JSON_ARRAY
			i, iteration: INTEGER
			string, email, path, project, name: STRING
			given_work_item: JSON_OBJECT
			--------------------------------------
		do
			-- Create json object that we send back as in response
			create l_result_payload.make
			-- Receive the user email
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end

			-- Checks if the given user is logged in
			if l_user_email = VOID OR l_user_email.is_empty then
				-- The user isn't logged in
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: the user isn't logged in."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				create l_payload.make_empty
				-- Create l_id like empty
				create l_id.default_create
				-- Read the payload from the request and store it in the string
				req.read_input_data_into (l_payload)
				-- Now parse the json object that we got as part of the payload
				create parser.make_parser (l_payload)
				-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
					-- We have to convert the json string into an eiffel string
					if attached {JSON_STRING} j_object.item ("work_item_id") as s then
						l_id := s.item.to_integer
					end
				end
				-- Check if the given work_item exists into the db
				if my_db.work_item_exists(l_id) = False then
					-- The given work_item doesn't exist
					l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item with id '" + l_id.out + "' doesn't exist."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result_payload.representation.count)
				else
					-- Take the tuple with the given work_item fields
					given_work_item:=my_db.work_item_info (l_id)
					-- Update the numbers of the work_item which have a greater number
					my_db.update_number(l_id)
					-- Remove all links regardin this work_item
					my_db.remove_all_work_item_links (l_id)
					-- Remove all comments regardin this work_item
					my_db.remove_all_work_item_comments (l_id)
					-- Remore the given work_item
					my_db.remove_work_item (l_id)
					-- Send an appropriate message
					l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The work_item with id '" + l_id.out + "' was removed successfully."), create {JSON_STRING}.make_json ("success"))
					set_json_header_ok (res, l_result_payload.representation.count)

					if attached {JSON_STRING} given_work_item.item ("project") as s then
						project:= s.unescaped_string_8
					end
					if attached {JSON_STRING} given_work_item.item ("nb_iteration") as s then
						iteration:= s.item.to_integer
					end
					if attached {JSON_STRING} given_work_item.item ("name") as s then
						name:= s.unescaped_string_8
					end
					-- Adds code for sending email to the owners of the project
					create j_owners.make_array
					-- Retrieve the owners email
					j_owners:=my_db.get_all_project_owners(project)
					create array_owners.make (j_owners.count)
					across j_owners.array_representation as array loop
						-- Reads one email at time
						if attached {JSON_OBJECT} array.item as owner then
							if attached {JSON_STRING} owner.item ("email") as t then
									email:= t.unescaped_string_8
									array_owners.extend (email)
							end
						end
					end
					create env
					-- Sends emails
					-- In first place to all owners of the given project
					from
						i:=1
					until
						i>array_owners.count
					loop
						-- Make a strint to call python script
						create string.make_empty
						path:=my_db.path_to_src_folder(13)
						string:="python "
						string.append_string (path)
						string.append_string(array_owners[i])
						string.append_string(" %"")
						string.append_string(name)
						string.append_string ("%" ")
						string.append_string(l_user_email)
						string.append_string(" %"")
						string.append_string(project)
						string.append_string("%" %"")
						string.append_string("ITERATION ")
						string.append_string (iteration.out)
						string.append_string ("%"")
						env.launch(string)
						i:=i+1
					end

				-----------------------------------------------------------------------------------------------------
				end
			end
			-- Add the message to the response
			res.put_string (l_result_payload.representation)
		end

	get_all_iteration_work_items(req: WSF_REQUEST; res: WSF_RESPONSE)
		-- Gets all the work items related to an iteration; project's name and iteration's number are expected to be part of the request paylod
		local
			l_project, l_payload: STRING
			l_iteration_num: INTEGER
			j_obj: JSON_OBJECT
			l_result_payload: JSON_ARRAY
			parser: JSON_PARSER
		do
			create l_iteration_num.default_create
			create j_obj.make
			create l_project.make_empty
			create l_payload.make_empty
			-- Create json object that we send back as in response
			create l_result_payload.make_array
			-- Read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- Now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- We have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("project_name") as s then  --
					l_project := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("iteration_number") as s then  --
					l_iteration_num := s.item.to_integer
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
			elseif my_db.check_iteration (l_iteration_num, l_project) = False then
				-- The given iteration doesn't exist into th db
				j_obj.put (create {JSON_STRING}.make_json ("ERROR: The iteration doesn't exist into db."), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Get from the database all the work_items which are associated with the given iteration and project
				l_result_payload := (my_db.iteration_work_items(l_iteration_num.to_integer, l_project))
				if l_result_payload.count = 0 then
					-- The given iteration has 0 work item
					j_obj.put (create {JSON_STRING}.make_json ("SUCCESS: The iteration '" + l_iteration_num.out + "' into project '" + l_project + "' hasn't any work_item."), create {JSON_STRING}.make_json ("sucess"))
					l_result_payload.extend (j_obj)
				else
					j_obj.put (create {JSON_STRING}.make_json ("SUCCESS: The work_items of iteration '" + l_iteration_num.out + "' into project '" + l_project + "' are listed above."), create {JSON_STRING}.make_json ("sucess"))
					l_result_payload.extend (j_obj)
				end
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
			l_payload, l_content, l_author,l_work_item, l_user_email: STRING
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do
			-- Create json object that we send back as in response
			create l_result_payload.make
			-- Receive the user email
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end

			-- Checks if the given user is logged in
			if l_user_email = VOID OR l_user_email.is_empty then
				-- The user isn't logged in
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: the user isn't logged in."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				-- Create string objects to read-in the payload that comes with the request
				create l_payload.make_empty
				create l_content.make_empty
				create l_author.make_empty
				create l_work_item.make_empty

				-- Read the payload from the request and store it in the string
				req.read_input_data_into (l_payload)
				-- Now parse the json object that we got as part of the payload
				create parser.make_parser (l_payload)
				-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
					-- We have to convert the json string into an eiffel string
					if attached {JSON_STRING} j_object.item ("work_item_id") as s then
						l_work_item := s.unescaped_string_8
					end
					if attached {JSON_STRING} j_object.item ("comment") as s then
						l_content := s.unescaped_string_8
					end
				end
				l_author:=l_user_email
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
			end
			-- Add the message to the response
			res.put_string (l_result_payload.representation)
		end

	-- OK
	get_all_work_item_comments(req: WSF_REQUEST; res: WSF_RESPONSE)
		 -- Sends a response which contains a json array with all comments about a certain work_item; the work_item ID is expected to be part of the request payload
		local
			l_payload: STRING
			l_work_item: INTEGER
			j_obj: JSON_OBJECT
			j_array: JSON_ARRAY
			parser: JSON_PARSER
		do
			create l_work_item.default_create
			create j_obj.make
			create j_array.make_array
			create l_payload.make_empty
			-- Read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- Now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- We have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("work_item_id") as s then
					l_work_item := s.item.to_integer
				end
			end
			-- Checks if the given work_item_id exists into the db
			if my_db.work_item_exists (l_work_item) = False then
				-- The work_item doesn't exist
				j_obj.put ( create {JSON_STRING}.make_json ("ERROR: The given work_item doesn't exist."),create {JSON_STRING}.make_json ("error"))
				set_json_header_ok (res,j_obj.representation.count)
			else
				j_array:= my_db.work_item_comments (l_work_item)
				j_obj.put (j_array, create {JSON_STRING}.make_json ("comments"))
				-- Gets from the database all the comments which are associated with the given id
				j_obj.put (create {JSON_STRING}.make_json ("SUCCESS: The comments of work_item '" + l_work_item.out + "' are listed above."),create {JSON_STRING}.make_json ("success"))
				-- Everything ok
				set_json_header_ok (res,j_obj.representation.count)
			end
			-- Add the message to the respons
			res.put_string (j_obj.representation)
		end


feature -- handlers about links

	add_link(req: WSF_REQUEST; res: WSF_RESPONSE)
		-- Adds a new link between two work_items; both id are expected to be part of the request payload
		local
			l_payload, l_user_email:STRING
			l_work_item1, l_work_item2: INTEGER
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do
			-- Create json object that we send back as in response
			create l_result_payload.make
			-- Receive the user email
			if req_has_cookie(req, "_session_") then
				l_user_email := get_session_from_req(req, "_session_").at("email").out
			end

			-- Checks if the given user is logged in
			if l_user_email = VOID OR l_user_email.is_empty then
				-- The user isn't logged in
				l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: the user isn't logged in."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, l_result_payload.representation.count)
			else
				create l_payload.make_empty
				-- Read the payload from the request and store it in the string
				req.read_input_data_into (l_payload)
				-- Now parse the json object that we got as part of the payload
				create parser.make_parser (l_payload)
				-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
					-- We have to convert the json string into an eiffel string
					if attached {JSON_STRING} j_object.item ("id_work_item_source") as s then
						l_work_item1 := s.item.to_integer
					end
					if attached {JSON_STRING} j_object.item ("id_work_item_destination") as s then
						l_work_item2 := s.item.to_integer
					end
				end
				-- Checks the existence of the given work_items
				if my_db.work_item_exists(l_work_item1) = False AND my_db.work_item_exists(l_work_item2) = True then
					-- The work_item1 doesn't exist into the db
					l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item source '" + l_work_item1.out + "'  doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result_payload.representation.count)
				elseif my_db.work_item_exists(l_work_item1) = True AND my_db.work_item_exists(l_work_item2) = False then
					-- The work_item2 doesn't exist into the db
					l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: The work_item destination '" + l_work_item2.out + "'  doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result_payload.representation.count)
				elseif my_db.work_item_exists(l_work_item1) = False AND my_db.work_item_exists(l_work_item2) = False then
						-- Both work_item and work_item2 don't exist
					l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: Both work_item sourse '" + l_work_item1.out + "' and destination '" + l_work_item2.out + "' don't exist."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result_payload.representation.count)
				elseif my_db.link_exist (l_work_item1,l_work_item2) = True then
					-- The given link already exists into the db
					l_result_payload.put (create {JSON_STRING}.make_json ("ERROR: Link ('" + l_work_item1.out +"','" + l_work_item2.out +"') already exists into the db."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result_payload.representation.count)
				else
					-- Everything is correct, therefore adds the new link
					my_db.add_link (l_work_item1, l_work_item2)
					-- Send an appropriate message
					l_result_payload.put ( create {JSON_STRING}.make_json ("SUCCESS: The link was added successfully."), create {JSON_STRING}.make_json ("success"))
					set_json_header_ok (res, l_result_payload.representation.count)
				end
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
			l_payload: STRING
			l_work_item: INTEGER
			j_obj: JSON_OBJECT
			j_array: JSON_ARRAY
			parser: JSON_PARSER
		do
			-- Create string objects to read-in the payload that comes with the request
			create l_payload.make_empty
			create l_work_item.default_create
			create j_obj.make
			-- Read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
			-- Now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)
			-- If the parsing was successful and we have a json object, we fetch the properties for the work_item_number
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				-- We have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("work_item_id") as s then
					l_work_item := s.item.to_integer
				end
			end
			-- Checks if the given work_item_id exists into the db
			if my_db.work_item_exists(l_work_item) = False then
				-- The work_item1 doesn't exist into the db
				j_obj.put(create {JSON_STRING}.make_json ("ERROR: The work_item '" + l_work_item.out + "'  doesn't exist into the db."), create {JSON_STRING}.make_json ("error"))
				set_json_header (res, 401, j_obj.representation.count)
			else
				j_array:= my_db.work_item_links (l_work_item)
				j_obj.put (j_array, create {JSON_STRING}.make_json ("links"))
				-- Adds a proper message
				j_obj.put (create {JSON_STRING}.make_json ("SUCCESS: The links regading the work_item '" + l_work_item.out + "' are listed."), create {JSON_STRING}.make_json ("success"))
				-- Everything ok
				set_json_header_ok (res, j_obj.representation.count)
			end
			-- Add the message to the respons
			res.put_string (j_obj.representation)
		end

end
