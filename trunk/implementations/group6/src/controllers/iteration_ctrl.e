note
	description: "Handlers for everything that concerns iterations"
	author: "Nicolò Gallo peozzi"
	date: "$Date$"
	revision: "$Revision$"

class
	ITERATION_CTRL

inherit
	DEMO_HEADER_JSON_HELPER

create
	make

feature {NONE} --creation

	make (a_dao: DEMO_DB)
		do
			my_db := a_dao
		end

feature {NONE} --private attributes

	my_db: DEMO_DB

feature --handlers

	get_all_project_iterations(req: WSF_REQUEST; res: WSF_RESPONSE)
			--gets all the iterations of a specified project; project's name is expected to be part of the request payload
		local
			l_payload, l_project: STRING
			j_obj: JSON_OBJECT
			l_result_payload: JSON_ARRAY
			parser: JSON_PARSER
		do

				-- create empty string objects
			create l_payload.make_empty
			create l_project.make_empty

				-- Receive the name of the project
				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)
				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the user email
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("project_name") as s then
					l_project := s.unescaped_string_8
				end
			end

				-- create the result json array
			create l_result_payload.make_array

				-- Check if the project name is valid
			if (l_project = VOID) OR l_project.is_empty OR (l_project.count > 40) OR (not my_db.check_project_name (l_project)) then

					--project name not valid. sending back an error message
				j_obj.put (create {JSON_STRING}.make_json ("ERROR: project name not valid."), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)

			else
					-- Get from the database a list of all the iterations of the project
				l_result_payload := (my_db.get_all_project_iterations (l_project))

				j_obj.put (create {JSON_STRING}.make_json ("List of all project's iterations successfully found."), create {JSON_STRING}.make_json ("success"))
				l_result_payload.extend (j_obj)
				set_json_header_ok (res, l_result_payload.representation.count)
			end

				-- add the message to the response response
			res.put_string (l_result_payload.representation)
		end

	create_iteration(req: WSF_REQUEST; res: WSF_RESPONSE)
			--creates a new iteration in respect to a specified project; project's name is expected
			--to be part of the request payload
		local
				l_payload, l_project: STRING
				parser: JSON_PARSER
				l_result: JSON_OBJECT
			do
					-- create emtpy string objects
				create l_payload.make_empty
				create l_project.make_empty

					-- read the payload from the request and store it in the string
				req.read_input_data_into (l_payload)

					-- now parse the json object that we got as part of the payload
				create parser.make_parser (l_payload)

					-- if the parsing was successful and we have a json object, we fetch the properties
					-- for the todo description and the userId
				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

						-- we have to convert the json string into an eiffel string
					if attached {JSON_STRING} j_object.item ("project_name") as s then
						l_project := s.unescaped_string_8
					end

				end

					--create the result object
				create l_result.make


				if  (l_project = VOID) OR l_project.is_empty OR (l_project.count > 40) then

						-- PROJECT name not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("ERROR: project name not valid. New iteration was not created."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

					-- checking if the PROJECT exists into the database
				elseif my_db.check_project_name (l_project) then

						--create the new iteration
					my_db.add_iteration(l_project)

					l_result.put (create {JSON_STRING}.make_json ("New iteration for project " + l_project + " sucessfully created."), create {JSON_STRING}.make_json ("success"))
					set_json_header_ok (res, l_result.representation.count)

				else
						-- PROJECT not present into the database. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("ERROR: project not present into the database. New iteration was not created."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				end

					-- sending back the result
				res.put_string (l_result.representation)

			end

	delete_iteration(req: WSF_REQUEST; res: WSF_RESPONSE)
			--deletes an iteration from the database; project's name and iteration's number are expected to be part of
			--the request paylod

		local
				l_payload, l_project: STRING
				l_number: INTEGER
				parser: JSON_PARSER
				l_result: JSON_OBJECT
			do
					-- create emtpy string objects
				create l_payload.make_empty
				create l_project.make_empty

					-- read the payload from the request and store it in the string
				req.read_input_data_into (l_payload)

					-- now parse the json object that we got as part of the payload
				create parser.make_parser (l_payload)

					-- if the parsing was successful and we have a json object, we fetch the properties
					-- for the todo description and the userId
				if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

						-- we have to convert the json string into an eiffel string
					if attached {JSON_STRING} j_object.item ("project_name") as s then
						l_project := s.unescaped_string_8
					end

					if attached {JSON_NUMBER} j_object.item ("iteration_number") as s then
						l_number := s.item.to_integer
					end

				end

					--create the result object
				create l_result.make


				if  (l_project = VOID) OR l_project.is_empty OR (l_project.count > 40) then

						-- PROJECT name not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("ERROR: project name not valid. Iteration not deleted."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				elseif (l_number < 0) then

						-- ITERATION NUMBER not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("ERROR: iteration number not valid.Iteration not deleted."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				elseif (l_number = 0) then

						-- cannot delete the special BACKLOG iteration. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("ERROR: cannot delete a BACKLOG iteration.Iteration not deleted."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)


					-- checking if the PROJECT exists into the database
				elseif my_db.check_project_name (l_project) then

						--create the new iteration
					my_db.add_iteration(l_project)

					l_result.put (create {JSON_STRING}.make_json ("Iteration successfully deleted."), create {JSON_STRING}.make_json ("success"))
					set_json_header_ok (res, l_result.representation.count)

				else
						-- PROJECT not present into the database. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("ERROR: project not present into the database.Iteration not deleted."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				end

					-- sending back the result
				res.put_string (l_result.representation)

			end

end
