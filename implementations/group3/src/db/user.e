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
	make_user
feature
	new(email: STRING password: STRING name: STRING)
		do
			create db_insert_statement.make ("INSERT INTO users(email, password, name) VALUES ('"
			    + email + "', '" + password + "', '" + name + "');", db);

			db_insert_statement.execute

			if db_insert_statement.has_error then
				print("Error while inserting a new user")
			end
		end

	get_by_email(email: STRING): JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make("SELECT * FROM users" + " WHERE email = '" + email + "';" , db)

			db_query_statement.execute(agent rows_to_json_array(?, 4, Result))
		end

	new_password(email: STRING) : STRING
		local
			index : INTEGER
			rand : INTEGER
		do
			create Result.make_empty
			create index
			create rand

			from index := 1
			until index = 10
			loop
				random_sequence.forth
				rand := random_sequence.item \\ 90 + 35
				Result.append_character (rand.to_character)
				index := index + 1
			end

			create db_modify_statement.make("UPDATE users SET password = '" + Result + "' WHERE email = '" + email + "';", db)
			db_modify_statement.execute
		end

	login(email: STRING password : STRING) : BOOLEAN
		local
			query_result : JSON_ARRAY
		do
			create Result
			create query_result.make_array

			create db_query_statement.make("SELECT * FROM users WHERE password = '" + password + "' AND email = '" + email + "';", db)
			db_query_statement.execute(agent rows_to_json_array(?, 4, query_result))
			if query_result.count > 0 then
				Result := true
			else
				Result := false
			end

		end


feature{NONE}
	make_user (a_db: SQLITE_DATABASE; a_table_name: STRING)
		do
			make(a_db, a_table_name)
     		create random_sequence.set_seed (100) -- for debug
		end
	random_sequence: RANDOM

end

