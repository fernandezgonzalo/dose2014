note
	description: "Handlers for everything that concerns users"
	author: "Nicolò Gallo peozzi"
	date: "$Date$"
	revision: "$Revision$"

class
	SEARCH_CTRL

inherit
	DEMO_HEADER_JSON_HELPER
	DEMO_SESSION_HELPER

create
	make

feature {NONE} --creation

	make (a_dao: DEMO_DB;  a_session_manager: WSF_SESSION_MANAGER)
		do
			my_db := a_dao
			session_manager := a_session_manager;
		end

feature {NONE} --private attributes

	my_db: DEMO_DB
	session_manager: WSF_SESSION_MANAGER

feature --handlers

	search_users(req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_payload, l_keyword, l_email: STRING
			parser: JSON_PARSER
			j_obj: JSON_OBJECT
			l_result: JSON_ARRAY
			l_search_result: TUPLE[success: BOOLEAN; matches: JSON_ARRAY]
		do
			create l_payload.make_empty
			create j_obj.make
    		create l_result.make_array
    		create l_search_result.default_create

				-- catching the user EMAIL from the cookie
			if req_has_cookie(req, "_session_") then
				l_email := get_session_from_req(req, "_session_").at("email").out
			end

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("keyword") as s then
					l_keyword := s.unescaped_string_8
				end
			end

			if (l_email = VOID) OR (l_email.is_empty) then

					-- user is not logged in. Sending back a error message
				j_obj.put (create {JSON_STRING}.make_json ("User not logged in."), create {JSON_STRING}.make_json ("error"))
				l_result.extend (j_obj)
				set_json_header (res, 401, l_result.representation.count)

				-- checking if te email already exists into the database
			elseif (not my_db.check_if_mail_already_present (l_email)) then

					-- EMAIL not present into the database. Sending back an error message
				j_obj.put (create {JSON_STRING}.make_json ("Email not present into the database."), create {JSON_STRING}.make_json ("error"))
				l_result.extend (j_obj)
				set_json_header (res, 401, l_result.representation.count)

			elseif (l_keyword = VOID) OR (l_keyword.is_empty) then

					-- KEYWORD not valid. Sending back an error message
				j_obj.put (create {JSON_STRING}.make_json ("Keyword ot valid."), create {JSON_STRING}.make_json ("error"))
				l_result.extend (j_obj)
				set_json_header (res, 401, l_result.representation.count)


			else

				l_search_result := my_db.search_user (l_keyword)

				if l_search_result.success then

					j_obj.put (create {JSON_STRING}.make_json ("Users has been found."), create {JSON_STRING}.make_json ("success"))
					j_obj.put (l_search_result.matches, create {JSON_STRING}.make_json ("matches"))

				else

					j_obj.put (create {JSON_STRING}.make_json ("No user has been found."), create {JSON_STRING}.make_json ("success"))

				end

				l_result.extend (j_obj)
				set_json_header_ok (res, l_result.representation.count)

			end

				-- add the message to the response
			res.put_string (l_result.representation)

		end


	search_work_items(req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_payload, l_keyword, l_email: STRING
			parser: JSON_PARSER
			j_obj: JSON_OBJECT
			l_result: JSON_ARRAY
			l_search_result: TUPLE[success: BOOLEAN; matches: JSON_ARRAY]
		do
			create l_payload.make_empty
			create j_obj.make
  			create l_result.make_array
				-- catching the user EMAIL from the cookie
			if req_has_cookie(req, "_session_") then
				l_email := get_session_from_req(req, "_session_").at("email").out
			end

				-- read the payload from the request and store it in the string
			req.read_input_data_into (l_payload)

				-- now parse the json object that we got as part of the payload
			create parser.make_parser (l_payload)

				-- if the parsing was successful and we have a json object, we fetch the properties
				-- for the todo description and the userId
			if attached {JSON_OBJECT} parser.parse as j_object and parser.is_parsed then

					-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("keyword") as s then
					l_keyword := s.unescaped_string_8
				end
			end

			if (l_email = VOID) OR (l_email.is_empty) then

					-- user is not logged in. Sending back a error message
				j_obj.put (create {JSON_STRING}.make_json ("User not logged in."), create {JSON_STRING}.make_json ("error"))
				l_result.extend (j_obj)
				set_json_header (res, 401, l_result.representation.count)

				-- checking if te email already exists into the database
			elseif (not my_db.check_if_mail_already_present (l_email)) then

					-- EMAIL not present into the database. Sending back an error message
				j_obj.put (create {JSON_STRING}.make_json ("Email not present into the database."), create {JSON_STRING}.make_json ("error"))
				l_result.extend (j_obj)
				set_json_header (res, 401, l_result.representation.count)

			elseif (l_keyword = VOID) OR (l_keyword.is_empty) then

					-- KEYWORD not valid. Sending back an error message
				j_obj.put (create {JSON_STRING}.make_json ("Keyword not valid."), create {JSON_STRING}.make_json ("error"))
				l_result.extend (j_obj)
				set_json_header (res, 401, l_result.representation.count)


			else

				l_search_result := my_db.search_work_items (l_keyword)

				if l_search_result.success then

					j_obj.put (create {JSON_STRING}.make_json ("Work Items have been found."), create {JSON_STRING}.make_json ("success"))
					j_obj.put (l_search_result.matches, create {JSON_STRING}.make_json ("matches"))

				else

					j_obj.put (create {JSON_STRING}.make_json ("No Work Item has been found."), create {JSON_STRING}.make_json ("success"))

				end

				l_result.extend (j_obj)
				set_json_header_ok (res, l_result.representation.count)

			end

				-- add the message to the response
			res.put_string (l_result.representation)

		end

end
