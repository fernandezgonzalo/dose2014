note
	description: "Handlers for everything that concerns requirement."
	author: "Group1"

class
	REQUIREMENT

inherit

	HEADER_JSON_HELPER

	SESSION_HELPER

create
	make

feature {NONE} -- Creation

	make (a_dao: DB; a_session_manager: WSF_SESSION_MANAGER)
		do
			my_db := a_dao
		end

feature {NONE} -- Private attributes

	my_db: DB
	session_manager: WSF_SESSION_MANAGER

feature -- Handlers

	get_requeriments (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all requeriments
		local
			l_result_payload: STRING
		do
			l_result_payload := my_db.search_requirement.representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	get_a_requeriment (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with a requeriment
		local
			l_result_payload: STRING
			l_requeriment_id: STRING
		do
			l_requeriment_id := req.path_parameter ("id_requeriment").string_representation
			l_result_payload := my_db.search_a_requirement (l_requeriment_id.to_integer).representation
			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	add_requeriment (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_payload, desc, estimation, l_project_id: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			flag: BOOLEAN
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create estimation.make_empty
			create desc.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

						-- we have to convert the json string into an eiffel string
					if attached {JSON_STRING} j_object.item ("estimation") as n then
						estimation := n.unescaped_string_8
					end

					if attached {JSON_STRING} j_object.item ("desc") as d then
						desc := d.unescaped_string_8
					end
			end

			l_project_id := req.path_parameter ("id_project").string_representation
			flag := my_db.add_requirement (estimation, desc, l_project_id)

				-- create a json object that as a "Message"  property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Sprint added "), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
	end

	delete_requirement (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a response that contains a confiramtion message of a deleted requirement
		local
			l_result: JSON_OBJECT
			l_requirement_id: STRING
		do
				l_requirement_id := req.path_parameter ("id_requirement").string_representation
				my_db.remove_requirement (l_requirement_id.to_natural_8)
				create l_result.make
				l_result.put (create {JSON_STRING}.make_json ("Project removed " + l_requirement_id.out), create {JSON_STRING}.make_json ("Message"))
				set_json_header_ok(res, l_result.count)
				res.put_string(l_result.representation)
		end

	update_requiremet (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			l_payload, estimation, desc,  l_requirement_id, id_project: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
			flag: BOOLEAN
		do
			-- create emtpy string objects
			create l_payload.make_empty
			create estimation.make_empty
			create desc.make_empty


				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("estimation") as n then
					estimation := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("desc") as n then
					desc := n.unescaped_string_8
				end
				if attached {JSON_STRING} j_object.item ("id_project") as i then
					id_project := i.unescaped_string_8
				end


			end

			l_requirement_id := req.path_parameter ("id_requirement").string_representation

			flag := my_db.update_requirement (estimation, desc, id_project, l_requirement_id)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Update requirement"), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

end
