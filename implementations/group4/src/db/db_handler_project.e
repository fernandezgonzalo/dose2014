note
	description: "Summary description for {DB_HANDLER_PROJECT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DB_HANDLER_PROJECT

inherit
	CASD_DB

create
	make

feature -- Data access

	find_all : JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a user
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Projects;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 2, Result))

		end

	find_by_id (project_id : INTEGER) : JSON_OBJECT
			-- returns a JSON_OBJECT that represents a user that corresponds to the given id
		do
			create Result.make
			create db_query_statement.make("SELECT * FROM Projects WHERE id="+ project_id.out +";" ,db)
			db_query_statement.execute (agent row_to_json_object (?, 4, Result))
		end

	add (project: PROJECT)
			-- adds a new user
		do
			create db_insert_statement.make ("INSERT INTO Projects(name,status,description,max_points_per_sprint,user_id) "+
											"VALUES ('" + project.name + "','"+ project.status +"','"+ project.description +
											"','" + project.max_points_per_sprint.out +"','"+ project.user_id.out +"');", db);
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new project")
			end
		end

	update (project_id : NATURAL; project: PROJECT)
			-- update a project
		do
			create db_modify_statement.make ("UPDATE Projects SET name = '"+ project.name +"',"+
															  "status = '"+ project.status +"',"+
															  "description = '"+ project.description +"',"+
															  "max_points_per_sprint = '"+ project.max_points_per_sprint.out +"',"+
															  "user_id = '"+ project.user_id.out +"',"+
															  "WHERE id="+ project_id.out +";" , db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating a project")
			end
		end

	remove (project_id: NATURAL)
			-- removes the project with the given id
		do
			create db_modify_statement.make ("DELETE FROM Projects WHERE id=" + project_id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a Project")
					-- TODO: we probably want to return something if there's an error
			end
		end

end
