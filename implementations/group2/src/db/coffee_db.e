note
	description: "Summary description for {COFFEE_DB}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_DB

create
	make

feature {NONE}

	make (a_path_to_db_file: STRING)
			-- Creation procedure
		require
			valid_file: a_path_to_db_file /= Void and not a_path_to_db_file.is_empty
		do
			create db.make_open_read_write (a_path_to_db_file)
		end

feature {NONE} -- Format helpers

	rows_to_json_array (a_row: SQLITE_RESULT_ROW; a_num_columns: NATURAL; a_result_array: JSON_ARRAY)
			-- given the rows of a db query as input, this function turns the rows into an JSON array of JSON objects
			-- each object has as JSON keys the db's colum name and and as JSON value the db's row value
		local
			j_obj: JSON_OBJECT
			i: NATURAL
			l_key: STRING
		do
			create j_obj.make
			create l_key.make_empty
			from
				i := 1
			until
				i > a_num_columns
			loop
				l_key := a_row.column_name (i)
				l_key.to_lower
				if a_row.value (i) /= Void then
					j_obj.put (create {JSON_STRING}.make_json (a_row.string_value (i)), create{JSON_STRING}.make_json (l_key))
				end
				i := i + 1
			end
			a_result_array.extend(j_obj)
		end

	row_to_json_object (a_row: SQLITE_RESULT_ROW; a_num_columns: NATURAL; a_result_object: JSON_OBJECT)
			-- given the row of a db query as input, this function turns the row into an JSON OBJECT
			-- each object has as JSON keys the db's colum name and and as JSON value the db's row value
		local
			i: NATURAL
			l_key: STRING
		do
			from
				i := 1
			until
				i > a_row.count
			loop
				l_key := a_row.column_name (i)
				l_key.to_lower
				if a_row.value (i) /= Void then
					a_result_object.put (create {JSON_STRING}.make_json (a_row.string_value (i)), create{JSON_STRING}.make_json (l_key))
				end
				i := i + 1
			end
		end

