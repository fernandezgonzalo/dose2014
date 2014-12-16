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
	new(email: STRING password: STRING name: STRING)
		do
			create db_insert_statement.make ("INSERT INTO users(email, password, name) VALUES ('"
			    + email + "', '" + password + "', '" + name + "');", db);

			db_insert_statement.execute

			if db_insert_statement.has_error then
				print("Error while inserting a new user")
			end
		end

end

