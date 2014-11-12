note
	description: "Summary description for {PROJECTS_CONTROLLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PROJECTS_CONTROLLER

	inherit
	DEMO_HEADER_JSON_HELPER
		-- inherit this helper to get a procedure that simplifies setting
		-- the HTTP response header correctly

create
	make

feature {NONE} -- Creation

	make (a_dao: DB)
		do
			db := a_dao
		end

feature {NONE} -- Private attributes

	db: DB


feature -- Handlers

	add_project(req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			payload, name, user_id, result_payload: STRING
			parser: JSON_PARSER
		do
				-- create string object for the buffer
			create payload.make_empty

				-- read the payload from the request and store it in the string
			req.read_input_data_into(payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser(payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item("name") as s then
					name := s.unescaped_string_8
				end

				if attached {JSON_STRING} j_object.item("userId") as n then
					user_id := n.unescaped_string_8
				end

			end


				-- add the user to the db	
			result_payload := (db.add_project(name)).representation


				-- set the header for the response
			set_json_header_ok(res, result_payload.count)
				-- set the result paylaod
			res.put_string(result_payload)
		end


	remove_project(req: WSF_REQUEST; res: WSF_RESPONSE)
			-- remove a todo from the database
		local
			project_id: STRING
			l_result: JSON_OBJECT
		do
				-- the the todo_id from the URL (as defined by the placeholder in the route)
			project_id := req.path_parameter("todo_id").string_representation
				-- remove the todo
			db.remove_project(project_id.to_natural)

				-- create a json object that as a "Message" property that states what happend (in the future, this should be a more meaningful messeage)
			create l_result.make
			l_result.put(create {JSON_STRING}.make_json ("Removed item"), create {JSON_STRING}.make_json ("Message"))

				-- set the result
			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)
		end


	get_projects(req: WSF_REQUEST; res: WSF_RESPONSE)
			-- returns a json array with all the todos currently in the database
		local

			payload: STRING
		do

			payload := db.projects.representation

				-- set the response
			set_json_header_ok(res, payload.count)
			res.put_string(payload)
		end


end

