note
	description: "This class connected provides features that query the database. Results are directly returned in JSON format."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	DEMO_DB


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
				j_obj.put (create {JSON_STRING}.make_json (a_row.string_value(i)), create{JSON_STRING}.make_json (a_row.column_name (i)))
				i := i + 1
			end

			a_result_array.extend(j_obj)

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
				a_result_object.put (create {JSON_STRING}.make_json (a_row.string_value(i)), create{JSON_STRING}.make_json (a_row.column_name (i)))
				i := i + 1
			end

			Result := False
		end


feature -- Data access : project

	add_project (a_project_name: STRING; a_user_name: STRING)
		-- add a new project in tha database
		do
			-- add the name in the project table
			create db_insert_statement.make ("INSERT INTO project VALUES ('" + a_project_name + "');", db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting new project")
			end
			-- add the name and the creator in the member table if boolean owner true
			create db_insert_statement.make ("INSERT INTO member VALUES ('" + a_user_name + "','" + a_project_name + "',1);", db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting the owner of the project")
			end
		end

	check_project_name (a_project_name: STRING) : BOOLEAN
		-- check if a given name already exist in the database: return true if the name exists
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_query_statement.make ("SELECT * from project WHERE name='" + a_project_name + "';", db)
			l_query_result_cursor := db_query_statement.execute_new
			if  l_query_result_cursor.after then
				Result := False
			else
				Result := true
			end
		end

	--TODO: Doesn't work if the user is not a member of the project
	is_owner (a_user_email: STRING; a_project_name: STRING) : BOOLEAN
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			-- check if the given email is owner of the given project
			create db_query_statement.make ("SELECT owner from member WHERE project='" + a_project_name + "'AND user='" + a_user_email + "';", db)
			l_query_result_cursor := db_query_statement.execute_new
			--l_query_result_cursor.start
			--if l_query_result_cursor.after then
				l_query_result_cursor.start
				if l_query_result_cursor.item.boolean_value (1) then
					Result := True
				else
					print(l_query_result_cursor.item.string_value (1))
					Result := False
				end
			--else
				--Result := False
			--end
		end

	is_member (a_user_email: STRING; a_project_name: STRING) : BOOLEAN
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			-- check if the given email is owner of the given project
			create db_query_statement.make ("SELECT * from member WHERE project='" + a_project_name + "'AND user='" + a_user_email + "';", db)
			l_query_result_cursor := db_query_statement.execute_new
			if l_query_result_cursor.after then
				Result := True
			else
				Result := False
			end
		end

	is_project_empty (a_project_name: STRING) : BOOLEAN
		-- check is a project is empty: return true if it is empty
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			-- check in the table iteration if some of them are related to the given name project
			create db_query_statement.make ("SELECT number, name FROM iteration WHERE project='" + a_project_name + "';", db)
			l_query_result_cursor := db_query_statement.execute_new

			if l_query_result_cursor.after then
				Result := true
			else
				Result := False
			end
		end

	has_member (a_project_name: STRING) : BOOLEAN
		--check if the given project has members
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			-- check in the table iteration if some of them are related to the given name project
			create db_query_statement.make ("SELECT user FROM member WHERE project='" + a_project_name + "';", db)
			l_query_result_cursor := db_query_statement.execute_new

			if l_query_result_cursor.after then
				Result := true
			else
				Result := False
			end
		end

	remove_project (a_project_name: STRING)
		-- remove the project from table project and member.
		-- delete on cascade in the db.
		do
			create db_modify_statement.make ("DELETE FROM project WHERE name ='"+ a_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting the project")
			end
		end

	rename_project (a_old_project_name: STRING; a_new_project_name: STRING)
		-- rename the project in all tables: project, member, iteration, work_item
		do
			create db_modify_statement.make ("UPDATE project SET name='" + a_new_project_name + "' WHERE name='" + a_old_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while changing project name")
			end
		end

	get_all_user_projects (a_user_email: STRING): JSON_ARRAY
		-- get all the projects of a specific user
		do
			-- select from member table the project of the specific user
			create Result.make_array
			create db_query_statement.make ("SELECT member.project, sum(work_item.points) as points FROM member, work_item WHERE user='" + a_user_email + "'AND member.project = work_item.project GROUP BY member.project;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 2, Result))
		end

	get_all_project_members (a_project_name: STRING): JSON_ARRAY
		-- get all the members and owners of a specific project
		do
			create Result.make_array
			create db_query_statement.make ("SELECT user FROM member WHERE project='" + a_project_name + "';", db)
			db_query_statement.execute (agent rows_to_json_array(?, 1, Result))
		end

	get_all_project_owners (a_project_name: STRING): JSON_ARRAY
		-- get all the owners of a specific project
		do
			-- call get_all_project_members and filter by owners only
			-- return them as JSON_ARRAY
			create Result.make_array
			create db_query_statement.make ("SELECT user FROM member WHERE project='" + a_project_name + "'AND owner=1;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 1, Result))
		end

	add_member_to_project (a_project_name: STRING; a_user_email: STRING; a_owner: BOOLEAN)
		-- add a member or owner in the table member
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			-- if the user is an owner check if the tuple doesn't already exist:
			create db_insert_statement.make ("INSERT INTO member(user, project, owner) VALUES(?,?,?);", db)
			l_query_result_cursor := db_insert_statement.execute_new_with_arguments (<<a_user_email, a_project_name, a_owner>>)
				-- no add a new tuple in the table

				-- yes change the boolean owner into true
		end

	remove_member_from_project (a_project_name: STRING; a_user_email: STRING)
		-- remove a member from a project in the table member
		do
			create db_modify_statement.make ("DELETE FROM member WHERE user='" + a_user_email + "' AND project='" + a_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting member")
			end
		end

	promote_owner (a_project_name, a_user_email: STRING)
		-- promote a member owner to a project
		do
			create db_modify_statement.make ("UPDATE member SET owner='1' WHERE user='" + a_user_email + "' AND project='" + a_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while promoting member")
			end
		end


feature --data access: USERS

	get_all_users: JSON_ARRAY
		--returns a JSON_ARRAY where each element is a JSON_OBJECT representing a user of the database.
		--every user is associated to:
		--	an EMAIL (primary key)
		--	a PASSWORD (hash value)
		--	a NAME
		--	a SURNAME
		--	a GENDER (true ---> MALE ; false ---> FEMALE)
		--	a ROLE
		--	a PHOTO (path to the picture or an avatar)

		do
			create Result.make_array

			create db_query_statement.make("SELECT * FROM user;" , db)

			db_query_statement.execute(agent rows_to_json_array (?, 7, Result))

		end

	check_if_mail_already_present(an_email: STRING): BOOLEAN
		--checks if there already exists a user with the given email into the database.
		--requires the EMAIl of the user
		require
			valid_email: an_email /= VOID
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_query_statement.make ("SELECT * FROM user WHERE email = ?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<an_email>>)

			if l_query_result_cursor.after then
					-- there are no rows in the result of the query, thus the email is not present into the database
				Result := False
			else
				Result := True
			end

		end

	add_user(an_email, a_password, a_name, a_surname, a_role, a_path_to_a_photo:STRING; is_male:BOOLEAN)
		--creates a new user with the specified information into the database.
		--requires:
		--	an EMAIL of the user, which must be a valid email address, and not already present into the database
		--	a PASSWORD of the user, that must be 8 characters (letters and numbers) long; an hash value of it will be stored into the database
		--	a NAME and a SURNAME of the user, that cannot be null
		--	a boolean value stating the gender of the user (true ---> MALE , false ---> FEMALE), that cannot be null
		--	a ROLE of the user, that can be possibly null
		--	a PHOTO of the user, which must be a valid path to a picture or to an avatar

		require
			valid_email: (an_email /= VOID) AND (not an_email.is_empty)
			valid_password: (a_password /= VOID) AND (a_password.count = 8)
			valid_user_name: (a_name /= VOID) AND (not a_name.is_empty)
			valid_user_surname: (a_surname /= VOID) AND (not a_surname.is_empty)
			valid_role: a_role /= VOID
			valid_photo: a_path_to_a_photo /= VOID

		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_insert_statement.make ("INSERT INTO user(email,password,name,surname,male,role,photo) VALUES (?,?,?,?,?,?,?);", db)
			l_query_result_cursor := db_insert_statement.execute_new_with_arguments (<<an_email, a_password.hash_code, a_name, a_surname, is_male, a_role, a_path_to_a_photo>>)

		end

	remove_user(an_email:STRING)
		--removes a specified user from the database.
		--requires the EMAIL address of the user who will be removed.

		require
			valid_email: (an_email/= VOID) AND (not an_email.is_empty)
		do
			create db_modify_statement.make ("DELETE FROM user WHERE email= '" + an_email + "';", db)

			db_modify_statement.execute

		end

	update_user_information(an_email, a_name, a_surname, a_role, a_path_to_a_photo:STRING;)
		--updates an existing user's information into the database.
		--requires:
		--	an EMAIL of the user, which must be a valid email address, and already present into the database
		--	a NAME and a SURNAME of the user, that cannot be null
		--	a ROLE of the user, that can be possibly null
		--	a PHOTO of the user, which must be a valid path to a picture or to an avatar

		require
			valid_email: (an_email /= VOID) AND (not an_email.is_empty)
			valid_user_name: (a_name /= VOID) AND (not a_name.is_empty)
			valid_user_surname: (a_surname /= VOID) AND (not a_surname.is_empty)
			valid_role: a_role /= VOID
			valid_photo: a_path_to_a_photo /= VOID
			existing_user: check_if_mail_already_present(an_email)

		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_modify_statement.make ("UPDATE user SET name = ? AND surname = ? AND role = ? AND photo = ? WHERE email = '" + an_email + "';" , db)
			l_query_result_cursor := db_modify_statement.execute_new_with_arguments (<<a_name, a_surname, a_role, a_path_to_a_photo>>)

		end

	change_user_password(user_email, new_password: STRING)
		--changes a specified user's password.
		--requires an 8 characters (letters and numbers) long PASSWORD, which cannot be null.

		require
			valid_email: (user_email /= VOID) AND (not user_email.is_empty)
			valid_password: (new_password /= VOID) AND (new_password.count = 8)
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do

			create db_modify_statement.make ("UPDATE user SET password = ? WHERE email = '" + user_email + "';", db)
			l_query_result_cursor := db_modify_statement.execute_new_with_arguments (<<new_password.hash_code>>)

		end

	update_user_name(user_email, new_name: STRING)
		--changes a specified user's name.
		--requires a not null value of NAME.

		require
			valid_email: (user_email /= VOID) AND (not user_email.is_empty)
			valid_user_name: (new_name /= VOID) AND (not new_name.is_empty)
		do
			create db_modify_statement.make ("UPDATE user SET name = '" + new_name + "' WHERE email = '" + user_email + "';" , db)
			db_modify_statement.execute

		end

	update_user_surname(user_email, new_surname: STRING)
		--changes a specified user's surname.
		--requires a not null value of SURNAME.

		require
			valid_email: (user_email /= VOID) AND (not user_email.is_empty)
			valid_user_surname: (new_surname /= VOID) AND (not new_surname.is_empty)
		do
			create db_modify_statement.make ("UPDATE user SET surname = '" + new_surname + "' WHERE email = '" + user_email + "';" , db)
			db_modify_statement.execute

		end

	update_user_role(user_email, new_role: STRING)
		--changes a specified user's role.

		require
			valid_email: (user_email /= VOID) AND (not user_email.is_empty)
			valid_role: (new_role /= VOID)
		do
			create db_modify_statement.make ("UPDATE user SET role = '" + new_role + "' WHERE email = '" + user_email + "';" , db)
			db_modify_statement.execute

		end

	update_user_photo(user_email, path_to_new_photo: STRING)
		--changes a specified user's photo.

		require
			valid_email: (user_email /= VOID) AND (not user_email.is_empty)
			valid_path_to_a_photo: (path_to_new_photo /= VOID)
		do
			create db_modify_statement.make ("UPDATE user SET photo = '" + path_to_new_photo + "' WHERE email = '" + user_email + "';" , db)
			db_modify_statement.execute

		end

	get_user_info(user_email: STRING): JSON_OBJECT
		--returns a JSON_OBJECT representing the specified user's information
		--the user is associated to:
		--	an EMAIL (primary key)
		--	a PASSWORD (hash value)
		--	a NAME
		--	a SURNAME
		--	a GENDER (true ---> MALE ; false ---> FEMALE)
		--	a ROLE
		--	a PHOTO (path to the picture or an avatar)

		require
			valid_email: (user_email /= VOID) AND (not user_email.is_empty)

		do
			create Result.make

			create db_query_statement.make("SELECT * FROM user WHERE email = '" + user_email + "';" , db)
			db_query_statement.execute(agent row_to_json_object (?, 7, Result))

		end

	check_user_password (an_email, a_password: STRING): TUPLE[check_result: BOOLEAN; email: STRING; password: STRING; name: STRING; surname: STRING; gender: STRING; role: STRING]
			-- checks if a user with the given username and password exists into the database
			-- it returns true if and only if the check was positive, false otherwise

		require
			valid_email: (an_email /= VOID) AND (not an_email.is_empty)
			valid_password: (a_password /= VOID) AND (a_password.count = 8)
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR

		do

			create Result

			create db_query_statement.make ("SELECT * FROM user WHERE email=? AND password=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<an_email, a_password.hash_code>>)


			if l_query_result_cursor.after then
					-- there are no rows in the result of the query, thus no user with that password exits
				print("Could not find a user with the given name and password into the database.%N")
				Result.check_result := False
			else
				print("A user with the given name and password was successfully found into the database.%N")
				Result.check_result := True
				Result.email := l_query_result_cursor.item.value (1).out
				Result.name := l_query_result_cursor.item.value (2).out
				Result.surname := l_query_result_cursor.item.value (3).out
				Result.password := l_query_result_cursor.item.value (4).out
				Result.role := l_query_result_cursor.item.value (6).out

				if l_query_result_cursor.item.value(5) = 1 then
					Result.gender := "male"
				else
					Result.gender := "female"
				end

			end
		end


feature --Data access: ITERATIONS

	get_all_project_iterations(a_project:STRING): JSON_ARRAY
		--returns a JSON_ARRAY where each element is a JSON_OBJECT representing an iteration of the specified project
		--every iteration is associated to:
		--	a NUMBER identifying it (in the contest of the project it belongs to)
		--	a PROJECT which it belongs to
		--	a NAME of the iteration
		--	a boolean value BACKLOG which is true iff this iteration is the special backlog iteration of a project
		--requires a valid project name

		require
			valid_project_name: (a_project /= VOID)
			existing_project: check_project_name(a_project)

		do
			create Result.make_array

			create db_query_statement.make("SELECT * FROM iteration WHERE project = '" + a_project + "';" , db)
			db_query_statement.execute(agent rows_to_json_array (?, 4, Result))

		end

	add_iteration(a_project: STRING;)
		--creates a new iteration with the specified information into the database
		--requires:
		--a valid PROJECT name, which the iteration belongs to
		--a valid iteration NAME
		--a NUMBER, which should be increasing with respect to the project the iteration belongs to
		--a boolean value BACKLOG telling if the iteration is the special backlog iteration of the project

		require
			valid_project_name: (a_project /= VOID)
			existing_project: check_project_name(a_project)

		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			is_backlog: BOOLEAN
			iteration_number: INTEGER
			iteration_name: STRING
		do
			if is_project_empty(a_project) then
				is_backlog := True
				iteration_number := 0
				iteration_name := "BACKLOG ITERATION"
			else
				is_backlog := False
				iteration_number := get_all_project_iterations(a_project).count
				iteration_name := "ITERATION " + iteration_number.out
			end

			create db_insert_statement.make ("INSERT INTO iteration(numbers, project, name, backlog) VALUES (?,?,?,?);", db)
			l_query_result_cursor := db_insert_statement.execute_new_with_arguments (<<iteration_number, a_project, iteration_name, is_backlog>>)

		end


	remove_iteration(a_project:STRING; a_number: INTEGER)
		--removes a specified iteration from the database.
		--requires the number of the iteration and the project it belongs to

		require
			valid_number: a_number >= 0
			valid_project_name: (a_project /= VOID)
			existing_project: check_project_name(a_project)
			existing_iteration: check_iteration(a_number, a_project)

		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_modify_statement.make ("DELETE FROM iteration WHERE number=? AND project=?;", db)
			l_query_result_cursor := db_modify_statement.execute_new_with_arguments (<<a_number, a_project>>)

		end


	check_iteration(iteration_number:INTEGER; project: STRING): BOOLEAN
		--checks if the given iteration exists and return False if it doesn't exist and True otherwise
		require
			valid_number: iteration_number >= 0
			valid_project_name: (project /= VOID)
			existing_project: check_project_name(project)
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_query_statement.make ("SELECT * FROM iteration WHERE number = ?, project = ? ",db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<iteration_number, project>>)

			if l_query_result_cursor.after then
				Result := False
			else
				Result := True
			end
		end







feature	--Data access: WORK ITEMS

	--works
	iteration_work_items(iteration_number: INTEGER; project_name: STRING): JSON_ARRAY
	--returns a JSON_ARRAY where each element is a JSON_OBJECT representing an work_item of the specified iteration
		do
			--create the result object, in this case an empty JSON_ARRAY	
			create Result.make_array
			create db_query_statement.make("SELECT * FROM work_item WHERE nb_iteration=? AND project = '" + project_name + "';" , db)
			--db_query_statement.execute(agent rows_to_json_array(?, 10, Result))
			db_query_statement.execute_with_arguments (agent rows_to_json_array(?, 10, Result), <<iteration_number>>)
			if(db_query_statement.has_error) then
				-- the iteration with the given number hasn't any work_item into the db				
				print("Error: The iteration hasn't any work_item.")
			end
		end

	--works
	work_item_info (work_item_id:INTEGER): JSON_OBJECT
		-- returns a JSON_OBJECT with all information about a specified work_item
		require
			work_item_id >=0
		do
			-- create the result object, in this case an empty JSON_OBJECT			
			create Result.make
			-- search the information about work_item with the given id			
			create db_query_statement.make ("SELECT * FROM work_item WHERE id=?;" , db)
			db_query_statement.execute_with_arguments (agent row_to_json_object (?, 10, Result),<<work_item_id>>)
			if(db_query_statement.has_error) then
				-- the work_item with the given id doesn't exist into the db				
				print("Error while searching the given work_item.")
			end

		end

	--works
	count_number_work_item(iteration_num: INTEGER; project_name: STRING):INTEGER
		-- counts how many work_items has the iteration with number iteration_number associated with project_name
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			number:INTEGER
		do
			number:=0
			create db_query_statement.make ("SELECT * FROM work_item WHERE nb_iteration=? AND project = '" + project_name +"' ;", db)
			l_query_result_cursor:=db_query_statement.execute_new_with_arguments(<<iteration_num>>)
			from
			until l_query_result_cursor.after
			loop
				number:=number+1
				l_query_result_cursor.forth
			end
			Result:=(number+1)
		end

	--works
	add_work_item(name: STRING; description: STRING; points: INTEGER; iteration: INTEGER; project: STRING; state: STRING; owner: STRING; created_by: STRING)
		-- adds a new work_item with the given information
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			num_new:INTEGER
		do
			create db_insert_statement.make ("INSERT INTO work_item(number,nb_iteration,project,name,description,points,status,created_by,owner) VALUES (?,?,?,?,?,?,?,?,?);", db)
			num_new:=count_number_work_item(iteration,project) + 1
			l_query_result_cursor:=db_insert_statement.execute_new_with_arguments(<<num_new,iteration,project,name,description,points,state,created_by,owner>>)
			if db_insert_statement.has_error then
				print("Error while inserting a new work_item")
			end
		end

	--works
	remove_work_item(work_item_id: INTEGER)
		--removes an existing work_item which has the given identificator	
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			-- create the result string, in this case an empty JSON_STRING		
			create db_modify_statement.make ("DELETE FROM work_item WHERE id=?;", db)
			l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_id>>)
			if db_modify_statement.has_error then
				print("Error while deleting a work_item.%N")
			else
				--the new work_item was deleted from db and so sends an appropriate message				
				print("SUCCESS: The new work_item was deleted from the db. %N")
			end
		end

	--works
	modify_work_item(work_item_id: INTEGER; work_item_number: INTEGER; work_item_iteration: INTEGER; work_item_project: STRING; work_item_name: STRING; work_item_point: INTEGER; work_item_state: STRING; work_item_owner: STRING; work_item_description:STRING; work_item_created_by: STRING)
		--modifies an existing work_item which the given informations	
		local
			a,app: STRING
			b: INTEGER
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			text: STRING

		do
			--checks each element of the given work_item		
			create db_query_statement.make ("SELECT * FROM work_item WHERE number=?;",db)
			l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<work_item_number>>)
			--checks the name
			a:= l_query_result_cursor.item.value(5).out
			if (a.same_string(work_item_name) = false) then
				--the names are different than add a comment
				text:=("Old name: %"" + a + "%""+", New name: %"" + work_item_name + "%"")
				add_comment_from_modification(work_item_id,text)
				create db_modify_statement.make ("UPDATE work_item SET name=? WHERE id=? ;", db)
				l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_name,work_item_id>>)
				if db_modify_statement.has_error then
					print("Error while changing the work_item name.")
				end
			end
			--checks the points	
			create db_query_statement.make ("SELECT * FROM work_item WHERE number=?;",db)
			l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<work_item_number>>)
			b:= l_query_result_cursor.item.integer_value(7)
			if (b.is_equal(work_item_point) = false) then
				--the points are different than add a commenta
				print("entro")
				a:=b.out
				app:=work_item_point.out
				text:=("Old points: %"" + a + "%""+", New points: %"" + app + "%"")
				add_comment_from_modification(work_item_id,text)
				create db_modify_statement.make ("UPDATE work_item SET points=? WHERE id=? ;", db)
				l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_point,work_item_id>>)
				if db_modify_statement.has_error then
					print("Error while changing the work_item point.")
				end
			end
			create db_query_statement.make ("SELECT * FROM work_item WHERE number=?;",db)
			l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<work_item_number>>)
			--checks the status
			a:= l_query_result_cursor.item.value(8).out
			if (a.same_string(work_item_state) = false) then
				--the status are different than add a comment
				text:=("Old status: %"" + a + "%""+", New status: %"" + work_item_state + "%"")
				add_comment_from_modification(work_item_id,text)
				create db_modify_statement.make ("UPDATE work_item SET status=? WHERE id=? ;", db)
				l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_state,work_item_id>>)
				if db_modify_statement.has_error then
					print("Error while changing the work_item status.")
				end
			end
			--checks the owner
			create db_query_statement.make ("SELECT * FROM work_item WHERE number=?;",db)
			l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<work_item_number>>)
			a:= l_query_result_cursor.item.value(10).out
			if (a.same_string(work_item_owner) = false) then
				--the owners are different than add a comment
				text:=("Old owner: %"" + a + "%""+", New owner: %"" + work_item_owner + "%"")
				add_comment_from_modification(work_item_id,text)
				create db_modify_statement.make ("UPDATE work_item SET owner=? WHERE id=? ;", db)
				l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_owner,work_item_id>>)
				if db_modify_statement.has_error then
					print("Error while changing the work_item owner.")
				end
			end
			--checks the creator
			create db_query_statement.make ("SELECT * FROM work_item WHERE number=?;",db)
			l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<work_item_number>>)
			a:= l_query_result_cursor.item.value(9).out
			if (a.same_string(work_item_created_by) = false) then
				--the creators are different than add a comment
				text:=("Old creator: %"" + a + "%""+", New creator: %"" + work_item_created_by + "%"")
				add_comment_from_modification(work_item_id,text)
				create db_modify_statement.make ("UPDATE work_item SET created_by=? WHERE id=? ;", db)
				l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_created_by,work_item_id>>)
				if db_modify_statement.has_error then
					print("Error while changing the work_item creator.")
				end
			end
		end


