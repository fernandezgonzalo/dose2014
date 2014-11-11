note
	description: "Handlers for everything that concerns users."
	author: "Guido Giovannini"

class
	USER

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

	name: STRING
	lastname: STRING
	email: STRING
	password: STRING
	rol: INTEGER
	active: INTEGER

feature -- Handlers


	get_users (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- sends a reponse that contains a json array with all users
		local
			l_result_payload: STRING
		do
			l_result_payload := my_db.users.representation

			set_json_header_ok (res, l_result_payload.count)
			res.put_string (l_result_payload)
		end

end
