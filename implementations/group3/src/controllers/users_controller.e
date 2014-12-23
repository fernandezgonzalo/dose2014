note
	description: "Handlers for everything that concerns db_models."
	author: "hce"
class
	USERS_CONTROLLER
inherit
	CONTROLLER_BASE
	export {NONE}
		update
	redefine
		db_model
end
create
	make
feature {NONE}
	make(model: USER; a_session_manager : WSF_SESSION_MANAGER)
		do
			db_model := model
	    	session_manager := a_session_manager
		end
feature {NONE}
	db_model: USER
feature

	add(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload, name, password, email: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
			create payload.make_empty
			create name.make_empty
			create email.make_empty

			req.read_input_data_into(payload)

			create parser.make_parser(payload)

			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				if attached {JSON_STRING} j_object.item ("email") as s then
					email := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("name") as s then
					name := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("password") as s then
					password := s.unescaped_string_8
				end

			end

			db_model.new(email, password, name)

			prepare_response("All right", 200, res, true)
		rescue
			prepare_response("Something went wrong", 500, res, true)
		end

	new_password(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload, password, email: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
			create payload.make_empty
			create email.make_empty
			create password.make_empty

			req.read_input_data_into(payload)

			create parser.make_parser(payload)

			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				if attached {JSON_STRING} j_object.item ("email") as s then
					email := s.unescaped_string_8
				end
			end

			password := db_model.new_password(email)

			create l_result.make
			l_result.put (create {JSON_STRING}.make_json (password),
		 	              create {JSON_STRING}.make_json ("new_password"))

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		rescue
			prepare_response("Something went wrong", 500, res, true)
		end

	login(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload, password, email: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			l_session: WSF_COOKIE_SESSION
		do
			create payload.make_empty
			create email.make_empty
			create password.make_empty

			req.read_input_data_into(payload)

			create parser.make_parser(payload)

			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				if attached {JSON_STRING} j_object.item ("email") as s then
					email := s.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("password") as s then
					password := s.unescaped_string_8
				end
			end

			create l_result.make
			if db_model.login(email, password) then
				create l_session.make_new ("_session_", session_manager)

				l_session.remember (email, "email")

				l_session.commit

				l_session.apply (req, res, "/")

				set_json_header_ok (res, l_result.representation.count)
			else
				set_json_header_error (res, l_result.representation.count)
			end

			res.put_string (l_result.representation)
		rescue
			prepare_response("Something went wrong", 500, res, true)

		end


end
