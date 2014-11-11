note
	description: "Handlers for everything that concerns rol projects."
	author: "Guido Giovannini"

class
	ROL_PROJECT

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


	get_rol_projects (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all rol projects
		local
			l_result_payload: STRING
		do
			l_result_payload := my_db.rol_projects.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	add_rol_project (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- adds a new users; the user_name is expected to be part of the request's payload
		local
			l_payload, type: STRING
			parser: JSON_PARSER
			l_result: JSON_OBJECT
		do
				-- create emtpy string objects
			create l_payload.make_empty
			create type.make_empty


				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("type") as n then
					type := n.unescaped_string_8
				end


			end

				-- create the user in the database
			my_db.add_rol_project (type)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put (create {JSON_STRING}.make_json ("Added rol project " + type), create {JSON_STRING}.make_json ("Message"))

				-- send the response
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end

end
