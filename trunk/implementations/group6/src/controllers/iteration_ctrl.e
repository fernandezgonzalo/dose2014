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
			create j_obj.make

				-- Check if the project name is valid
			if (l_project = VOID) OR l_project.is_empty OR (l_project.count > 40) then

					--project name not valid. sending back an error message
				j_obj.put (create {JSON_STRING}.make_json ("Project name not valid."), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)

			elseif (not my_db.check_project_name (l_project)) then

					-- PROJECT not present into the database. Sending back an error message
				j_obj.put (create {JSON_STRING}.make_json ("Project not present into the database."), create {JSON_STRING}.make_json ("error"))
				l_result_payload.extend (j_obj)
				set_json_header (res, 401, l_result_payload.representation.count)

			else

				j_obj.put (create {JSON_STRING}.make_json ("Iterationsof the project " + l_project), create {JSON_STRING}.make_json ("success"))
				j_obj.put (my_db.get_all_project_iterations (l_project), create {JSON_STRING}.make_json ("iterations"))
				l_result_payload.extend (j_obj)

				set_json_header_ok (res, l_result_payload.representation.count)
			end

				-- add the message to the response
			res.put_string (l_result_payload.representation)
		end

	create_iteration(req: WSF_REQUEST; res: WSF_RESPONSE)
			--creates a new iteration in respect to a specified project; project's name is expected
			--to be part of the request payload
		local
				l_payload, l_project: STRING
				parser: JSON_PARSER
				l_result: JSON_OBJECT
				l_iteration_data: TUPLE[number: STRING; name: STRING]
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
					l_result.put (create {JSON_STRING}.make_json ("Project name not valid."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

					-- checking if the PROJECT exists into the database
				elseif my_db.check_project_name (l_project) then

						--create the new iteration
					l_iteration_data := my_db.add_iteration(l_project)

					l_result.put (create {JSON_STRING}.make_json ("Iteration " + l_iteration_data.number.out + " for project " + l_project + " sucessfully created."), create {JSON_STRING}.make_json ("success"))
					l_result.put (create {JSON_STRING}.make_json (l_iteration_data.number), create {JSON_STRING}.make_json ("iteration_number"))
					l_result.put (create {JSON_STRING}.make_json (l_iteration_data.name), create {JSON_STRING}.make_json ("title"))


					set_json_header_ok (res, l_result.representation.count)


				else
						-- PROJECT not present into the database. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("Project not present into the database."), create {JSON_STRING}.make_json ("error"))
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

					if attached {JSON_STRING} j_object.item ("iteration_number") as s then
						l_number := s.item.to_integer
					end

				end

					--create the result object
				create l_result.make


				if  (l_project = VOID) OR l_project.is_empty OR (l_project.count > 40) then

						-- PROJECT name not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("Project name not valid."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				elseif (l_number < 0) then

						-- ITERATION NUMBER not valid. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("Iteration number not valid."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				elseif (l_number = 0) then

						-- cannot delete the special BACKLOG iteration. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("Cannot delete a BACKLOG iteration."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)


					-- checking if the PROJECT exists into the database
				elseif (not my_db.check_project_name (l_project)) then

						-- PROJECT not present into the database. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("Project not present into the database."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				elseif (not my_db.check_iteration (l_number, l_project)) then

						-- PROJECT not present into the database. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("Iteration not present into the database."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				elseif (not my_db.is_iteration_empty (l_project, l_number)) then

						-- PROJECT not present into the database. Sending back an error message
					l_result.put (create {JSON_STRING}.make_json ("Iteration is not empty."), create {JSON_STRING}.make_json ("error"))
					set_json_header (res, 401, l_result.representation.count)

				else
						--delete the iteration
					my_db.remove_iteration (l_project, l_number)

					l_result.put (create {JSON_STRING}.make_json ("Iteration " + l_number.out + " removed from project." + l_project + " successfully."), create {JSON_STRING}.make_json ("success"))
					set_json_header_ok (res, l_result.representation.count)

				end
					-- sending back the result
				res.put_string (l_result.representation)

			end

end
