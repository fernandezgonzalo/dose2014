note
	description: "Handlers for everything that concerns answers."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-10$"
	revision: "$0.01$"

class
	ANSWER_CONTROLLER

inherit
	HEADER_JSON_HELPER

create
	make

feature {NONE} -- Initialization.

	make (a_path_to_db_file : STRING)
		do
			create db_handler_answer.make(a_path_to_db_file)
		end

feature {NONE} -- Private attributes

	db_handler_answer : DB_HANDLER_ANSWER

feature -- Handlers

	add_answer (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new answer; the answer data are expected to be part of the request's payload
		local
			l_payload : STRING
			l_description : STRING
			l_user_id, l_topic_id : NATURAL
			l_answer : ANSWER
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
				-- for the answer description, the user_id and the topic_id
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string for each answer attribute.
				if attached {JSON_STRING} j_object.item ("description") as description then
					l_description := description.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("topic_id") as topic_id then
					l_topic_id := topic_id.unescaped_string_8.to_natural
				end
				if attached {JSON_STRING} j_object.item ("user_id") as user_id then
					l_user_id := user_id.unescaped_string_8.to_natural
				end

			end

			create l_answer.make (l_description, l_topic_id, l_user_id)
				-- create the answer in the database
			db_handler_answer.add (l_answer)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added answer "), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)

		end

	update_answer (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- update a answer from the database
		local
			l_payload: STRING
			l_answer_id: STRING
			l_description : STRING
			l_user_id, l_topic_id : NATURAL
			l_answer : ANSWER
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
				-- for the answer description, the user_id and the topic_id.
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

				-- we have to convert the json string into an eiffel string for each answer attribute.
				if attached {JSON_STRING} j_object.item ("description") as description then
					l_description := description.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("topic_id") as topic_id then
					l_topic_id := topic_id.unescaped_string_8.to_natural
				end
				if attached {JSON_STRING} j_object.item ("user_id") as user_id then
					l_user_id := user_id.unescaped_string_8.to_natural
				end

			end

				-- create the answer
			create l_answer.make (l_description, l_topic_id, l_user_id)
				-- the user_id from the URL (as defined by the placeholder in the route)
			l_answer_id := req.path_parameter ("answer_id").string_representation
				-- update the answer in the database
			db_handler_answer.update (l_answer_id.to_natural,l_answer)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Updated answer "), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)

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

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end
end
