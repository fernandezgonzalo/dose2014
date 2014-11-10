note
	description: "Summary description for {PROJECT_DB}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PROJECT_DB

inherit
	CASD_DB

create
	make

feature -- Data access

	projects: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a project
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Projects;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 3, Result))

		end

	add_project (a_name: STRING; a_status: STRING; a_description: STRING; a_mpps: INTEGER; a_userId: INTEGER)
			-- adds a new project
		do
			create db_insert_statement.make ("INSERT INTO Projects(name,status,description,maxPointPerSprint,userId) VALUES ('" + a_name + "', '" + a_status + "', '" + a_description + "', '" + a_mpps.out + a_userId.out + "');", db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new user")
			end
		end

	add_project_t (a_name: STRING; a_status: STRING; a_description: STRING; a_mpps: INTEGER; a_userId: INTEGER): JSON_OBJECT
			-- adds a new todo with the given description for the given userid
			-- returns a json object that contains the properties "todoId, description, userId, name" for the newly added todo
		local
			l_new_id: INTEGER_64
		do
				-- create the result object, in this case an empty JSON_OBJECT
			create Result.make
				-- construct the insert statement based on the provided arguments
			create db_insert_statement.make ("INSERT INTO Projects(name,status,description,maxPointPerSprint,userId) VALUES ('" + a_name + "', '" + a_status + "', '" + a_description + "', '" + a_mpps.out + a_userId.out + "');", db)
				-- execute the statement
			db_insert_statement.execute

			if db_insert_statement.has_error then
				print("Error while inserting a new Todo")
				-- TODO: should have more error handling here, e.g. have a return value set to false
			else
					-- get the id of the row that was added to the Todos table
				l_new_id := db_insert_statement.last_row_id

				-- fetch the entry from the database
				create db_query_statement.make("SELECT t.id as todoId, t.description, t.userId, u.name FROM Todos as t, Users as u WHERE t.userId = u.id AND t.id = " + l_new_id.out + ";", db)
				db_query_statement.execute (agent row_to_json_object(?, 4, Result))

			end


		end




end
