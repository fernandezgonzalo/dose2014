note
	description: "This class manages the database operations that concerns users."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-08$"
	revision: "$0.01$"

class
	DB_HANDLER_USER

inherit
	CASD_DB

create
	make

feature -- Data access

	find_all : JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a user
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Users;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 2, Result))

		end

	find_by_id (user_id : INTEGER) : JSON_OBJECT
			-- returns a JSON_OBJECT that represents a user that corresponds to the given id
		do
			create Result.make
			create db_query_statement.make("SELECT * FROM Users WHERE id="+ user_id.out +";" ,db)
			db_query_statement.execute (agent row_to_json_object (?, 4, Result))
		end

	add (user : USER)
			-- adds a new user
		do
			create db_insert_statement.make ("INSERT INTO Users(userName,isActive,email,password) "+
											"VALUES ('" + user.username + "','"+ user.is_active.to_integer.out +"',"+
											"'"+ user.email +"','"+ user.password +"');", db);
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new user")
			end
		end

	update (user_id : INTEGER;user: USER)
			-- update a user
		do
			create db_modify_statement.make ("UPDATE Users SET userName = '"+ user.username +"',"+
															  "email = '"+ user.email +"',"+
															  "password = '"+ user.password +"'"+
															  "WHERE id="+ user_id.out +";" , db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating a user")
			end
		end

	remove (user_id: NATURAL)
			-- removes the user with the given id
		do
			create db_modify_statement.make ("DELETE FROM Users WHERE id=" + user_id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a User")
					-- TODO: we probably want to return something if there's an error
			end
		end

end
