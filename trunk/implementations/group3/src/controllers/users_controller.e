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
		make,
		db_model
end

create
	make

feature {NONE} -- Creation

	make (model: USER)
		do
			db_model := model
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

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added db_model " + name), create {JSON_STRING}.make_json ("Message"))

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

end