feature --data access: LINKS

	--works
	add_link(work_item_id1: INTEGER; work_item_id2: INTEGER)
		--adds a new link between the work_idem with id work_item_id1 and one with id work_item_id2	
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_insert_statement.make ("INSERT INTO link(work_item1,work_item2) VALUES (?,?);", db)
			l_query_result_cursor:=db_insert_statement.execute_new_with_arguments(<<work_item_id1,work_item_id2>>)
			if db_insert_statement.has_error then
				print("Error while inserting a new link between two work_items")
			else
				print("Success hile inserting a new link between two work_items")
			end
		end

	--works
	remove_link(work_item_id1: INTEGER; work_item_id2: INTEGER)
		--removes an existing link between the work_idem with id work_item_id1 and one with id work_item_id2
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_modify_statement.make ("DELETE FROM link WHERE work_item1=? AND work_item2=?;", db)
			l_query_result_cursor:=db_modify_statement.execute_new_with_arguments (<<work_item_id1,work_item_id2>>)
			if db_modify_statement.has_error then
				print("Error while deleting an existing link")
			else
				print("Success while deleting an existing link")
			end
		end

	--works
	work_item_links(work_item_id: INTEGER): JSON_ARRAY
		--returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a link with another work_item		
		do
			-- create the result object, in this case an empty JSON_ARRAY			
			create Result.make_array
			create db_query_statement.make("SELECT * FROM link WHERE work_item1=? OR work_item2=?;" , db)
			db_query_statement.execute_with_arguments (agent rows_to_json_array (?, 2, Result), <<work_item_id,work_item_id>>)
			if(db_query_statement.has_error) then
				-- the work_item with the given number hasn't any link into the db				
				print("Error while getting of the link")
			end

		end


	--works
	project_exists(project_name:STRING): BOOLEAN
		--checks if the given project exists and return False if it doesn't exist and True otherwise
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_query_statement.make("SELECT * FROM project WHERE name=?;",db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments(<<project_name>>)
			if l_query_result_cursor.after then
				-- there are no rows in the query result, so there isn't an iteration with the given number
				print("There isn't any project with the given name.%N")
				Result := False
			else
				print("The given project was successfully found into the database.%N")
				Result := True
			end
		end

feature --data access: COMMENTS

	--works
	add_comment(work_item_id: INTEGER; text_comment: STRING; author_comment:STRING)
		--adds a new comment with the given information		
		local
			moment:DATE_TIME
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			date: STRING
		do
			create moment.make_now
			date:=moment.out
			create db_insert_statement.make("INSERT INTO comment(date,work_item,content,author) VALUES(?,?,?,?);", db)
			l_query_result_cursor:=db_insert_statement.execute_new_with_arguments(<<date,work_item_id,text_comment,author_comment>>)
			if db_insert_statement.has_error then
				print("Error while inserting a new comment")
			else
				--the new work_item was added to db and so sends an appropriate message	
				print("Success while inserting a new comment")
			end
		end

	add_comment_from_modification(work_item_id: INTEGER; text_comment: STRING)
		--adds a new comment with che given string from the modification of an existing work_item
		local
			moment: DATE_TIME
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			date: STRING
		do
			create moment.make_now
			date:=moment.out
			create db_insert_statement.make ("INSERT INTO comment(date,work_item,content,author) VALUES (?,?,?,?);", db)
			l_query_result_cursor:=db_insert_statement.execute_new_with_arguments(<<date,work_item_id,text_comment,"System">>)
			if db_insert_statement.has_error then
				print("%NError while inserting a new comment")
			else
				--the new work_item was added to db and so sends an appropriate message	
				print("%NSuccess while inserting a new comment")
			end
		end

	--works
	work_item_comments(work_item_id: INTEGER): JSON_ARRAY
		--returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a comment		
		do
			-- create the result array, in this case an empty JSON_ARRAY			
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM comment WHERE work_item=? ;", db)
			db_query_statement.execute_with_arguments (agent rows_to_json_array (?, 4, Result), <<work_item_id>>)
			if db_query_statement.has_error then
				print("Error during the listing of the comments")
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


end
