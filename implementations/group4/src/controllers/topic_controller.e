note
	description: "Handlers for everything that concerns topics."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-08$"
	revision: "$0.01$"

class
	TOPIC_CONTROLLER

inherit
	HEADER_JSON_HELPER

create
	make

feature {NONE} -- Initialization

	make (a_path_to_db_file: STRING)
		do
			create db_handler_topic.make(a_path_to_db_file)
		end


feature {NONE} -- Private attributes

	db_handler_topic : DB_HANDLER_TOPIC

feature -- Handlers

	get_topics (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all topics
		local
			l_result_payload: STRING
		do
			l_result_payload := db_handler_topic.find_all.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	add_topic (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new topic; the topic data is expected to be part of the request's payload
		local
			l_payload : STRING
			new_title, new_descr, new_project_id, new_task_id, new_user_id : STRING
			new_topic : TOPIC
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
				-- for the topic data
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string for each topic attribute.
				if attached {JSON_STRING} j_object.item ("title") as title then
					new_title := title.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("description") as descr then
					new_descr := descr.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("project_id") as project_id then
					new_project_id := project_id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("task_id") as task_id then
					new_task_id := task_id.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("user_id") as user_id then
					new_user_id := user_id.unescaped_string_8
				end

			end

			create new_topic.make(new_project_id.to_natural, new_task_id.to_natural, new_user_id.to_natural, new_title, new_descr)
				-- create the topic in the database
			db_handler_topic.add (new_topic, new_user_id.to_natural, new_project_id.to_natural)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added topic " + new_topic.title ), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	update_topic (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- update a topic from the database
		do

		end

	remove_topic (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- remove a topic from the database
		local
			l_topic_id: STRING
			l_result: JSON_OBJECT
		do
				-- the topic_id from the URL (as defined by the placeholder in the route)
			l_topic_id := req.path_parameter ("topic_id").string_representation
				-- remove the topic
			db_handler_topic.remove (l_topic_id.to_natural)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


end

