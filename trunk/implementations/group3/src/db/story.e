note
	description: "Summary description for {STORY}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	STORY
inherit
	DB_MAPPER_BASE
create
	make
feature

	new(name: STRING; sprint_id: STRING)
		do
			create db_insert_statement.make ("INSERT INTO stories(name, sprintId) VALUES ('" + name + "', '" + sprint_id +"');", db);

			db_insert_statement.execute

			if db_insert_statement.has_error then
				print("Error while inserting a new story")
			end
		end

	by_sprint(sprint_id: STRING): JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make("select * from stories WHERE sprintId = " + sprint_id + ";" , db)

			db_query_statement.execute(agent rows_to_json_array(?, 4, Result))
		end
end
