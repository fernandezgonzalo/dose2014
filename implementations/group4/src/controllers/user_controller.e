note
	description: "Handlers for everything that concerns users."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-08$"
	revision: "$0.01$"

class
	USER_CONTROLLER

inherit
	HEADER_JSON_HELPER

create
	make

feature {NONE} -- Initialization

	make (a_path_to_db_file: STRING)
		do
			create db_handler_user.make(a_path_to_db_file)
		end


feature {NONE} -- Private attributes

	db_handler_user : DB_HANDLER_USER

feature -- Handlers

	get_users (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all users
		local
			l_result_payload: STRING
		do
			l_result_payload := db_handler_user.find_all.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	add_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new users; the user data are expected to be part of the request's payload
		local
			l_payload : STRING
			l_user_name, l_email, l_password : STRING
			l_user : USER
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
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string for each user attribute.
				if attached {JSON_STRING} j_object.item ("user_name") as user_name then
					l_user_name := user_name.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("email") as email then
					l_email := email.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("password") as password then
					l_password := password.unescaped_string_8
				end

			end

			create l_user.make(l_user_name,l_email,l_password)
				-- create the user in the database
			db_handler_user.add (l_user)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added user " + l_user.username ), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	update_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- update a user from the database
		local
			l_payload: STRING
			l_user_id: STRING
			l_user_name, l_email, l_password : STRING
			l_user : USER
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
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

				-- we have to convert the json string into an eiffel string for each user attribute.
				if attached {JSON_STRING} j_object.item ("user_name") as user_name then
					l_user_name := user_name.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("email") as email then
					l_email := email.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("password") as password then
					l_password := password.unescaped_string_8
				end

			end

				-- create the user
			create l_user.make (l_user_name, l_email, l_password)

				-- the user_id from the URL (as defined by the placeholder in the route)
			l_user_id := req.path_parameter ("user_id").string_representation

				-- update the user in the database
			db_handler_user.update (l_user_id.to_natural,l_user)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Updated user "+ l_user.username), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	remove_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- remove a user from the database
		local
			l_user_id: STRING
			l_result: JSON_OBJECT
		do
				-- the user_id from the URL (as defined by the placeholder in the route)
			l_user_id := req.path_parameter ("user_id").string_representation
				-- remove the user
			db_handler_user.remove (l_user_id.to_natural)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


end
