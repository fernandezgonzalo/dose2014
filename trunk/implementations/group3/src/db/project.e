note
	description: "Summary description for {PROJECT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"
class
	PROJECT
inherit
	DB_MAPPER_BASE
create
	make
feature
	get_all: JSON_ARRAY
			do
				create Result.make_array
				create db_query_statement.make ("SELECT * FROM projects;" , db)

				db_query_statement.execute (agent rows_to_json_array (?, 4, Result))
			end

	new(name: STRING)
		do
			create db_insert_statement.make ("INSERT INTO projects(name) VALUES ('" + name + "');", db);

			db_insert_statement.execute

			if db_insert_statement.has_error then
				print("Error while inserting a new user")
			end
		end

	delete(project_id: NATURAL)
		do
			create db_modify_statement.make ("DELETE FROM projects WHERE id=" + project_id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting a Project")
			end
		end

	find(project_id: NATURAL): JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make("SELECT * FROM projects WHERE id =" + project_id.out + ";" , db)

			db_query_statement.execute(agent rows_to_json_array(?, 4, Result))
		end

	update(project_id: NATURAL): JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make("UPDATE projects WHERE id =" + project_id.out + "SET" + ";" , db)

			db_query_statement.execute(agent rows_to_json_array(?, 4, Result))
		end
end
