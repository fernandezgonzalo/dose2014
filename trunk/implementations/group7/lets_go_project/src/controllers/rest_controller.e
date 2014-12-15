note
	description: "Handler for restful requests and resources."
	author: "ar"
	date: "13.11.2014"

deferred class
	REST_CONTROLLER

inherit

	SESSION_HELPER
		-- helper for dealing with authentiation and authorization

	JSON_HELPER
		-- helper functionality for dealing with json

	HTTP_RESPONSE_HELPER
		-- Convenience functions for http responses


feature {NONE} -- Creation

	make (a_db: DATABASE; a_session_manager: WSF_SESSION_MANAGER)
			-- Initialization of this resource.
		do
			db := a_db
			session_manager := a_session_manager
			required_create_new_json_fields := <<>>
			optional_create_new_json_fields := <<>>
			required_update_json_fields := <<>>
			optional_update_json_fields := <<>>
		end


feature {NONE} -- Private attributes

	db: DATABASE
	session_manager: WSF_SESSION_MANAGER

	resource_name: STRING
	table_name: STRING
	uri_id_name: STRING
	parent_uri_id_name: STRING

	-- required and optional fields for json inputs when updating and creating this resource
	required_create_new_json_fields: ARRAY[STRING]
	optional_create_new_json_fields: ARRAY[STRING]
	required_update_json_fields: ARRAY[STRING]
	optional_update_json_fields: ARRAY[STRING]


feature -- Handlers

	get_all (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Handler to fetch all resources.
			-- Typically routed to a GET /resources request.
		local
			results: JSON_ARRAY
			resources: JSON_ARRAY
			i: INTEGER
			resource: JSON_OBJECT
			get_all_statement: TUPLE[statement: STRING; parameters: ITERABLE[ANY]]
		do
			create results.make_array
			get_all_statement := get_get_all_query_statement(req)
			resources := db.query_rows (get_all_statement.statement, get_all_statement.parameters)
			from
				i := 1
			until
				i > resources.count
			loop
				resource := get_json_object_from_string(resources.i_th(i).representation)
				modify_json(resource)
		    	results.extend (resource)
				i := i + 1
			end
			reply_with_200_with_data(res, results.representation)
		end


	create_new (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Handler to create a new resource.
			-- Typically routed to a POST /resources request.
		do
			create_new_from_json(req, res, get_json_object_from_request (req))
		end


	get (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Handler to fetch a single resource.
			-- Typically routed to a GET /resources/:id request.
		local
			resource: JSON_OBJECT
		do
			resource := db.query_single_row("SELECT * FROM " + table_name + " WHERE id = ?", <<get_id(req)>>)

			if resource.is_empty then
					-- no resource found for this id
				reply_with_404(res)

			else
					-- a resource was found for this id.
				modify_json(resource)
				reply_with_200_with_data(res, resource.representation)
			end
		end


	update (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Handler to update a resource.
			-- Typically routed to a PUT /resources/:id request.
		do
			update_from_json(req, res, get_json_object_from_request (req))
		end


	delete (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Handler to delete a resource.
			-- Typically routed to a DELETE /resources/:id request.
		local
			success: BOOLEAN
		do
			if db.query_rows ("SELECT * FROM " + table_name + " WHERE id = ?", <<get_id(req)>>).count = 0 then
					-- no resource found for this id.
				reply_with_404 (res)
			else
				success := db.delete_with_primary_key(get_id(req), table_name)
				if success then
						-- deleting the resource was successful.
					reply_with_204(res)
				else
						-- removing the resource from the database failed.
					reply_with_500(res)
				end
			end
		end


feature -- Error checking handlers (authentication, authorization, input validation)

	get_all_authenticated (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Ensure the user is authenticated before trying to access get_all().
		do
			ensure_authorized (req, res, agent get_all(req , res))
		end


	get_all_authorized (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Ensure the user is authorized before trying to access get_all().
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent get_all(req , res)))
		end


	create_new_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Ensure the user is authorized and the input is valid before trying to access create_new().
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent ensure_input_validated (req, res, agent create_new_from_json(req, res, ?), get_json_object_from_request(req))))
		end


	create_new_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Ensure the input is valid before trying to access create_new().
		do
			ensure_input_validated(req, res, agent create_new_from_json(req, res, ?), get_json_object_from_request(req))
		end


	get_authorized (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Ensure the user is authorized before trying to access get().
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent get(req , res)))
		end


	update_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Ensure the user is authorized and the input is valid before trying to access update().
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent ensure_input_validated (req, res, agent update_from_json(req, res, ?), get_json_object_from_request(req))))
		end


	delete_authorized (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Ensure the user is authorized before trying to access delete().
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent delete(req , res)))
		end


