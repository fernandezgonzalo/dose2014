note
	description: "Summary description for {USER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	USER
inherit
	DB_MAPPER_BASE
create
	make
feature
	new(name: STRING)
		do
			create db_insert_statement.make ("INSERT INTO users(name) VALUES ('" + name + "');", db);

			db_insert_statement.execute

			if db_insert_statement.has_error then
				print("Error while inserting a new user")
			end
		end

	update(user_id: NATURAL login: STRING name: STRING): JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make("SELECT * FROM users " + "SET" + "login =" + login.out + "name" + name.out + "WHERE id =" + user_id.out + ";" , db)

			db_query_statement.execute(agent rows_to_json_array(?, 4, Result))
		end
end

