note
	description: "Summary description for {USER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COMMENTS
inherit
	DB_MAPPER_BASE
create
	make
feature
	new_by_ids(user_id: NATURAL; project_id: NATURAL; date: STRING; contents: STRING)
		do
			create db_insert_statement.make ("INSERT INTO " + db_table_name +
				"(contents, date, user_id, project_id)
				VALUES ('" + contents + "', '" + date + "', " +
				user_id.out + ", " + project_id.out + "));", db);
			db_insert_statement.execute

		end

feature{NONE}
	db_table_name: STRING

end

