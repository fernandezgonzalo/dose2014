note
	description: "This class contains all the handlers for operations relating to TODOs."
	author: "hce"
class
	TASKS_CONTROLLER
inherit
	CONTROLLER_BASE
create
	make
feature {NONE}
	make (model: TASK)
		do
			task := model
		end
feature {NONE}
	task: TASK
feature
	add(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload, description, user_id, result_payload: STRING
			parser: JSON_PARSER
		do
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

			result_payload := task.new(description, user_id.to_natural).representation

			set_json_header_ok (res, result_payload.count)
			res.put_string(result_payload)
		end


	remove(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			task_id: STRING
			l_result: JSON_OBJECT
		do
			task_id := req.path_parameter ("task_id").string_representation

			task.delete_by_id(task_id.to_natural)

			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json("Message"))

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


	get_all(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_result_payload: STRING
		do
			l_result_payload := task.get_all.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end


	by_user(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			user_id, result_payload: STRING
		do
			user_id := req.path_parameter ("user_id").string_representation

			result_payload := task.by_user(user_id.to_natural).representation

			set_json_header_ok(res, result_payload.count)
			res.put_string (result_payload)
		end

	show(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			task_id, result_payload: STRING
		do
			task_id := req.path_parameter ("task_id").string_representation

			result_payload := task.get_by_id(task_id.to_natural).representation

			set_json_header_ok(res, result_payload.count)
			res.put_string (result_payload)
		end

	edit(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload: STRING
			parser: JSON_PARSER
			j_obj: JSON_OBJECT
		do
			create payload.make_empty
			req.read_input_data_into(payload)
			create parser.make_parser(payload)

			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then
				j_obj := j_object
				task.update_fields(j_obj)
			end
		end
end
