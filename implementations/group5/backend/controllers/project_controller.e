note
	description: "Handlers for everything that concerns projects."
	author: "Heredia Joaquin"
	date: "11/13/2014"
	revision: "0.01"

class
	PROJECT_CONTROLLER

inherit
	DEMO_HEADER_JSON_HELPER

create
	make

feature {NONE} -- Creation

	make (a_dao: CRUD_PROJECT)
		do
			my_crud_project := a_dao
		end


feature {NONE} -- Private attributes

	my_crud_project: CRUD_PROJECT

feature -- Handlers

	get_projects (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all users
		local
			l_result_payload: STRING
		do
			l_result_payload := my_crud_project.projects.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

	get_project_by_id (req: WSF_REQUEST; res: WSF_RESPONSE)

		local
			l_id: STRING
			l_result: JSON_OBJECT

		do
			-- create emtpy string objects
			create l_id.make_empty

			-- assign the path parameter "id" to the l_id field

			l_id := req.path_parameter ("id").string_representation

			-- transform the string "id" to natural
			l_result := my_crud_project.project_by_id (l_id.to_natural)

			set_json_header_ok (res, l_result.representation.count)
			res.put_string (l_result.representation)

		end

end
