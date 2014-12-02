note
	description: "Handlers for everything that concerns users."
	author: "Group1"

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

--	get_ranking
--		local
--			l_result_payload, l_project_id: STRING
--			a: JSON_ARRAY
--			i: INTEGER
--		do
--			-- l_project_id := req.path_parameter ("id_project").string_representation
--			a := my_db.search_user_points_by_project (1)
--			from
--				i := 1;
--			until
--				i > a.count
--			loop
--				print (a.i_th (i).representation.)
--				i := i + 1
--			end

--		end


feature -- Handlers


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

	delete_users (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_result: JSON_OBJECT
			l_user_id: STRING
		do
			if req_has_cookie(req, "_session_") then
				l_user_id := req.path_parameter ("id_user").string_representation
				my_db.remove_user (l_user_id.to_natural_8)
				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("Removed user " + l_user_id.out), create {JSON_STRING}.make_json ("Message"))
				set_json_header_ok(res, l_result.count)
				res.put_string(l_result.representation)
			else
				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("User is not logged in."), create {JSON_STRING}.make_json ("Message"))

				-- send the response
				set_json_header (res, 401, l_result.representation.count)
				res.put_string (l_result.representation)
			end
		end

	put_users (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_payload, name, last_name, password, rol, active: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			l_user_id: STRING
			flag: BOOLEAN
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create name.make_empty
			create last_name.make_empty
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
				if attached {JSON_STRING} j_object.item ("lastname") as l then
					last_name := l.unescaped_string_8
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
			l_user_id := req.path_parameter ("id_user").string_representation
			flag := my_db.update_user (l_user_id.to_natural_8, name, last_name, password, rol, active)
			if flag then
				-- add object id to response
				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("Update user " + name+" "+last_name), create {JSON_STRING}.make_json ("Message"))
					-- send the response
				set_json_header_ok (res, l_result.representation.count)
				res.put_string (l_result.representation)
			end
				-- fail add_user
		end

	add_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new users; the user_name is expected to be part of the request's payload
		local
			l_payload, name, last_name, email, password, rol, active: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			flag: BOOLEAN
			l_user_data: TUPLE [has_user: BOOLEAN; id: STRING]
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
				if attached {JSON_STRING} j_object.item ("lastname") as l then
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
			flag := my_db.add_user (name, last_name, email, password, rol, active)
			l_user_data := my_db.has_user_with_password(email,password)
			if flag then
				-- add object id to response
				create l_result.make
				l_result.put (create {JSON_STRING}.make_json (l_user_data.id.to_string_32), create {JSON_STRING}.make_json ("id"))

				-- send the response
				set_json_header_ok (res, l_result.representation.count)
				res.put_string (l_result.representation)
			end
				-- fail add_user
		end

	get_user_role(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_result_payload: STRING
			l_user_id, l_project_id: STRING
		do
			l_user_id := req.path_parameter ("id_user").string_representation
			l_project_id := req.path_parameter ("id_project").string_representation
			l_result_payload := my_db.get_user_role (l_user_id.to_integer, l_project_id.to_integer).representation
			set_json_header_ok(res, l_result_payload.count)
			res.put_string(l_result_payload)
		end
end
