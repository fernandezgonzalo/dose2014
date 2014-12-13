note
	description: "Summary description for {SPRINT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SPRINT
inherit
	DB_MAPPER_BASE
create
	make
feature

	new(name: STRING; start_time: STRING; end_time: STRING; project_id: STRING)
		do
			create db_insert_statement.make ("INSERT INTO sprints(name, start_time, end_time, projectId) VALUES ('" + name + "', '" + start_time + "', '" + end_time + "', '" + project_id +"');", db);

			db_insert_statement.execute

			if db_insert_statement.has_error then
				print("Error while inserting a new sprint")
			end
		end

	by_project(project_id: STRING): JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make("select * from sprints JOIN ProjectToSprints ON ProjectToSprints.sprintId = sprints.id WHERE ProjectToSprints.projectId = " + project_id + ";" , db)

			db_query_statement.execute(agent rows_to_json_array(?, 4, Result))
		end
end
