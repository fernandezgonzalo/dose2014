note
	description: "Handlers for everything that concerns answers."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-10$"
	revision: "$0.01$"

class
	ANSWER_CONTROLLER

inherit

	HEADER_JSON_HELPER
		-- inherit this helper to get a procedure that simplifies setting
		-- the HTTP response header correctly

	SESSION_HELPER
		-- inherit this helper to get functions to check for a session cookie
		-- if a session cookie exists, we can get the data of that session

create
	make

feature {NONE} -- Initialization.

	make (a_path_to_db_file : STRING; a_session_manager: WSF_SESSION_MANAGER)
		do
			create db_handler_answer.make(a_path_to_db_file)
			session_manager := a_session_manager
		end

feature {NONE} -- Private attributes

	db_handler_answer : DB_HANDLER_ANSWER

	session_manager: WSF_SESSION_MANAGER

feature -- Handlers

	add_answer (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new answer; the answer data are expected to be part of the request's payload
		local
			l_payload : STRING
			l_description : STRING
			l_user_id, l_topic_id : STRING
			l_answer : ANSWER
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_result.make

			if req_has_cookie (req, "_casd_session_") then
					-- the request has a cookie of name "_casd_session_"
					-- thus, the user is logged in and we can get the user name through the session data

					-- get the id of the user from the session store
				l_user_id := get_session_from_req (req, "_casd_session_").at ("user_id").out

					-- read the payload from the request and store it in the string
				req.read_input_data_into (l_payload)

					-- now parse the json object that we got as part of the payload
				create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the answer description, the user_id and the topic_id
				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

						-- we have to convert the json string into an eiffel string for the description attribute.
					if attached {JSON_STRING} j_object.item ("description") as description then
						l_description := description.unescaped_string_8
					end
				end

				l_topic_id := req.path_parameter ("topic_id").string_representation
				create l_answer.make (l_description, l_topic_id.to_natural, l_user_id.to_natural)
					-- create the answer in the database
				db_handler_answer.add (l_answer)

					-- put in a json object a "Message" property that states what happend
				l_result.put (create {JSON_STRING}.make_json ("Added answer "), create {JSON_STRING}.make_json ("Message"))

					-- send the response
				set_json_header_ok (res, l_result.representation.count)
				res.put_string (l_result.representation)
			else
					-- the request has no session cookie and thus the user is not logged in
					-- we return an error stating that the user is not authorized to add todos
				l_result.put_string ("User is not logged in.", create {JSON_STRING}.make_json ("Message"))
					-- set the header to status code 401-unauthorized
				set_json_header (res, 401, l_result.representation.count)
				res.put_string (l_result.representation)
			end

		end

	update_answer (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- update a answer from the database only if the user session id is the same that the user id who made the answer.
		local
			l_payload: STRING
			l_answer_id: STRING
			l_description : STRING
			l_user_session_id, l_user_id, l_topic_id : STRING
			l_answer : ANSWER
			parser : JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty

			create l_result.make

			if req_has_cookie (req, "_casd_session_") then

					-- the request has a cookie of name "_casd_session_"
					-- thus, the user is logged in and we can get the user name through the session data

					-- get the id of the user from the session store
				l_user_session_id := get_session_from_req (req, "_casd_session_").at ("user_id").out

					-- read the payload from the request and store it in the string
				req.read_input_data_into (l_payload)

					-- now parse the json object that we got as part of the payload
				create parser.make_parser (l_payload)

					-- if the parsing was successful and we have a json object, we fetch the properties
					-- for the answer description, the user_id and the topic_id.
				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string for each answer attribute.
					if attached {JSON_STRING} j_object.item ("description") as description then
						l_description := description.unescaped_string_8
					end
					if attached {JSON_STRING} j_object.item ("topic_id") as topic_id then
						l_topic_id := topic_id.unescaped_string_8
					end
					if attached {JSON_STRING} j_object.item ("user_id") as user_id then
						l_user_id := user_id.unescaped_string_8
					end

				end

				if (l_user_session_id.is_equal (l_user_id)) then
						-- the user logged is the same user that the user who made the answer.

						-- create the answer
					create l_answer.make (l_description, l_topic_id.to_natural, l_user_id.to_natural)
						-- the answer_id from the URL (as defined by the placeholder in the route)
					l_answer_id := req.path_parameter ("answer_id").string_representation
						-- update the answer in the database
					db_handler_answer.update (l_answer_id.to_natural,l_answer)

						-- put in a json object a "Message" property that states what happend
					l_result.put (create {JSON_STRING}.make_json ("Updated answer "), create {JSON_STRING}.make_json ("Message"))

						-- set the result
					set_json_header_ok (res, l_result.representation.count)
					res.put_string (l_result.representation)
				else
					-- put in a json object a "Message" property that states what happend
					l_result.put (create {JSON_STRING}.make_json ("The user logged is incorrect "), create {JSON_STRING}.make_json ("Message"))

						-- set the result
					set_json_header_ok (res, l_result.representation.count)
					res.put_string (l_result.representation)

				end
			else
					-- the request has no session cookie and thus the user is not logged in
					-- we return an error stating that the user is not authorized to add todos
				l_result.put_string ("User is not logged in.", create {JSON_STRING}.make_json ("Message"))
					-- set the header to status code 401-unauthorized
				set_json_header (res, 401, l_result.representation.count)

			end
		end

	remove_answer (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- remove a answer from the database
		local
			l_answer_id: STRING
			l_result: JSON_OBJECT
		do
				-- the answer_id from the URL (as defined by the placeholder in the route)
			l_answer_id := req.path_parameter ("answer_id").string_representation
				-- remove the answer
			db_handler_answer.remove (l_answer_id.to_natural)

				-- create a json object that as a "Message" property that states what happend
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end
end
