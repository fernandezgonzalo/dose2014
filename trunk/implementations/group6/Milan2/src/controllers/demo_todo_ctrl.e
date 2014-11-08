note
	description: "This class contains all the handlers for operations relating to TODOs."
	author: "hce"


class
	DEMO_TODO_CTRL

inherit
	DEMO_HEADER_JSON_HELPER
		-- inherit this helper to get a procedure that simplifies setting
		-- the HTTP response header correctly

	DEMO_SESSION_HELPER
		-- inherit this helper to get functions to check for a session cookie
		-- if a session cookie exists, we can get the data of that session

create
	make


feature {NONE} -- Creation

	make (a_dao: DEMO_DB; a_session_manager: WSF_SESSION_MANAGER)
		do
			my_db := a_dao
			session_manager := a_session_manager
		end

feature {NONE} -- Private attributes

	my_db: DEMO_DB

	session_manager: WSF_SESSION_MANAGER


feature -- Handlers

	add_todo (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_payload, l_description, l_user_id: STRING
			l_result_payload: JSON_OBJECT
			parser: JSON_PARSER
		do
				-- create string object to read-in the payload that comes with the request
			create l_payload.make_empty
				-- create json object that we send back as in response
			create l_result_payload.make


			if req_has_cookie (req, "_demo_session_") then

					-- the request has a cookie of name "_demo_session_"
					-- thus, the user is logged in and we can get the user name through the session data

					-- get the id of the user from the session store
				l_user_id := get_session_from_req (req, "_demo_session_").at ("id").out


					-- read the payload from the request and store it in the string
				req.read_input_data_into (l_payload)
					-- now parse the json object that we got as part of the payload
				create parser.make_parser (l_payload)

					-- if the parsing was successful and we have a json object, we fetch the properties
					-- for the todo description and the userId
				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

						-- we have to convert the json string into an eiffel string
					if attached {JSON_STRING} j_object.item ("description") as s then
						l_description := s.unescaped_string_8
					end
				end

					-- add the user to the db	
				l_result_payload := (my_db.add_todo_for_user (l_description, l_user_id.to_natural))


					-- set the header for the response
				set_json_header_ok (res, l_result_payload.representation.count)
			else
					-- the request has no session cookie and thus the user is not logged in
					-- we return an error stating that the user is not authorized to add todos
				l_result_payload.put_string ("User is not logged in.", create {JSON_STRING}.make_json ("Message"))

					-- set the header to status code 401-unauthorized
				set_json_header (res, 401, l_result_payload.representation.count)

			end
				-- set the result paylaod
			res.put_string(l_result_payload.representation)

		end


	remove_todo (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- remove a todo from the database
		local
			l_todo_id: STRING
			l_result: JSON_OBJECT
		do
				-- the the todo_id from the URL (as defined by the placeholder in the route)
			l_todo_id := req.path_parameter ("todo_id").string_representation
				-- remove the todo
			my_db.remove_todo (l_todo_id.to_natural)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


	get_todos (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- returns a json array with all the todos currently in the database
		local
			l_result_payload: STRING
			l_session_id: STRING
		do
				-- fetch data from to the database
			l_result_payload := my_db.todos.representation

				-- set the response
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end


	get_todos_for_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- returns a json array with all the todos for a specific user
		local
			l_user_id, l_result_payload: STRING
		do
				-- extract the user_id from the url path of the request
			l_user_id := req.path_parameter ("user_id").string_representation

				-- fetch data from to the database
			l_result_payload := my_db.todos_for_user (l_user_id.to_natural).representation

				-- set the response
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

end
