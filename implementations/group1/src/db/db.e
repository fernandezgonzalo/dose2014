note
	description: "This class connected provides features that query the database. Results are directly returned in JSON format."
	author: "Group1"

class
	DB

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

	rows_to_json_array (a_row: SQLITE_RESULT_ROW; a_num_columns: NATURAL; a_result_array: JSON_ARRAY): BOOLEAN
			-- given the rows of a db query as input, this function turns the rows into an JSON array of JSON objects
			-- each object has as JSON keys the db's colum name and and as JSON value the db's row value
		local
			j_obj: JSON_OBJECT
			i: NATURAL
		do
				-- create a JSON object; it will hold the values "id", "description", "user" for ech eb table entry
			create j_obj.make
			from
				i := 1
			until
				i > a_num_columns
			loop
				j_obj.put (create {JSON_STRING}.make_json (a_row.string_value (i)), create {JSON_STRING}.make_json (a_row.column_name (i)))
				i := i + 1
			end
			a_result_array.extend (j_obj)
			Result := False
		end

	row_to_json_object (a_row: SQLITE_RESULT_ROW; a_num_columns: NATURAL; a_result_object: JSON_OBJECT): BOOLEAN
			-- given the row of a db query as input, this function turns the row into an JSON OBJECT
			-- each object has as JSON keys the db's colum name and and as JSON value the db's row value
		local
			i: NATURAL
		do
			from
				i := 1
			until
				i > a_num_columns
			loop
				a_result_object.put (create {JSON_STRING}.make_json (a_row.string_value (i)), create {JSON_STRING}.make_json (a_row.column_name (i)))
				i := i + 1
			end
			Result := False
		end