feature {NONE} -- Hooks to be overriden by subclasses for custom behaviour.


	modify_json(resource: JSON_OBJECT)
			-- Default implementation to be overriden by concrete implementations if the json returned by
			-- get_all() and get() requests has to be modified before being sent to the client (e.g. removal
			-- of apassword field or adding additional json fields)
		do
		end

	pre_insert_action(req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
			-- Default implementation of the pre-insertion hook to be redefined by concrete implementations
			-- for custom behaviour (e.g. modify the input before performing the actual database insertion)
		do
		end

	post_insert_action(req: WSF_REQUEST; res: WSF_RESPONSE; new_id: INTEGER_64; input: JSON_OBJECT)
			-- Default implementation of the post-insertion hook to be redefined by concrete implementations
			-- for custom behaviour (e.g. perform some other database operations on the parent or the children of a resource after the insertion)
		do
		end

	pre_update_action(req: WSF_REQUEST; res: WSF_RESPONSE; resource_id: STRING; input: JSON_OBJECT)
			-- Default implementation of the pre-update hook to be redefined by concrete implementations
			-- for custom behaviour (e.g. modify the input before performing the actual database update)
		do
		end

	post_update_action(req: WSF_REQUEST; res: WSF_RESPONSE; resource_id: STRING; input: JSON_OBJECT)
			-- Default implementation of the post-update hook to be redefined by concrete implementations
			-- for custom behaviour (e.g. perform some other database operations on the parent or the children of a resource after the update)
		do
		end


	get_get_all_query_statement(req: WSF_REQUEST): TUPLE[statement: STRING; parameters: ITERABLE[ANY]]
			-- Return the statement and parameters for the query to be performed when handling a get_all() request.
			-- Can be overriden by subclasses if get_all() should not return what this default implementation returns.
		do
			create Result
			if parent_uri_id_name /= Void then
					-- This resource has a parent, fetch only resources belonging to the requested parent.
				Result.statement := "SELECT * FROM " + table_name + " WHERE " + parent_uri_id_name + " = ?"
				Result.parameters := <<get_parent_id(req)>>

			else
					-- This resource has no parent, fetch all resources in the database.
				Result.statement := "SELECT * FROM " + table_name
				Result.parameters := Void
			end
		end


	is_input_valid(req: WSF_REQUEST; input: JSON_OBJECT): BOOLEAN
			-- Default implementation to check whether some user 'input' is valid.
			-- To be overriden by any subclass that needs custom input validation (e.g. regex check etc.).
		do
			Result := True
		end


feature {NONE} -- Request preprocessors (validators, etc.)

	ensure_authenticated (req: WSF_REQUEST; res: WSF_RESPONSE; implementation: PROCEDURE [ANY, TUPLE])
			-- Ensure the user has a valid cookie.
		do
			if no_error_occured_so_far(res) then
				if req_has_cookie(req) then
						-- We have a cookie, continue with the request.
					implementation.call ([])

				else
						-- We have no cookie, abort the request.
					reply_with_401 (res)
				end
			end
		end


	ensure_input_validated (req: WSF_REQUEST; res: WSF_RESPONSE; implementation: PROCEDURE [ANY, TUPLE]; input: JSON_OBJECT)
			-- Ensure that the given user input is valid.
		do
			if no_error_occured_so_far(res) then
				if input = Void then
						-- The input couldn't be parsed or was empty.
					reply_with_400_with_data(res, "Received invalid input!")

				else

					-- Check with the customizable is_input_valid() hook.
					if is_input_valid(req, input) then
							-- The input is valid, continue with the request.
						implementation.call ([input])
					else
							-- The is_input_valid() hook resulted detected an error.
						reply_with_400_with_data(res, "Invalid input: " + input.representation)
					end
				end
			end
		end


	ensure_authorized (req: WSF_REQUEST; res: WSF_RESPONSE; implementation: PROCEDURE [ANY, TUPLE])
			-- Ensure the user has the rights to access the resource he wants to access.
		do
			if no_error_occured_so_far(res) then

				-- Does the requested task really belong to the indicated story?
				ensure_belongs_to_parent(req, res, "task", "tasks", "story")

				-- Does the requested story really belong to the indicated sprint?
				ensure_belongs_to_parent(req, res, "story", "stories", "sprint")

				-- Does the requested sprint really belong to the indicated project?
				ensure_belongs_to_parent(req, res, "sprint", "sprints", "project")

				-- Can this user access the indicated project?
				ensure_user_can_access_project(req, res)

				if no_error_occured_so_far(res) then
						-- Only continue with the request if none of the aboves checks resulted in an error.
					implementation.call ([])
				end
			end
		end


feature {NONE} -- Internal helpers	

	create_new_from_json (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
			-- Create a new resource from the json data given in 'input'.
		local
			fields: ARRAY[STRING]
			fields_str: STRING
			values_str: STRING
			id: INTEGER_64
		do
			-- are all required fields present and no forbidden fields present in the json input?
			ensure_valid_json(req, res, input, required_create_new_json_fields, optional_create_new_json_fields)

			if no_error_occured_so_far(res) then

				-- add a field storing the id of the parent object to the json if this resource has a parent.
				if parent_uri_id_name /= Void then
					input.put_string(get_parent_id(req), jkey(parent_uri_id_name))
				end

				-- Pre-insertion hook to be redefined by concrete implementations for custom behaviour.
				pre_insert_action(req, res, input)

				if no_error_occured_so_far(res) then

					-- We are ready for the insertion now.
					fields := get_fields_from_json(input)
					fields_str := get_comma_separated_string_without_quotes_from_array (fields)
					values_str := get_comma_separated_question_marks(fields.count)
					id := db.insert("INSERT INTO " + table_name + " (" + fields_str + ") VALUES (" + values_str + ")", get_values_from_json(input))
					if id >= 0 then
						-- Successful insertion

						-- Post-insertion hook to be redefined by concrete implementations for custom behaviour.
						post_insert_action(req, res, id, input)

						reply_with_201_with_data(res, id.out)
					else
						-- The database insertion failed.
						reply_with_500(res)
					end
				end
			end
		end


	update_from_json (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
			-- Update an existing resource according to the json data given in 'input'.
		local
			resource_id: STRING
			id_key: JSON_STRING
			success: BOOLEAN
		do
			-- are all required fields present and no forbidden fields present in the json input?
			ensure_valid_json(req, res, input, required_update_json_fields, optional_update_json_fields)

			if no_error_occured_so_far(res) then

				-- add a field storing the id of the parent object to the json if this resource has a parent.
				if parent_uri_id_name /= Void then
					input.put_string(get_parent_id(req), jkey(parent_uri_id_name))
				end

				-- Updating the id is not allowed, so ignore this field if present in input
				id_key := jkey("id")
				if input.has_key(id_key) then
					input.remove(id_key)
				end

				resource_id := get_id(req)

				-- Pre-update hook to be redefined by concrete implementations for custom behaviour.
				pre_update_action(req, res, resource_id, input)

				if no_error_occured_so_far(res) then

					-- We are ready for the update now.
					success := db.update("UPDATE " + table_name + " SET " + get_update_assignments(get_fields_from_json(input)) + " WHERE id = " + resource_id, get_values_from_json(input))
					if success then
						-- Successful update

						-- Post-update hook to be redefined by concrete implementations for custom behaviour.
						post_update_action(req, res, resource_id, input)

						reply_with_204(res)
					else
						-- The database update failed.
						reply_with_500(res)
					end
				end
			end
		end


	ensure_valid_json(req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT; required_fields, optional_fields: ARRAY[STRING])
			-- Ensure all fields of 'required_fields' are present in input
			-- Ensure there is no field in 'input' which is not part of 'required_fields' or 'optional_fields'.
			-- Respond with status code 400 in case of invalid input.
		local
			key_str: STRING
		do
			if input = Void then
					-- Parsing the input failed.
				reply_with_400_with_data(res, "The received data is not a valid json object!")
			end

			across required_fields as field loop

				-- Check for missig fields in input.
				if no_error_occured_so_far(res) and then not input.has_key (jkey(field.item)) then
						-- We found a missing field
					reply_with_400_with_data(res, "Missing json field for resource creation: " + field.item)
				end
			end

			across input.current_keys as key loop

				-- Ensure that there are no unallowed fields in input.
				key_str := get_string_from_json(key.item)
				if no_error_occured_so_far(res) and then not (string_array_has_item(required_fields, key_str) or string_array_has_item(optional_fields, key_str)) then
						-- We found a field that should not be part of the input
					reply_with_400_with_data(res, "Invalid json field for resource creation: " + key_str)
				end
			end
		end


	get_id(req: WSF_REQUEST): STRING
			-- Returns the id of this resource.
		do
			Result := req.path_parameter (uri_id_name).string_representation
		end


	get_parent_id(req: WSF_REQUEST): STRING
			-- Returns the id of the parent of this resource or 'Void' if this resource has no parent.
		do
			if parent_uri_id_name /= Void then
				Result := req.path_parameter(parent_uri_id_name).string_representation
			end
		end


	get_update_assignments(fields: ARRAY[STRING]): STRING
			-- Return a comma separated list for a database update statement for 'fields'.
			-- E.g. for fields <<"id", "name">>, return "id=?, name=?"
		local
			i: INTEGER
			field: STRING
		do
			Result := ""
			from
                i := 1
            until
                i > fields.count
            loop
            	field := get_without_quotes(fields.at(i))
            	Result := Result + field + "=?"

            	if i < fields.count then
            		Result := Result + ", "
            	end
                i := i + 1
            end
		end


	get_values_from_json(json_object: JSON_OBJECT): ITERABLE[ANY]
			-- Return a collection of values of a database update statement given as the values of 'json_object'.
			-- To be used in sql-injections-protected database-update statements.
			-- Warning: The following code seems to violate the DRY principle, but there seems to be no better way for achieving this in Eiffel.
		local
			keys: ARRAY[JSON_STRING]
		do
			keys := json_object.current_keys

			-- Prepared statements fail for more then 10 parameters in Eiffel...
			check keys.count <= 11 end

			-- Build a parameter for each value in the given 'json_object'.
            if keys.count = 0 then
                Result := Void
            elseif keys.count = 1 then
                Result := <<get_value_from_json(json_object, keys.at(1))>>
            elseif keys.count = 2 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2))>>
            elseif keys.count = 3 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3))>>
            elseif keys.count = 4 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4))>>
            elseif keys.count = 5 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4)), get_value_from_json(json_object, keys.at(5))>>
            elseif keys.count = 6 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4)), get_value_from_json(json_object, keys.at(5)), get_value_from_json(json_object, keys.at(6))>>
            elseif keys.count = 7 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4)), get_value_from_json(json_object, keys.at(5)), get_value_from_json(json_object, keys.at(6)), get_value_from_json(json_object, keys.at(7))>>
            elseif keys.count = 8 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4)), get_value_from_json(json_object, keys.at(5)), get_value_from_json(json_object, keys.at(6)), get_value_from_json(json_object, keys.at(7)), get_value_from_json(json_object, keys.at(8))>>
            elseif keys.count = 9 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4)), get_value_from_json(json_object, keys.at(5)), get_value_from_json(json_object, keys.at(6)), get_value_from_json(json_object, keys.at(7)), get_value_from_json(json_object, keys.at(8)), get_value_from_json(json_object, keys.at(9))>>
            elseif keys.count = 10 then
                Result := <<get_value_from_json(json_object, keys.at(1)), get_value_from_json(json_object, keys.at(2)), get_value_from_json(json_object, keys.at(3)), get_value_from_json(json_object, keys.at(4)), get_value_from_json(json_object, keys.at(5)), get_value_from_json(json_object, keys.at(6)), get_value_from_json(json_object, keys.at(7)), get_value_from_json(json_object, keys.at(8)), get_value_from_json(json_object, keys.at(9)), get_value_from_json(json_object, keys.at(10))>>
            end

			-- Remove quotes from the values
			if Result /= Void then
				across Result as value loop
					if attached {STRING} value.item as str_value then
	               		str_value.replace_substring_all("%"", "")
	            	end
				end
			end
		end


	get_comma_separated_string_without_quotes_from_array(a: ARRAY[STRING]): STRING
			-- Return a comma separated string of all items in 'a'.
			-- Remove quotes if any item has some.
		local
			i: INTEGER
		do
			Result := ""
			from
                i := 1
            until
                i > a.count
            loop
            	Result := Result + a.at(i)

            	if i < a.count then
            		Result := Result + ", "
            	end
                i := i + 1
            end
			Result := get_without_quotes(Result)
		end


	get_comma_separated_question_marks(count: INTEGER): STRING
			-- Return a string consisting of 'count' comma-separated question marks, e.g. "?, ?, ?" for 'count' = 3.
		local
			question_mark_array: ARRAY[STRING]
		do
			create question_mark_array.make_filled ("?", 1, count)
			Result := get_comma_separated_string_without_quotes_from_array(question_mark_array)
		end


	ensure_belongs_to_parent(req: WSF_REQUEST; res: WSF_RESPONSE; item_singular_name: STRING; item_plural_name: STRING; parent_item_singular_name: STRING)
			-- Ensure that the requested resource belongs to the parent and grand(grand...) parents indicated in the url.
			-- This protects against unauthorized data manipulation by guessing the id of this resource in the uri.
		local
			item_id, requested_parent_id, true_parent_id: STRING
			query_result: JSON_OBJECT
		do
			if req.path_info.has_substring(item_plural_name) and req.path_parameter(item_singular_name + "_id") /= Void then
				item_id := req.path_parameter(item_singular_name + "_id").string_representation
				if item_id /= Void then
					-- The client tries to access a resource

					requested_parent_id := req.path_parameter(parent_item_singular_name + "_id").string_representation
					query_result := db.query_single_row ("SELECT " + parent_item_singular_name + "_id FROM " + item_plural_name + " WHERE id = ?", <<item_id>>)
					if query_result.is_empty then
							-- No parents found for the requested resource, disallow access.
						reply_with_404 (res)
					else
						true_parent_id := query_result.item (jkey(parent_item_singular_name + "_id")).representation
						if not requested_parent_id.is_equal(true_parent_id) then
								-- You are not allowed to operate on the requested resource since it doesn't belong to the parent you mentioned it to belong to...
							reply_with_404 (res)
						end
					end
				end
			end
		end


	ensure_user_can_access_project(req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Ensur a client is allowed to access information from a certain project.
		local
			user_id, project_id: STRING
			project_share: JSON_VALUE
		do
			if req.path_info.has_substring("projects") and req.path_parameter("project_id") /= Void then
				-- The client tries to access protected project information.

				user_id := get_user_id_from_req(req)
				project_id := req.path_parameter("project_id").string_representation
				if project_id /= Void and user_id /= Void then

					-- Is this user a member of this project?
					project_share := db.query_single_row ("SELECT user_id FROM project_shares WHERE user_id = ? AND project_id = ?", <<user_id, project_id>>).item(jkey("user_id"))
					if project_share = Void then
						-- This user is not a member of the requested project, disallow access.
						reply_with_401 (res)
					end
				end
			end
		end


	string_array_has_item(array: ARRAY[STRING]; item: STRING): BOOLEAN
			-- Is the given 'item' present in 'array'
			-- (Eiffels .has() method on string arrays compares the references of the string instead of the values of two strings).
		do
			Result := False
			across array as cur_item loop
				if cur_item.item.is_equal(item) then
					Result := True
				end
			end
		end


	no_error_occured_so_far(res: WSF_RESPONSE): BOOLEAN
			-- Was there no error detected so far (e.g. in validators etc.)?
		do
			Result := res.status_code = {HTTP_STATUS_CODE}.ok
		end
end
