note
	description: "Handlers for everything that concerns users."
	author: "hce"
class
	USERS_CONTROLLER
inherit
	HEADER_JSON_HELPER

create
	make

feature {NONE} -- Creation

	make (model: USER)
		do
			user := model
		end


feature {NONE}
	user: USER
feature
	get_all(req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all users
		local
			l_result_payload: STRING
		do
			l_result_payload := user.get_all.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end


	add(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload, name: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
			create payload.make_empty
			create name.make_empty

			req.read_input_data_into(payload)

			create parser.make_parser(payload)

			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				if attached {JSON_STRING} j_object.item ("name") as s then
					name := s.unescaped_string_8
				end

			end

			user.new(name)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added user " + name), create {JSON_STRING}.make_json ("Message"))

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

	show(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			user_id, result_payload: STRING
		do
			user_id := req.path_parameter("user_id").string_representation

			result_payload := user.find(user_id.to_natural).representation

			set_json_header_ok(res, result_payload.count)
			res.put_string(result_payload)
		end
end
