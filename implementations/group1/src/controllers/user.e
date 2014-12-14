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
		require
			valid_parameter: a_dao /= Void and a_session_manager /= Void
		do
			my_db := a_dao
			session_manager := a_session_manager
		ensure
			my_db = a_dao and session_manager = a_session_manager
		end

feature {NONE} -- Private attributes

	my_db: DB

	session_manager: WSF_SESSION_MANAGER

feature -- Handlers

	get_users (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all users
		require
			valid_session: req_has_cookie (req, "_session_")
		local
			l_result_payload: STRING
			l_result: JSON_OBJECT
		do
			l_result_payload := my_db.search_all_users.representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			res /= Void
		end

	get_projects_by_user (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- return in response all project by user, the id_user is in the header of request
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_user").string_representation /= Void
		local
			l_result_payload: STRING
			l_user_id: STRING
		do
			create l_user_id.make_empty
			l_user_id := req.path_parameter ("id_user").string_representation
			l_result_payload := my_db.search_all_project_by_user (l_user_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			res /= Void
		end

	get_project_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- return project info through the project id in the req
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_project").string_representation /= Void
		local
			l_result_payload: STRING
			l_project_id: STRING
		do
			l_project_id := req.path_parameter ("id_project").string_representation
			l_result_payload := my_db.search_a_project (l_project_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			res /= Void
		end

	get_users_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- return user info through the user id in the req
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_user").string_representation /= Void
		local
			l_result_payload: STRING
			l_user_id: STRING
		do
			l_user_id := req.path_parameter ("id_user").string_representation
			l_result_payload := my_db.search_a_user (l_user_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			response_not_null: res /= Void
		end

	delete_users (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- delete user with the user id
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_user").string_representation /= Void
		local
			l_result: JSON_OBJECT
			l_user_id: STRING
		do
			l_user_id := req.path_parameter ("id_user").string_representation
			my_db.remove_user (l_user_id.to_natural_8)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed user " + l_user_id.out), create {JSON_STRING}.make_json ("Message"))
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		ensure
			response_not_null: res /= Void
		end

	put_users (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- update user info
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_user").string_representation /= Void
		local
			l_payload, name, last_name, email, password, rol, active: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			l_user_id: STRING
			flag: BOOLEAN
			hash: SHA256
			password_hash: STRING_32
			l_session: WSF_COOKIE_SESSION
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
			email := get_session_from_req (req, "_session_").at ("email").out
			create hash.make
			hash.update_from_string (email + password)
			password_hash := hash.digest_as_string
			flag := my_db.update_user (l_user_id.to_natural_8, name, last_name, password_hash, rol, active)
			if flag then
					-- add object id to response
				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("Update user " + name + " " + last_name), create {JSON_STRING}.make_json ("Message"))
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
			hash: SHA256
			password_hash: STRING_32
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create name.make_empty
			create last_name.make_empty
			create email.make_empty
			create password.make_empty
			create rol.make_empty
			create active.make_empty
			create hash.make

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
			if my_db.email_in_database (email).is_empty then
				hash.update_from_string (email + password)
				password_hash := hash.digest_as_string
				flag := my_db.add_user (name, last_name, email, password_hash, rol, active)
				l_user_data := my_db.has_user_with_password (email, password_hash)
				if flag then
						-- add object id to response
					create l_result.make
					l_result.put (create {JSON_STRING}.make_json (l_user_data.id.to_string_32), create {JSON_STRING}.make_json ("id"))

						-- send the response
					set_json_header_ok (res, l_result.representation.count)
					res.put_string (l_result.representation)
				end
			else
				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("Email already registered"), create {JSON_STRING}.make_json ("Message"))
				set_json_header (res, 401, l_result.representation.count)
				res.put_string (l_result.representation)
			end
		end

	get_user_role (req: WSF_REQUEST; res: WSF_RESPONSE)
		require
			valid_session: req_has_cookie (req, "_session_")
			valid_parameter: req.path_parameter ("id_project").string_representation /= Void and req.path_parameter ("id_user").string_representation /= Void
		local
			l_result_payload: STRING
			l_user_id, l_project_id: STRING
		do
			l_user_id := req.path_parameter ("id_user").string_representation
			l_project_id := req.path_parameter ("id_project").string_representation
			l_result_payload := my_db.get_user_role (l_user_id.to_integer, l_project_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		ensure
			response_not_null: res /= Void
		end

end
