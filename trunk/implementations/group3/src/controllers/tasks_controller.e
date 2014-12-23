note
	description: "This class contains all the handlers for operations relating to TODOs."
	author: "hce"
class
	TASKS_CONTROLLER
inherit
	CONTROLLER_BASE
	redefine
		db_model
end
create
	make
feature {NONE}
	make(model: TASK; a_session_manager : WSF_SESSION_MANAGER)
		do
			db_model := model
	    	session_manager := a_session_manager
		end
feature {NONE}
	db_model: TASK
feature
	add(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload, description, user_id: STRING
			parser: JSON_PARSER
		do
			if req_has_cookie (req, "_session_") then
				create payload.make_empty

				req.read_input_data_into(payload)

				create parser.make_parser(payload)

				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
					if attached {JSON_STRING} j_object.item ("description") as s then
						description := s.unescaped_string_8
					end

					if attached {JSON_STRING} j_object.item ("user_id") as n then
						user_id := n.unescaped_string_8
					end
				end

				db_model.new(description, user_id)

				prepare_response("Created task", 200, res, true)
			else
				prepare_response("User is not logged in",401,res,true)
			end
		end


	by_user(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			user_id, result_payload: STRING
		do
			user_id := req.path_parameter ("user_id").string_representation

			result_payload := db_model.by_user(user_id).representation

			set_json_header_ok(res, result_payload.count)
			res.put_string (result_payload)
		end

end
