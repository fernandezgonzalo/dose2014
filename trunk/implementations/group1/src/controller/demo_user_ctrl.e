note
	description: " Handlers for everything that concerns users."
	author: "Rio cuarto 1"

class
	DEMO_USER_CTRL

inherit
	HEADER_JSON_HELPER

create
	make


feature {NONE} -- Creation

	make (a_dao: DB)
		do
			my_db := a_dao
		end


feature {NONE} -- Private attributes

	my_db: DB


feature -- Handlers


	get_users (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all users
		local
			l_result_payload: STRING
		do
			l_result_payload := my_db.users.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end


	add_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new users; the user_name is expected to be part of the request's payload
		local
			l_payload, l_name, l_last_name, l_email, l_password, l_rol, l_active: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create l_name.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("name") as n then
					l_name := n.unescaped_string_8
				end

				if attached {JSON_STRING} j_object.item ("lastName") as l then
					l_last_name := l.unescaped_string_8
				end

				if attached {JSON_STRING} j_object.item ("email") as e then
					l_email := e.unescaped_string_8
				end

				if attached {JSON_STRING} j_object.item ("password") as p then
					l_password := p.unescaped_string_8
				end

				if attached {JSON_STRING} j_object.item ("rol") as r then
					l_rol := r.unescaped_string_8
				end

				if attached {JSON_STRING} j_object.item ("active") as a then
					l_active := a.unescaped_string_8
				end

			end

				-- create the user in the database
			my_db.add_user (l_name, l_last_name, l_email, l_password, l_rol, l_active)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added user " + l_name), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

		remove_user (req: WSF_REQUEST; res: WSF_RESPONSE)
				-- remove a user from the database
			local
				l_user_id: STRING
				l_result: JSON_OBJECT
			do
					-- the the todo_id from the URL (as defined by the placeholder in the route)
				l_user_id := req.path_parameter ("user_id").string_representation
					-- remove the todo
				my_db.remove_user (l_user_id.to_natural)

					-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

					-- set the result
				set_json_header_ok (res, l_result.representation.count)
				res.put_string (l_result.representation)
			end


end
