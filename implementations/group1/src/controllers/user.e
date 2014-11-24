note
	description: "Handlers for everything that concerns users."
	author: "Guido Giovannini"

class
	USER

inherit
	HEADER_JSON_HELPER
	SESSION_HELPER

create
	make


feature {NONE} -- Creation

	make (a_dao: DB; a_session_manager: WSF_SESSION_MANAGER)
		do
			my_db := a_dao
			session_manager := a_session_manager
		end


feature {NONE} -- Private attributes

	my_db: DB
	session_manager: WSF_SESSION_MANAGER


feature -- Handlers


--	get_users (req: WSF_REQUEST; res: WSF_RESPONSE)
--			-- sends a reponse that contains a json array with all users
--		local
--			l_result_payload: JSON_ARRAY
--			l_result_payload_json: JSON_OBJECT
--		do
--			create l_result_payload.make_array
--			create l_result_payload_json.make
--			if req_has_cookie(req, "_session_") then
--				print("entro por session%N")
--				l_result_payload := my_db.search_all_users
--				set_json_header_ok (res, l_result_payload.count)
--			else
--				print("no entro%N")
--				l_result_payload_json.put_string ("User is not logged in.", create {JSON_STRING}.make_json ("Message"))
--				set_json_header (res, 401, l_result_payload.representation.count)
--			end
--			res.put_string (l_result_payload.representation)
--		end

	get_users (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- sends a reponse that contains a json array with all users
		local
			l_result_payload: STRING
			l_result: JSON_OBJECT
		do
			if req_has_cookie(req, "_session_") then
				l_result_payload := my_db.search_all_users.representation
				set_json_header_ok (res, l_result_payload.count)
				res.put_string (l_result_payload)
			else
				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("User is not logged in."), create {JSON_STRING}.make_json ("Message"))

				-- send the response
				set_json_header (res, 401, l_result.representation.count)
				res.put_string (l_result.representation)
			end
		end

	get_projects_by_user (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_result_payload: STRING
			l_user_id: STRING
		do
			l_user_id := req.path_parameter ("id_user").string_representation
			l_result_payload := my_db.search_all_project_by_user (l_user_id.to_integer).representation
			set_json_header_ok(res, l_result_payload.count)
			res.put_string(l_result_payload)
		end

	get_project_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_result_payload: STRING
			l_project_id: STRING
		do
			l_project_id := req.path_parameter ("id_project").string_representation
			l_result_payload := my_db.search_a_project (l_project_id.to_integer).representation
			set_json_header_ok(res, l_result_payload.count)
			res.put_string(l_result_payload)
		end

	get_users_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_result_payload: STRING
			l_user_id: STRING
		do
			l_user_id := req.path_parameter ("id_user").string_representation
			l_result_payload := my_db.search_a_user (l_user_id.to_integer).representation
			set_json_header_ok(res, l_result_payload.count)
			res.put_string(l_result_payload)
		end

	add_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new users; the user_name is expected to be part of the request's payload
		local
			l_payload, name, last_name, email, password, rol, active: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create name.make_empty
			create last_name.make_empty
			create email.make_empty
			create password.make_empty
			create rol.make_empty
			create active.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("name") as n then
					name := n.unescaped_string_8
				end

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("lastName") as l then
					last_name := l.unescaped_string_8
				end

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("email") as e then
					email := e.unescaped_string_8
				end

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("password") as p then
					password := p.unescaped_string_8
				end

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("rol") as r then
					rol := r.unescaped_string_8
				end

			 	 	-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("active") as a then
					active := a.unescaped_string_8
				end

			end

				-- create the user in the database
			my_db.add_user (name, last_name, email, password, rol, active)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added user " + name+" "+last_name), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

end