feature -- Data access

	add_to_task(a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): TUPLE[success: BOOLEAN; id: STRING]
	local
		l_values: ARRAYED_LIST[STRING]
		current_date:DATE_TIME
	do
		create l_values.make (9)
		create current_date.make_now
		l_values.extend(get_value_from_map ("requirement_id", a_map))
		l_values.extend(get_value_from_map ("title", a_map))
		l_values.extend(get_value_from_map ("points", a_map))
		l_values.extend(get_value_from_map ("hours_estimated", a_map))
		l_values.extend(get_value_from_map ("description", a_map))
		l_values.extend(get_value_from_map ("progress", a_map))
		l_values.extend(get_value_from_map ("sprint_id", a_map))
		l_values.extend(get_value_from_map ("user_id", a_map))
		l_values.extend(current_date.out)
		create Result.default_create
		create db_insert_statement.make("Insert into task(requirement_id,title,points,hours_estimated,description,progress,sprint_id,user_id,last_modified) values(?,?,?,?,?,?,?,?,?);", db)
		db_insert_statement.execute_with_arguments (l_values)
		Result.success:= true
		Result.id := db_insert_statement.last_row_id.out
		if db_insert_statement.has_error then
			print("Error while inserting into table ")
			Result.success:= false
			Result.id:="-1"
		else
			create db_modify_statement.make ("Update task SET hours_spent=? WHERE id=?;", db)
			db_modify_statement.execute_with_arguments (<<0,Result.id>>)
			if db_modify_statement.has_error then
				print("Error while inserting into table ")
				Result.success:= false
				Result.id:="-1"
			end
		end
	end

	update_task(a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): TUPLE[success: BOOLEAN; id: STRING]
	local
		l_values: ARRAYED_LIST[STRING]
		current_date:DATE_TIME
	do
		create Result.default_create
		create l_values.make (9)
		create current_date.make_now
		l_values.extend(get_value_from_map ("requirement_id", a_map))
		l_values.extend(get_value_from_map ("title", a_map))
		l_values.extend(get_value_from_map ("points", a_map))
		l_values.extend(get_value_from_map ("hours_estimated", a_map))
		l_values.extend(get_value_from_map ("description", a_map))
		l_values.extend(get_value_from_map ("progress", a_map))
		l_values.extend(get_value_from_map ("sprint_id", a_map))
		l_values.extend(current_date.out)
		l_values.extend(get_value_from_map ("id", a_map))
		create db_modify_statement.make("Update task Set requirement_id=?,title=?,points=?,hours_estimated=?,description=?,progress=?,sprint_id=?,last_modified=? WHERE id=?;", db)
		db_modify_statement.execute_with_arguments (l_values)
		Result.success:= true
		Result.id := get_value_from_map ("id", a_map)
		if db_modify_statement.has_error then
			print("Error while updating table task")
				Result.success:= false
				Result.id:="-1"
		else
			create db_modify_statement.make ("Update task SET hours_spent=?, user_id=? WHERE id=?;", db)
			l_values.extend(get_value_from_map ("user_id", a_map))
			db_modify_statement.execute_with_arguments (<<get_value_from_map ("hours_spent", a_map),get_value_from_map ("user_id", a_map),get_value_from_map ("id", a_map)>>)
			if db_modify_statement.has_error then
				print("Error while updating table task")
				Result.success:= false
				Result.id:="-1"
			end
		end
	end

	add(a_table_name: STRING a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]) : TUPLE[success: BOOLEAN; id: STRING]
	local
		l_query: STRING
		i: INTEGER
	do
		create Result.default_create
		l_query := "INSERT INTO " + a_table_name + "("
		from
        	i := 1
        until
 	         i > a_map.keys.count
            loop
            	if i = a_map.keys.count then
            		l_query := l_query + a_map.keys.at (i)
            	else
            		l_query := l_query + a_map.keys.at (i) + ","
            	end
                i := i + 1
            end
        l_query := l_query + ") VALUES("
       	from
        	i := 1
        until
 	         i > a_map.keys.count
            loop
            	if i = a_map.keys.count then
            		l_query := l_query + "?);"
            	else
            	   	l_query := l_query + "?,"
            	end
                i := i + 1
            end

		create db_insert_statement.make(l_query, db)
		db_insert_statement.execute_with_arguments (a_map.values)
		Result.success:= true
		Result.id := db_insert_statement.last_row_id.out
		if db_insert_statement.has_error then
			print("Error while inserting into table " + a_table_name)
			Result.success:= false
			Result.id:="-1"
		end
	end

	update(a_table_name: STRING a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]) : TUPLE[success: BOOLEAN; id: STRING]
	local
		l_query: STRING
		i: INTEGER
		l_values: ARRAYED_LIST[STRING]
		l_id: STRING
	do
		create Result.default_create
		create l_values.make (0)
		l_query := "UPDATE " + a_table_name + " SET "
		create l_id.make_empty
		from
        	i := 1
        until
 	         i > a_map.keys.count
            loop
            	if not equal(a_map.keys.at (i),"id")  then
            		if i = 1 then
            			l_query := l_query + a_map.keys.at (i) + "=?"
            		else
            			l_query := l_query + ", " + a_map.keys.at (i) + "=?"
            		end
            		l_values.extend(a_map.values.at (i))
            	else
            		l_id := a_map.values.at (i)
            	end
                i := i + 1
            end
        l_query := l_query + " WHERE id=?;"

		create db_modify_statement.make(l_query, db)
		l_values.extend (l_id)
		db_modify_statement.execute_with_arguments (l_values)
		Result.success:= true
		Result.id := l_id
		if db_modify_statement.has_error then
			print("Error while updating table " + a_table_name)
			Result.success:= false
			Result.id:="-1"
		end
	end

	delete (a_table_name: STRING a_id: STRING) : TUPLE[success: BOOLEAN; id: STRING]
	do
		create Result.default_create

		create db_modify_statement.make ("DELETE FROM " + a_table_name + " WHERE id=?;", db)
		db_modify_statement.execute_with_arguments (<<a_id>>)
		Result.success:= true
		Result.id := a_id
		if db_modify_statement.has_error then
			print("Error while deleting from table " + a_table_name)
			Result.success:= false
			Result.id:="-1"
		end
	end

	get (a_table_name: STRING a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]) : JSON_OBJECT
	local
		l_id: STRING
		l_counter: INTEGER
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
	do
		create Result.make
		l_counter:=1
		across a_map.keys as k  loop
			if equal(k.item, "id")  then
				l_id:= a_map.values.at(l_counter)
			end
			l_counter:= l_counter+1
		end
		create db_query_statement.make ("SELECT * FROM " + a_table_name + " WHERE id=?;", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<l_id>>)
		if l_query_result_cursor.after then
			print("Error while quering table " + a_table_name)
			RESULT:= VOID
		else
			row_to_json_object (l_query_result_cursor.item, l_query_result_cursor.item.count, RESULT)
		end
	end

	get_user (a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]) : JSON_OBJECT
	local
		l_id: STRING
		l_counter: INTEGER
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
	do
		create Result.make
		l_counter:=1
		across a_map.keys as k  loop
			if equal(k.item, "id")  then
				l_id:= a_map.values.at(l_counter)
			end
			l_counter:= l_counter+1
		end
		create db_query_statement.make ("SELECT id,email,first_name,last_name FROM user WHERE id=?;", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<l_id>>)
		if l_query_result_cursor.after then
			print("Error while quering table user")
			RESULT:= VOID
		else
			row_to_json_object (l_query_result_cursor.item, l_query_result_cursor.item.count, RESULT)
		end
	end

	get_from_id (a_table_name: STRING a_id: STRING) : JSON_OBJECT
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
	do
		create Result.make
		create db_query_statement.make ("SELECT * FROM " + a_table_name + " WHERE id=?;", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<a_id>>)
		if l_query_result_cursor.after then
			print("Error while quering table " + a_table_name)
			RESULT:= VOID
		else
			row_to_json_object (l_query_result_cursor.item,l_query_result_cursor.item.count, RESULT)
		end
	end

	get_user_from_id (a_id: STRING) : JSON_OBJECT
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
	do
		create Result.make
		create db_query_statement.make ("SELECT id,email,first_name,last_name FROM user WHERE id=?;", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<a_id>>)
		if l_query_result_cursor.after then
			print("Error while quering table user")
			RESULT:= VOID
		else
			row_to_json_object (l_query_result_cursor.item,l_query_result_cursor.item.count, RESULT)
		end
	end

	get_current_sprint (a_project_id : STRING) : JSON_OBJECT
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		l_current_date: DATE
	do
		create Result.make
		create l_current_date.make_now
		create db_query_statement.make ("SELECT * FROM sprint WHERE start_date <=? AND end_date >=? AND project_id=?;", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<l_current_date.out, l_current_date.out,a_project_id>>)
		if l_query_result_cursor.after then
			print("Error while quering table sprint")
			RESULT:= VOID
		else
			row_to_json_object (l_query_result_cursor.item,l_query_result_cursor.item.count, RESULT)
		end
	end

	is_sprint_overlapping(a_start_date, a_end_date: DATE a_project_id: STRING): BOOLEAN
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
	do
 		create Result
		create db_query_statement.make ("SELECT * FROM sprint WHERE project_id=? AND ((start_date>? AND end_date<?) OR (start_date<? AND end_date>?) OR (start_date<? AND end_date>?));", db)
		l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_project_id, a_start_date.out, a_end_date.out, a_start_date.out, a_start_date.out, a_end_date.out, a_end_date.out>>)
		if l_query_result_cursor.after then
			Result := False
		else
			Result := True
		end
	end

	get_all(a_table_name: STRING a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]) : JSON_ARRAY
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		l_query: STRING
		i: INTEGER
	do
		create Result.make_array
		if a_map.keys.count > 0 then
			l_query := "SELECT * FROM " + a_table_name + " WHERE "
		from
	        i := 1
	        until
	 	         i > a_map.keys.count
	            loop
	            	if i = a_map.keys.count then
	            		l_query := l_query + a_map.keys.at (i) + "=?;"
	            	else
	            		l_query := l_query + a_map.keys.at (i) + "=? and "
	            	end
	                i := i + 1
	            end
	    l_query  := l_query + ";"
	  	create db_query_statement.make (l_query, db)
	  	l_query_result_cursor:= db_query_statement.execute_new_with_arguments (a_map.values)
		else
			l_query := "SELECT * FROM " + a_table_name + ";"
			create db_query_statement.make (l_query, db)
			l_query_result_cursor:= db_query_statement.execute_new
		end
		from
			i:= 1
		until
			i=2
		loop
			if not l_query_result_cursor.after then
				rows_to_json_array (l_query_result_cursor.item, l_query_result_cursor.item.count, RESULT)
				l_query_result_cursor.forth
			else
				i:=2
			end
		end
	end

	get_all_from_project(a_user_id: STRING): JSON_ARRAY
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		i: INTEGER
	do
		create Result.make_array
		create db_query_statement.make ("SELECT project.id,project.name,project.description, project.manager_id FROM project,developer_mapping WHERE developer_mapping.user_id=? and developer_mapping.project_id=project.id;", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<a_user_id>>)
		from
			i:= 1
		until
			i=2
		loop
			if not l_query_result_cursor.after then
				rows_to_json_array (l_query_result_cursor.item, l_query_result_cursor.item.count, RESULT)
				l_query_result_cursor.forth
			else
				i:=2
			end
		end
	end

	get_all_users: JSON_ARRAY
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		i: INTEGER
	do
		create Result.make_array
		create db_query_statement.make ("SELECT id, email, first_name, last_name FROM User;", db)
		l_query_result_cursor:= db_query_statement.execute_new
		from
			i:= 1
		until
			i=2
		loop
			if not l_query_result_cursor.after then
				rows_to_json_array (l_query_result_cursor.item, l_query_result_cursor.item.count, RESULT)
				l_query_result_cursor.forth
			else
				i:=2
			end
		end
	end

	delete_user_from_project(a_user_id: STRING a_project_id: STRING): TUPLE[success: BOOLEAN; id: STRING]
	do
		create Result.default_create
		create db_modify_statement.make ("DELETE FROM developer_mapping WHERE user_id=? and project_id=?;", db)
		db_modify_statement.execute_with_arguments (<<a_user_id, a_project_id>>)
		Result.success:= true
		Result.id := a_user_id
		if db_modify_statement.has_error then
			print("Error while deleting from table developer_mapping")
			Result.success:= false
			Result.id:="-1"
		end

	end

	get_recent_changes (a_project_id:STRING): JSON_ARRAY
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		i:INTEGER
	do
			-- create a result object
 		create Result.make_array
		create db_query_statement.make ("SELECT task.* FROM task,requirement WHERE requirement.project_id = ? AND requirement.id=task.requirement_id ORDER BY last_modified DESC LIMIT 20;", db)
		l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_project_id>>)
		from
			i:= 1
		until
			i=2
		loop
			if not l_query_result_cursor.after then
				rows_to_json_array (l_query_result_cursor.item, l_query_result_cursor.item.count, RESULT)
				l_query_result_cursor.forth
			else
				i:=2
			end
		end
	end

	get_previous_sprints (a_project_id:STRING): JSON_ARRAY
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		i:INTEGER
		current_date: DATE
	do
			-- create a result object
 		create Result.make_array
 		create current_date.make_now
		create db_query_statement.make ("SELECT * FROM sprint WHERE project_id = ? AND end_date<? ORDER BY end_date ASC;", db)
		l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_project_id,current_date.out>>)
		from
			i:= 1
		until
			i=2
		loop
			if not l_query_result_cursor.after then
				rows_to_json_array (l_query_result_cursor.item, l_query_result_cursor.item.count, RESULT)
				l_query_result_cursor.forth
			else
				i:=2
			end
		end
	end

	get_project_backlog(a_project_id: STRING): JSON_ARRAY
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		i: INTEGER
	do
		create Result.make_array
		on_finish_sprint(a_project_id)
		create db_query_statement.make ("SELECT task.* FROM task,sprint,requirement WHERE task.requirement_id=requirement.id AND requirement.project_id=? AND (task.sprint_id=null or task.sprint_id=0) AND task.progress <> 'Completed';", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<a_project_id>>)
		from
			i:= 1
		until
			i=2
		loop
			if not l_query_result_cursor.after then
				rows_to_json_array (l_query_result_cursor.item, l_query_result_cursor.item.count, RESULT)
				l_query_result_cursor.forth
			else
				i:=2
			end
		end
	end

	on_finish_sprint (a_project_id: STRING)
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		l_json_object: JSON_OBJECT
		i: INTEGER
		l_sprint_id: STRING
		l_now: DATE
	do
		create l_json_object.make
		create l_now.make_now
		create db_query_statement.make ("SELECT id FROM sprint WHERE end_date < ? AND project_id=?;", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<l_now.out, a_project_id>>)
		from
			i:= 1
		until
			i=2
		loop
			if not l_query_result_cursor.after then
				row_to_json_object (l_query_result_cursor.item, l_query_result_cursor.item.count, l_json_object)
				if l_json_object.has_key ("id") then
					l_sprint_id:= l_json_object.item ("id").representation
					l_sprint_id.replace_substring_all ("%"","")
					create db_modify_statement.make("UPDATE task SET sprint_id=null WHERE sprint_id=? AND progress <> 'Completed';", db)
					db_modify_statement.execute_with_arguments (<<l_sprint_id>>)
				end
				l_query_result_cursor.forth
			else
				i:=2
			end
		end
		mark_req_completed (a_project_id)
	end

	mark_req_completed (a_project_id: STRING)
	local
		l_query_result_cursor, l_query_result_cursor1: SQLITE_STATEMENT_ITERATION_CURSOR
		l_json_object: JSON_OBJECT
		i: INTEGER
		l_req_id: STRING
		l_task_count: INTEGER
	do
		create l_json_object.make
		create db_query_statement.make ("SELECT id FROM requirement WHERE project_id=?;", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<a_project_id>>)
		from
			i:= 1
		until
			i=2
		loop
			if not l_query_result_cursor.after then
				row_to_json_object (l_query_result_cursor.item, l_query_result_cursor.item.count, l_json_object)
				if l_json_object.has_key ("id") then
					l_req_id:= l_json_object.item ("id").representation
					l_req_id.replace_substring_all ("%"","")
					create db_query_statement.make("SELECT * FROM task WHERE requirement_id=? AND progress <> 'Completed';", db)
					l_query_result_cursor1:= db_query_statement.execute_new_with_arguments (<<l_req_id>>)
					l_task_count:= get_count_of_task (l_req_id)
					if l_query_result_cursor1.after and l_task_count>0 then
						create db_modify_statement.make("UPDATE requirement SET completed=true WHERE id=?;", db)
						db_modify_statement.execute_with_arguments (<<l_req_id>>)
					end
				end
				l_query_result_cursor.forth
			else
				i:=2
			end
		end
	end

	get_count_of_task(a_req_id: STRING): INTEGER
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		l_json_object: JSON_OBJECT
		temp: STRING
	do
		Result:=0
		create l_json_object.make
		create db_query_statement.make ("SELECT Count(*) FROM task WHERE requirement_id=?;", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<a_req_id>>)
		if not l_query_result_cursor.after then
			row_to_json_object (l_query_result_cursor.item, l_query_result_cursor.item.count, l_json_object)
				if l_json_object.has_key ("count(*)") then
					temp:= l_json_object.item ("count(*)").representation
					temp.replace_substring_all ("%"","")
					Result:=temp.to_integer
				end
		end
	end

	add_user (a_email: STRING a_password: STRING a_first_name: STRING a_last_name: STRING) : BOOLEAN
			-- adds a new user with the given user name
		do
			create db_insert_statement.make ("INSERT INTO User(email,password,first_name,last_name) VALUES ('" + a_email + "', '" + a_password + "', '" + a_first_name + "', '" + a_last_name + "');", db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting a new user")
				Result := false
			end
			Result := true
		end

	is_dev_in_project(a_user_id: STRING a_project_id: STRING): BOOLEAN
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
	do
			-- create a result object
 		create Result
		create db_query_statement.make ("SELECT * FROM developer_mapping WHERE user_id=? AND project_id=?;", db)
		l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_user_id, a_project_id>>)
		if l_query_result_cursor.after then
			Result := False
		else
			Result := True
		end
	end

	get_users_ranking(a_project_id: STRING): JSON_ARRAY
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		i:INTEGER
	do
			-- create a result object
 		create Result.make_array
		create db_query_statement.make ("SELECT user.id, user.first_name, user.last_name, user.email, developer_mapping.points FROM user, developer_mapping WHERE developer_mapping.user_id = user.id AND developer_mapping.project_id=? ORDER BY developer_mapping.points DESC;", db)
		l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_project_id>>)
		from
			i:= 1
		until
			i=2
		loop
			if not l_query_result_cursor.after then
				rows_to_json_array (l_query_result_cursor.item, l_query_result_cursor.item.count, RESULT)
				l_query_result_cursor.forth
			else
				i:=2
			end
		end
	end

	get_users_from_project(a_project_id: STRING): JSON_ARRAY
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		i:INTEGER
	do
			-- create a result object
 		create Result.make_array
		create db_query_statement.make ("SELECT user.id, user.first_name, user.last_name, user.email FROM user, developer_mapping WHERE developer_mapping.user_id = user.id AND developer_mapping.project_id = ?;", db)
		l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_project_id>>)
		from
			i:= 1
		until
			i=2
		loop
			if not l_query_result_cursor.after then
				rows_to_json_array (l_query_result_cursor.item, l_query_result_cursor.item.count, RESULT)
				l_query_result_cursor.forth
			else
				i:=2
			end
		end
	end

	get_tasks_from_sprint(a_sprint_id: STRING): JSON_ARRAY
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		i:INTEGER
	do
			-- create a result object
 		create Result.make_array
		create db_query_statement.make ("SELECT * FROM task WHERE sprint_id = ?;", db)
		l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_sprint_id>>)
		from
			i:= 1
		until
			i=2
		loop
			if not l_query_result_cursor.after then
				rows_to_json_array (l_query_result_cursor.item, l_query_result_cursor.item.count, RESULT)
				l_query_result_cursor.forth
			else
				i:=2
			end
		end
	end

	is_task_from_req_in_sprint(a_req_id: STRING): BOOLEAN
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		l_json_object: JSON_OBJECT
		i: INTEGER
		l_sprint_id: STRING
	do
		create l_json_object.make
		create db_query_statement.make ("SELECT * FROM task WHERE requirement_id=?;", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<a_req_id>>)
		Result:=False
		from
			i:= 1
		until
			i=2
		loop
			if not l_query_result_cursor.after then
				row_to_json_object (l_query_result_cursor.item, l_query_result_cursor.item.count, l_json_object)
				if l_json_object.has_key ("sprint_id") then
					l_sprint_id:= l_json_object.item ("sprint_id").representation
					l_sprint_id.replace_substring_all ("%"","")
					if l_sprint_id.to_integer > 0 then
						Result:=True
					end
				end
				l_query_result_cursor.forth
			else
				i:=2
			end
		end
	end

	get_task_progress(a_project_id: STRING): JSON_OBJECT
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		l_json_object: JSON_OBJECT
		percentage: INTEGER
		temp: STRING
		l_completed_tasks, l_tasks: INTEGER
	do
		create l_json_object.make
		create Result.make
		create db_query_statement.make ("SELECT COUNT(*) FROM task, requirement WHERE task.requirement_id=requirement.id AND requirement.project_id=?;", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<a_project_id>>)
		if not l_query_result_cursor.after then
			row_to_json_object (l_query_result_cursor.item, l_query_result_cursor.item.count, l_json_object)
				if l_json_object.has_key ("count(*)") then
					temp:= l_json_object.item ("count(*)").representation
					temp.replace_substring_all ("%"","")
					l_tasks:=temp.to_integer
				end
		end
		create db_query_statement.make ("SELECT COUNT(*) FROM task, requirement WHERE task.requirement_id=requirement.id AND requirement.project_id=? AND task.progress='Completed';", db)
		l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<a_project_id>>)
		if not l_query_result_cursor.after then
			l_json_object.put (create {JSON_STRING}.make_json (l_query_result_cursor.item.string_value (1)), create{JSON_STRING}.make_json ("completed"))
			temp:= l_json_object.item ("completed").representation
			temp.replace_substring_all ("%"","")
			l_completed_tasks:=temp.to_integer
		end
		if l_tasks>0 then
			percentage:=((l_completed_tasks*100)//(l_tasks*100))
		else
			percentage:= 0
		end
		Result.put (create {JSON_STRING}.make_json (percentage.out), create{JSON_STRING}.make_json ("progress_percentage"))

	end

	get_project_id_of_req (a_req_id:STRING) : STRING
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		l_json_object:JSON_OBJECT
	do
		create l_json_object.make
		create db_query_statement.make ("SELECT project_id FROM requirement WHERE id=?;", db)
		l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_req_id>>)
		Result:=""
		if not l_query_result_cursor.after then
			row_to_json_object (l_query_result_cursor.item, l_query_result_cursor.item.count, l_json_object)
			if l_json_object.has_key ("project_id") then
				Result:= l_json_object.item ("project_id").representation
				Result.replace_substring_all ("%"","")
			end
		end
	end

	get_project_id_of_sprint (a_sprint_id:STRING) : STRING
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		l_json_object:JSON_OBJECT
	do
		create l_json_object.make
		create db_query_statement.make ("SELECT project_id FROM sprint WHERE id=?;", db)
		l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_sprint_id>>)
		Result:=""
		if not l_query_result_cursor.after then
			row_to_json_object (l_query_result_cursor.item, l_query_result_cursor.item.count, l_json_object)
			if l_json_object.has_key ("project_id") then
				Result:= l_json_object.item ("project_id").representation
				Result.replace_substring_all ("%"","")
			end
		end
	end

	get_project_id_of_task (a_task_id:STRING) : STRING
	local
		l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		l_json_object:JSON_OBJECT
	do
		create l_json_object.make
		create db_query_statement.make ("SELECT requirement.project_id FROM requirement, task WHERE requirement.id=task.requirement_id AND task.id=?;", db)
		l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_task_id>>)
		Result:=""
		if not l_query_result_cursor.after then
			row_to_json_object (l_query_result_cursor.item, l_query_result_cursor.item.count, l_json_object)
			if l_json_object.has_key ("project_id") then
				Result:= l_json_object.item ("project_id").representation
				Result.replace_substring_all ("%"","")
			end
		end
	end

	has_user_with_password (a_user_name, a_password: STRING): TUPLE[has_user: BOOLEAN; id: STRING; username: STRING]
			-- checks if a user with given username and password exists
			-- if yes, the result tuple value "has_user" will be true and "id" and "username" will be set
			-- otherwise, "has_user" will be false and "id" and "username" will not be set
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			hash: SHA256
		do
				-- create a result object
 			create Result
 			create hash.make
			create db_query_statement.make ("SELECT * FROM User WHERE email=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_user_name>>)

			if l_query_result_cursor.after then
					-- there are no rows in the result of the query, thus no user with that password exits
				print("Did not find a user with name '" + a_user_name  + "' and password '" + a_password + "' in the dataase.%N")
				Result.has_user := False
			else
				hash.update_from_string (a_password + l_query_result_cursor.item.value (4).out)
 				if equal(hash.digest_as_string,l_query_result_cursor.item.value (3).out) then
					print("Found a user name '" + a_user_name + "' and password '" + a_password + "' in the database.%N")
					Result.has_user := True
					Result.id := l_query_result_cursor.item.value (1).out
					Result.username := l_query_result_cursor.item.value (2).out
				else
					Result.has_user := False
				end
			end
		end



feature {NONE}

	db: SQLITE_DATABASE
		-- the database

	db_query_statement: SQLITE_QUERY_STATEMENT
		-- an sql query statement for the db

	db_insert_statement: SQLITE_INSERT_STATEMENT
		-- an sql insert statement for the db

	db_modify_statement: SQLITE_MODIFY_STATEMENT
		-- other sql modification statment for the db, e.g. DELETE

	get_value_from_map(a_key: STRING a_map: TUPLE [keys: ARRAYED_LIST[STRING]; values: ARRAYED_LIST[STRING]]): STRING
	local
		i: INTEGER
	do
		create Result.make_empty
		from
			i:= 1
		until
			i>a_map.keys.count
		loop
			if equal(a_key, a_map.keys.at (i)) then
				Result := a_map.values.at (i)
			end
			i:= i+1
		end

	end

end
