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

	new(name: STRING start_time: STRING end_time: STRING)
		do
			create db_insert_statement.make ("INSERT INTO projects(name, start_time, end_time) VALUES ('" + name + "', '" + start_time + "', '" + end_time + "');", db);

			db_insert_statement.execute

			if db_insert_statement.has_error then
				print("Error while inserting a new project")
			end
		end
end