feature -- Data access Users

	search_all_users: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a user
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM User;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 7, Result))
		end

	search_a_user (id: INTEGER): JSON_OBJECT
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a user
		require
			valid_id: id /= Void and id > 0
		do
			create Result.make
			create db_query_statement.make ("SELECT * FROM User WHERE id=" + id.out + ";", db)
			db_query_statement.execute (agent row_to_json_object(?, 7, Result))
		ensure
			db_query_statement /= Void
		end

	add_user (name, lastname, email, password, rol, active: STRING): BOOLEAN
			-- adds a new user
		require
			valid_parameters: email /= Void and password /= Void
		do
			create db_insert_statement.make ("INSERT INTO User(name,lastname,email,password,rol,active) VALUES ('" + name + "','" + lastname + "','" + email + "','" + password + "','" + rol + "','" + active + "');", db);
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print ("Error while inserting a new user")
				Result := False
			else
				Result := True
			end
		end

	update_user (id: NATURAL; name, lastname, password, rol, active: STRING): BOOLEAN
		require
			valid_parameter: password /= Void
		do
			create db_modify_statement.make ("UPDATE User SET name='" + name + "', lastname='" + lastname + "', password='" + password + "', rol='" + rol + "', active='" + active + "' WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				Result := False
			else
				Result := True
			end
		end

	remove_user (id: NATURAL)
			-- removes the todo with the given id
		require
			valid_id: id /= Void and id > 0
		do
			create db_modify_statement.make ("DELETE FROM User WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print ("Error while deleting a User")
			end
		end

feature -- Data access Projects

	search_all_projects: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a project
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Project;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 3, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	search_all_project_by_user (id_user: INTEGER): JSON_ARRAY
		require
			valid_id: id_user /= Void and id_user > 0
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM userproject WHERE id_user=" + id_user.out + ";", db)
			db_query_statement.execute (agent rows_to_json_array(?, 2, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	search_all_users_by_project (id_project: INTEGER): JSON_ARRAY
		require
			valid_id: id_project /= Void and id_project > 0
		do
			create Result.make_array
			create db_query_statement.make ("SELECT id_user FROM UserProject WHERE id_project=" + id_project.out + ";", db)
			db_query_statement.execute (agent rows_to_json_array(?, 1, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	search_a_project (id: INTEGER): JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a project
		require
			valid_id: id /= Void and id > 0
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Project WHERE id=" + id.out + ";", db)
			db_query_statement.execute (agent rows_to_json_array(?, 3, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	add_project (info, name: STRING)
		require
			valid_parameter: name /= Void
		do
			create db_insert_statement.make ("INSERT INTO Project(info, name) VALUES ('" + info + "','" + name + "');", db);
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print ("Error while inserting a new project")
			end
		end

	update_project (id_project: NATURAL; name, info: STRING): BOOLEAN
		require
			valid_id: id_project /= Void and id_project > 0
		do
			create db_modify_statement.make ("UPDATE Project SET name='" + name + "', info='" + info + "' WHERE id=" + id_project.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				Result := False
			else
				Result := True
			end
		end

	create_project_by_user (id_user: NATURAL; name, info: STRING): BOOLEAN
		require
			valid_id: id_user /= Void and id_user > 0
		local
			stmt_insert_project, stmt_insert_userproject: STRING
			l_id_project: INTEGER_64
		do
			stmt_insert_project := "INSERT INTO Project(info, name) VALUES ('" + info + "','" + name + "');"
			create db_insert_statement.make (stmt_insert_project, db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print ("Error while insert new project")
				Result := False
			else
				l_id_project := db_insert_statement.last_row_id
				stmt_insert_userproject := "INSERT INTO userproject(id_user, id_project) VALUES ('" + id_user.out + "', '" + l_id_project.out + "');"
				create db_insert_statement.make (stmt_insert_userproject, db)
				db_insert_statement.execute
				if db_insert_statement.has_error then
					print ("Error while insert userproject")
					Result := False
						--remove_project(l_id_project)
				else
					Result := True
				end
			end
		end

	remove_project (id: NATURAL)
			-- removes the todo with the given id
		require
			valid_id: id /= Void and id > 0
		do
			create db_modify_statement.make ("DELETE FROM Project WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print ("Error while deleting a Project")
			end
		end


feature -- Data access UserProjects

	search_all_user_projects: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a UserProject
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM UserProject;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 3, Result))
		ensure
			query_not_null: db_query_statement /=Void
		end

	search_a_user_project (id: INTEGER): JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a user project
		require
			valid_id: id /= Void and id > 0
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM UserProject WHERE id=" + id.out + ";", db)
			db_query_statement.execute (agent rows_to_json_array(?, 3, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	add_user_project (id_user, id_project, role: STRING): BOOLEAN
		-- adds a user to a project with a certain role
		require
			valid_user_id: id_user /= Void
			valid_project_id: id_project /= Void
		do
			create db_insert_statement.make ("INSERT INTO UserProject(id_user, id_project, role) VALUES ('" + id_user + "','" + id_project + "','"+role+"');", db);
			db_insert_statement.execute
			if db_insert_statement.has_error then
				result := False
			else
				result := True
			end
		end

	remove_user_project (id_user, id_project: STRING): BOOLEAN
			-- removes the todo with the given id
		require
			valid_id: id_user /= Void and id_project /= Void
		do
			create db_modify_statement.make ("DELETE FROM UserProject WHERE id_user= '" + id_user + "' and id_project = '" + id_project + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				result := False
			else
				result := True
			end
		end


feature -- Data access Sprint

	search_sprint: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a sprint
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Sprint;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 3, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	search_a_sprint (id: INTEGER): JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a sprint
		require
			valid_id: id /= Void and id > 0
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Sprint WHERE id= '" + id.out + "';", db)
			db_query_statement.execute (agent rows_to_json_array(?, 3, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	search_tasks_by_sprint (id_sprint: INTEGER): JSON_ARRAY
		require
			valid_id: id_sprint /= Void and id_sprint > 0
		do
			create Result.make_array
			create db_query_statement.make ("SELECT id FROM Task WHERE id_sprint = '"+id_sprint.out+"';", db)
			db_query_statement.execute (agent rows_to_json_array(?, 1, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	add_sprint (duration, id_project: STRING): BOOLEAN
		require
			valid_parameters: id_project /= Void and duration /= Void
		do
			create db_insert_statement.make ("INSERT INTO Sprint(duration, id_project) VALUES ('" + duration + "','" + id_project + "');", db);
			db_insert_statement.execute
			Result := True
			if db_insert_statement.has_error then
				print ("Error while inserting a new Sprint")
				Result := False
			end
		end

	remove_sprint (id: NATURAL)
			-- removes the sprint with the given id
		require
			valid_id: id /= Void and id > 0
		do
			create db_modify_statement.make ("DELETE FROM Sprint WHERE id= '" + id.out + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print ("Error while deleting a Sprint")
			end
		end

	search_project_sprints (id_project: INTEGER): JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a list of sprints of a selected project
		require
			valid_id: id_project /= Void and id_project > 0
		do
			create Result.make_array
			create db_query_statement.make ("SELECT id FROM Sprint WHERE (id_project = " + id_project.out + ");", db)
			db_query_statement.execute (agent rows_to_json_array(?, 1, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	update_sprint (id_sprint, duration: NATURAL): BOOLEAN
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a task
		require
			valid_id: id_sprint /= Void
		do
			create db_modify_statement.make ("UPDATE Sprint SET duration=" + duration.out + " WHERE id = "+id_sprint.out+" ;", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				Result := False
			else
				Result := True
			end
		end

	get_user_role (id_user, id_project: INTEGER): JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents the user's role on a determined project
		require
			valid_user_id: id_user /= Void and id_user > 0
			valid_project_id: id_project /= Void and id_project > 0
		do
			create Result.make_array
			create db_query_statement.make ("SELECT role FROM UserProject WHERE id_user = '" + id_user.out + "' AND id_project = '" + id_project.out + "';", db)
			db_query_statement.execute (agent rows_to_json_array(?, 1, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

feature -- Data access Task

	add_task (desc, comment, status, duration, points, id_user, id_requirement, id_sprint: STRING): BOOLEAN
		require
			valid_parameters: id_user /= Void and id_requirement /= Void and duration /= Void and desc /= Void and id_sprint /= Void
		do
			create db_insert_statement.make ("INSERT INTO Task(desc, comment, duration, points, status, id_user, id_requirement, id_sprint) VALUES ('" + desc.out + "','" + comment.out + "','" + duration.out + "','" + points.out + "','" + status.out + "','" + id_user.out + "','" + id_requirement.out + "','"+id_sprint.out+"');", db);
			db_insert_statement.execute
			Result := True
			if db_insert_statement.has_error then
				print ("Error while inserting a new Task")
				Result := False
			end
		end

	search_tasks: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a task
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Task;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 8, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	search_tasks_by_user (id_user: INTEGER): JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a task
		require
			valid_id: id_user /= Void and id_user > 0
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Task where id_user=" + id_user.out + ";", db)
			db_query_statement.execute (agent rows_to_json_array(?, 8, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	search_user_points_by_project (id_project: INTEGER): JSON_ARRAY
		require
			valid_id: id_project /= Void and id_project > 0
		do
			create Result.make_array
			create db_query_statement.make ("select t.id_user, u.name, u.lastname, SUM (t.points) as points from user u, task t, requirement r where r.id_project = '" + id_project.out + "' and t.id_requirement = r.id and u.id = t.id_user  group by t.id_user order by t.points desc;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 4, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	search_a_task (id: INTEGER): JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a task
		require
			valid_id: id /= Void and id > 0
		do
			create Result.make_array
			create db_query_statement.make ("SELECT id_user, name, lastname, T.id as id_task, desc, comment, duration, points, status, id_requirement, id_sprint FROM User as U JOIN (SELECT * FROM Task WHERE id=" + id.out + ") as T ON U.id = T.id_user;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 11, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	update_task (id_task, desc, comment, status, duration, points, id_user: STRING): BOOLEAN
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a task
		require
			valid_id: id_user /= Void and id_task /= Void
		do
			create db_modify_statement.make ("UPDATE Task SET desc='" + desc.out + "', comment='" + comment.out + "', duration='" + duration.out + "', points='" + points.out + "', status= '" + status.out + "', id_user= '" + id_user.out + "' WHERE id=" + id_task.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				Result := False
			else
				Result := True
			end
		end

	remove_task (id: NATURAL)
			-- removes the todo with the given id
		require
			valid_id: id /= Void and id > 0
		do
			create db_modify_statement.make ("DELETE FROM Task WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print ("Error while deleting a Task")
			end
		end

feature -- Data access Requirement

	search_requirement (id_project: STRING): JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a Requirement
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Requirement WHERE id_project = '"+id_project.out+"';", db)
			db_query_statement.execute (agent rows_to_json_array(?, 4, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	search_a_requirement (id: INTEGER): JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a Requirement
		require
			valid_id: id /= Void and id > 0
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM Requirement WHERE id=" + id.out + ";", db)
			db_query_statement.execute (agent rows_to_json_array(?, 4, Result))
		ensure
			query_not_null: db_query_statement /= Void
		end

	add_requirement (estimation, desc, id_project: STRING): BOOLEAN
		require
			valid_id: id_project /= Void
		do
			create db_insert_statement.make ("INSERT INTO Requirement(estimation, desc, id_project) VALUES ('" + estimation.out + "','" + desc.out + "','" + id_project.out + "');", db);
			db_insert_statement.execute
			Result := True
			if db_insert_statement.has_error then
				print ("Error while inserting a new Requirement")
				Result := False
			end
		end

	remove_requirement (id: NATURAL)
			-- removes the todo with the given  id
		require
			valid_id: id /= Void and id > 0
		do
			create db_modify_statement.make ("DELETE FROM Requirement WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print ("Error while deleting a Requirement")
			end
		end

	update_requirement (estimation, desc, id_project, id_requirement: STRING): BOOLEAN
		require
			valid_id: id_project /= Void and id_requirement /= Void
		do
			create db_modify_statement.make ("UPDATE Requirement SET estimation='" + estimation.out + "', desc='" + desc.out + "', id_project='" + id_project.out + "' WHERE id=" + id_requirement.out + ";", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				Result := False
			else
				Result := True
			end
		end

feature

	has_user_with_password (a_user_name, a_password: STRING): TUPLE [has_user: BOOLEAN; id: STRING; username: STRING]
			-- checks if a user with given username and password exists
			-- if yes, the result tuple value "has_user" will be true and "id" and "username" will be set
			-- otherwise, "has_user" will be false and "id" and "username" will not be set
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
				-- create a result object
			create Result
			create db_query_statement.make ("SELECT * FROM User WHERE email=? AND password=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<a_user_name, a_password>>)
			if l_query_result_cursor.after then
					-- there are no rows in the result of the query, thus no user with that password exits
				print ("Did not find a user with name '" + a_user_name + "' and password '" + a_password + "' in the database.%N")
				Result.has_user := False
			else
				print ("Found a user name '" + a_user_name + "' and password '" + a_password + "' in the database.%N")
				Result.has_user := True
				Result.id := l_query_result_cursor.item.value (1).out
				Result.username := l_query_result_cursor.item.value (4).out
			end
		end

	email_in_database (a_email: STRING): JSON_OBJECT
		require
			a_email /= Void
		local
			user: JSON_OBJECT
		do
			create user.make
			create db_query_statement.make ("SELECT * FROM User WHERE email='" + a_email + "';", db)
			db_query_statement.execute (agent row_to_json_object(?, 7, user))
			Result := user
		ensure
			user_not_null: db_query_statement /= Void
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

end
