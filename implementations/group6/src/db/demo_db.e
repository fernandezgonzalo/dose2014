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

	get_projects: JSON_ARRAY
		do
			create Result.make_array

			create db_query_statement.make("SELECT * FROM project;" , db)

			db_query_statement.execute(agent rows_to_json_array (?, 1, Result))

		end

	add_project (a_project_name: STRING; a_user_name: STRING)
		-- add a new project in tha database
		do
			-- add the name in the project table
			create db_insert_statement.make ("INSERT INTO project VALUES ('" + a_project_name + "');", db)
			db_insert_statement.execute
			if db_insert_statement.has_error then
				print("Error while inserting new project")
			end
			-- add the name and the creator in the member table with boolean owner true
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

	is_owner (a_user_email: STRING; a_project_name: STRING) : BOOLEAN
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			-- check if the given email is owner of the given project
			create db_query_statement.make ("SELECT owner from member WHERE project='" + a_project_name + "'AND user='" + a_user_email + "';", db)
			l_query_result_cursor := db_query_statement.execute_new
			if l_query_result_cursor.after = false then
				if l_query_result_cursor.item.boolean_value (1) then
					Result := True
				else
					Result := False
				end
			else
				Result := false
			end
		end

	is_member (a_user_email: STRING; a_project_name: STRING) : BOOLEAN
		local
			l_array: JSON_ARRAY
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			-- check if the given email is owner of the given project
			create db_query_statement.make ("SELECT * from member WHERE project='" + a_project_name + "'AND user='" + a_user_email + "';", db)
			l_query_result_cursor := db_query_statement.execute_new
			--print(l_query_result_cursor.item.value (1))
			if l_query_result_cursor.after then

					-- there are no rows in the result of the query, thus the email is not present into the database
				Result := False
			else
				Result := True
			end
		end

	get_project_points (a_project_name: STRING) : INTEGER
		-- obtain the sum of points of a given project
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_query_statement.make ("SELECT sum(IFNULL(work_item.points, 0)) FROM work_item WHERE work_item.project='" + a_project_name + "';", db)
			l_query_result_cursor := db_query_statement.execute_new
			if l_query_result_cursor.after then
				Result := l_query_result_cursor.item.integer_value (1)
			else
				Result := 0
			end

		end



	is_project_empty (a_project_name: STRING) : BOOLEAN
		-- check is a project is empty: return true if it is empty
		-- a project is empty when the only iteration is the backlog
		local
			l_query_result_cursor, l_item: SQLITE_STATEMENT_ITERATION_CURSOR
			l_true: BOOLEAN
		do
			-- check in the table iteration if some of them are related to the given name project
			create db_query_statement.make ("SELECT backlog FROM iteration WHERE project='" + a_project_name + "';", db)
			l_query_result_cursor := db_query_statement.execute_new
			l_item := l_query_result_cursor
			l_true := true
			from
				l_item.start
			until
				l_item.after
			loop
				print(l_item.item.value (1))
				print(l_true.out)
				if l_item.item.boolean_value (1) = false then
					l_true := false
				end
				l_item.forth
			end

			if l_true then
				Result := true
			else
				Result := false
			end
		end

	has_member (a_project_name: STRING) : BOOLEAN
		--check if the given project has members, actualy more than 1
		local
			l_array: JSON_ARRAY
		do
			create db_query_statement.make ("SELECT user FROM member WHERE project='" + a_project_name + "';", db)
			create l_array.make_array
			db_query_statement.execute(agent rows_to_json_array (?, 1, l_array))
			print("count")
			print(l_array.count)
			if l_array.count = 1 then
				Result := false
			else
				Result := true
			end
		end

	remove_project (a_project_name: STRING)
		-- remove the project from tables
		do
			create db_modify_statement.make ("DELETE FROM project WHERE name ='"+ a_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting the project from project table")
			end
			-- Delete the last owner of the project
			create db_modify_statement.make ("DELETE FROM member WHERE project ='"+ a_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting the project from member table")
			end
			-- TODO check if it's necessary
			create db_modify_statement.make ("DELETE FROM iteration WHERE project ='"+ a_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting the iterations of the project")
			end
			-- Delete the delted status work_items of the project
			create db_modify_statement.make ("DELETE FROM work_item WHERE project ='"+ a_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while deleting the work_items of the project")
			end
		end

	rename_project (a_old_project_name: STRING; a_new_project_name: STRING)
		-- rename the project in all tables: project, member, iteration, work_item
		do
			create db_modify_statement.make ("UPDATE project SET name='" + a_new_project_name + "' WHERE name='" + a_old_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while changing project name in project table")
			end
			create db_modify_statement.make ("UPDATE member SET project='" + a_new_project_name + "' WHERE project='" + a_old_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while changing project name in member table")
			end
			create db_modify_statement.make ("UPDATE iteration SET project='" + a_new_project_name + "' WHERE project='" + a_old_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while changing project name in iteration table")
			end
			create db_modify_statement.make ("UPDATE work_item SET project='" + a_new_project_name + "' WHERE project='" + a_old_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while changing project name in work_item table")
			end
		end

	get_all_user_projects (a_user_email: STRING): JSON_ARRAY
		-- get all the projects of a specific user
		do
			-- select from member table the project of the specific user
			create Result.make_array
			create db_query_statement.make ("SELECT member.project as project_name, sum(IFNULL(work_item.points, 0)) as points, member.owner FROM member LEFT JOIN work_item ON member.project = work_item.project WHERE user='" + a_user_email + "' GROUP BY member.project;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 3, Result))
		end

	get_all_project_members (a_project_name: STRING): JSON_ARRAY
		-- get all the members and owners of a specific project
		do
			create Result.make_array
			create db_query_statement.make ("SELECT member.user, user.name, user.surname, member.owner FROM member, user WHERE member.project='" + a_project_name + "'AND user.email = member.user;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 4, Result))
		end

	get_all_project_owners (a_project_name: STRING): JSON_ARRAY
		-- get all the owners of a specific project
		do
			-- call get_all_project_members and filter by owners only
			-- return them as JSON_ARRAY
			create Result.make_array
			create db_query_statement.make ("SELECT member.user as email, user.name, user.surname, member.owner FROM member, user WHERE member.project='" + a_project_name + "'AND user.email = member.user AND owner=1;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 4, Result))
		end

	add_member_to_project (a_project_name: STRING; a_user_email: STRING; a_owner: BOOLEAN)
		-- add a member or owner in the table member
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			-- if the user is an owner check if the tuple doesn't already exist:
			create db_insert_statement.make ("INSERT INTO member(user, project, owner) VALUES(?,?,?);", db)
			l_query_result_cursor := db_insert_statement.execute_new_with_arguments (<<a_user_email, a_project_name, a_owner>>)
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

	downgrade_owner (a_project_name, a_user_email: STRING)
		-- promote a member owner to a project
		do
			create db_modify_statement.make ("UPDATE member SET owner='0' WHERE user='" + a_user_email + "' AND project='" + a_project_name + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while promoting member")
			end
		end

	get_points (a_project_name: STRING): JSON_OBJECT
		-- get the total numbers of points of a project
		do
			create db_query_statement.make ("SELECT sum(IFNULL(work_item.points, 0)) as points FROM work_item WHERE work_item.project='" + a_project_name + "';", db)
			db_query_statement.execute (agent row_to_json_object(?, 1, Result))
		 end

	get_members_info (a_project_name: STRING): JSON_ARRAY
		-- get the total numbers of points of a project
		local
			l_result: JSON_OBJECT
		do

			create Result.make_array
			create db_query_statement.make ("SELECT user.email, user.name, user.surname, member.owner, sum(IFNULL(work_item.points, 0)) as points FROM member, user LEFT JOIN work_item ON member.project = work_item.project WHERE member.project='" + a_project_name + "' AND user.email=member.user GROUP BY member.user;", db)
			db_query_statement.execute (agent rows_to_json_array(?, 5, Result))
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

			db_query_statement.execute(agent rows_to_json_array (?, 8, Result))

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
			create db_insert_statement.make ("INSERT INTO user(email,password,name,surname,male,role,photo, changepwd) VALUES (?,?,?,?,?,?,?,?);", db)
			l_query_result_cursor := db_insert_statement.execute_new_with_arguments (<<an_email, a_password.hash_code, a_name, a_surname, is_male, a_role, a_path_to_a_photo, false>>)

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

	update_user_information(an_email, a_name, a_surname, a_role, a_path_to_a_photo:STRING)
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
		do
			create db_modify_statement.make ("UPDATE user SET name='"+ a_name + "' , surname='"+a_surname+"' , role='"+a_role+"' , photo='"+a_path_to_a_photo+"' WHERE email='"+an_email+"';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error then
				print("Error while updating user information")
			end
		end


	set_changepwd(user_email: STRING; value: BOOLEAN)

		require
			valid_email: (user_email /= VOID) AND (not user_email.is_empty)
		local
			l_query_result_cursor:  SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_modify_statement.make ("UPDATE user SET changepwd = ? WHERE email = '" + user_email + "';", db)
			l_query_result_cursor := db_modify_statement.execute_new_with_arguments (<<value>>)
		end

	get_changepwd(user_email: STRING): BOOLEAN

		require
			valid_email: (user_email /= VOID) AND (not user_email.is_empty)
		local
			l_query_result_cursor:  SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_query_statement.make ("SELECT changepwd FROM user WHERE email = ?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<user_email>>)

			if l_query_result_cursor.item.value (1) = 1 then
				Result := true
			else
				Result := false
			end
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

			create db_query_statement.make("SELECT (name, surname, gender, role, photo) FROM user WHERE email = '" + user_email + "';" , db)
			db_query_statement.execute(agent row_to_json_object (?, 5, Result))

		end

	check_user_password (an_email, a_password: STRING): TUPLE[check_result: BOOLEAN; email: STRING; password: STRING; name: STRING; surname: STRING; gender: STRING; role: STRING; changepwd: STRING]
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

				Result.check_result := False

			else

				Result.check_result := True
				Result.email := l_query_result_cursor.item.value (1).out
				Result.name := l_query_result_cursor.item.value (2).out
				Result.surname := l_query_result_cursor.item.value (3).out
				Result.password := l_query_result_cursor.item.value (4).out
				Result.role := l_query_result_cursor.item.value (6).out



				if l_query_result_cursor.item.value(5).out.is_equal ("1") then
					Result.gender := "male"
				else
					Result.gender := "female"
				end

				if l_query_result_cursor.item.value(8).out.is_equal ("1") then
					Result.changepwd := "true"
				else
					Result.changepwd := "false"
				end

			end
		end

	get_user_name(user_email: STRING): STRING
		--returns a JSON_OBJECT representing the specified user's name
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create Result.make_empty

			create db_query_statement.make("SELECT name FROM user WHERE email = '" + user_email + "';" , db)
			l_query_result_cursor := db_query_statement.execute_new
			--if l_query_result_cursor.after then
				Result := l_query_result_cursor.item.string_value (1)
			--else
			--	Result := "error"
			--end

		end

	get_user_surname(user_email: STRING): STRING
		--returns a JSON_OBJECT representing the specified user's name
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create Result.make_empty

			create db_query_statement.make("SELECT surname FROM user WHERE email = '" + user_email + "';" , db)
			l_query_result_cursor := db_query_statement.execute_new
			--if l_query_result_cursor.after then
				Result := l_query_result_cursor.item.string_value (1)

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

			create db_query_statement.make("SELECT iteration.number as iteration_number, iteration.name as title, sum(IFNULL(work_item.points,0)) as points FROM iteration LEFT JOIN work_item ON iteration.number = work_item.nb_iteration AND iteration.project = work_item.project WHERE iteration.project='" + a_project + "' GROUP BY iteration.project, iteration.number;" , db)
			db_query_statement.execute(agent rows_to_json_array (?, 3, Result))

		end

	add_iteration(a_project: STRING;): TUPLE[number: STRING; name: STRING]
		--creates a new iteration with the specified information into the database
		--requires:
		--a valid PROJECT name, which the iteration belongs to
		require
			valid_project_name: (a_project /= VOID)
			existing_project: check_project_name(a_project)

		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			is_backlog: BOOLEAN
			iteration_number: INTEGER
			iteration_name: STRING
		do

			create Result

			iteration_number := get_all_project_iterations(a_project).count

			if iteration_number /= 0 then
				is_backlog := FALSE
				iteration_name := "ITERATION " + iteration_number.out
			else
				is_backlog := TRUE
				iteration_name := "BACKLOG ITERATION"
			end

			create db_insert_statement.make ("INSERT INTO iteration(number, project, name, backlog) VALUES (?,?,?,?);", db)
			l_query_result_cursor := db_insert_statement.execute_new_with_arguments (<<iteration_number, a_project, iteration_name, is_backlog>>)

			Result.number := iteration_number.out
			Result.name := iteration_name

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
			valid_iteration_number: iteration_number >= 0
			valid_project_name: (project /= VOID)
	--		existing_project: check_project_name(project)
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_query_statement.make ("SELECT * FROM iteration WHERE number = ? AND project = '" + project + "' ;",db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<iteration_number>>)

			if l_query_result_cursor.after then
				Result := False
			else
				Result := True
			end
		end


	is_iteration_empty (project: STRING; number: INTEGER) : BOOLEAN
		-- check if a project is empty: return true if it is empty
		require
			valid_iteration_number: number >= 0
			valid_project_name: (project /= VOID)
			existing_project: check_project_name(project)
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			-- check in the table iteration if some of them are related to the given name project
			create db_query_statement.make ("SELECT * FROM work_item WHERE project='" + project + "' AND number=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<number>>)

			if l_query_result_cursor.after then
				Result := true
			else
				Result := False
			end
		end




feature	--Data access: WORK ITEMS

	all_user_done_work_items(user: STRING):JSON_ARRAY
	-- Finds all 'Done' work_items which are owned and created from the given user 	
		do
			-- Create the result object, in this case an empty JSON_ARRAY	
			create Result.make_array
			create db_query_statement.make("SELECT id, number, nb_iteration, project, name, description, points FROM work_item WHERE owner=?  AND created_by=?;" , db)
			db_query_statement.execute_with_arguments (agent rows_to_json_array(?, 7, Result), <<user,user>>)
			if(db_query_statement.has_error) then
				-- the iteration with the given number hasn't any work_item into the db				
				print("Error while searching the 'Done' work_items.")
			end

		end

	update_number(start_num: INTEGER)
	-- Changes the numbers of the work_items which are associated with the same iteration and project and greater number
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			iteration: INTEGER
			project: STRING
			id: INTEGER
			value: INTEGER

		do
			-- Searches the iteration and the project of the given work_item
			create db_query_statement.make("SELECT nb_iteration, project FROM work_item WHERE id=?;",db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<start_num>>)
			-- Saves iteration and project
			iteration:= l_query_result_cursor.item.integer_value(1)
			project:= l_query_result_cursor.item.string_value (2)
			-- Finds all work_items which belongs to the same iteration and project
			create db_query_statement.make ("SELECT * from work_item WHERE nb_iteration=? AND project = '" + project + "' AND id>?;",db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<iteration,start_num>>)
			-- Changes only the number of that work_items which have a greater number
			if l_query_result_cursor.after then
				--Nothing heppens
			else
				from
				--None
				until
					l_query_result_cursor.after
				loop
					id:= l_query_result_cursor.item.integer_value (1)
					value:= l_query_result_cursor.item.integer_value (2)
					create db_modify_statement.make ("UPDATE work_item SET number=? WHERE id=? ;",db)
					db_modify_statement.execute_with_arguments (<<value-1,id>>)
					l_query_result_cursor.forth
				end

			end

		end


	--OK
	iteration_work_items(iteration_number: INTEGER; project_name: STRING): JSON_ARRAY
	-- Returns a JSON_ARRAY where each element is a JSON_OBJECT representing an work_item of the specified iteration
		do
			-- Create the result object, in this case an empty JSON_ARRAY	
			create Result.make_array
			create db_query_statement.make("SELECT * FROM work_item WHERE nb_iteration=? AND project = '" + project_name + "';" , db)
			db_query_statement.execute_with_arguments (agent rows_to_json_array(?, 10, Result), <<iteration_number>>)
			if(db_query_statement.has_error) then
				-- the iteration with the given number hasn't any work_item into the db				
				print("Error while seaching work_items of the given iteration .")
			end
		end

	check_work_item(iteration_number: INTEGER; project_name: STRING; work_item_name: STRING): BOOLEAN
	-- Returns True if the given combination already exists, otherwise returns False
		local
				l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_query_statement.make ("SELECT * FROM work_item WHERE nb_iteration=? AND project = '" + project_name +"' AND name = '" + work_item_name + "' ;", db)
			l_query_result_cursor:=db_query_statement.execute_new_with_arguments(<<iteration_number>>)
			if l_query_result_cursor.after then
				Result := False
			else
				Result := True
			end

		end
	--OK
	work_item_info (work_item_id: INTEGER): JSON_OBJECT
		-- Returns a JSON_OBJECT with all information about a specified work_item
		do
			-- Create the result object, in this case an empty JSON_OBJECT			
			create Result.make
			-- Search the information about work_item with the given id			
			create db_query_statement.make ("SELECT * FROM work_item WHERE id=? ;" , db)
			db_query_statement.execute_with_arguments (agent row_to_json_object (?, 10, Result),<<work_item_id>>)
			if(db_query_statement.has_error) then
				-- The work_item with the given id doesn't exist into the db				
				print("Error while searching the given work_item.")
			end

		end

	--OK
	count_number_work_item(iteration_num: INTEGER; project_name: STRING):INTEGER
		-- Counts how many work_items has the iteration with number iteration_number associated with project_name and give the new value of id which will be assigned to the new work_item
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
			Result:=(number)
		end

	--OK
	add_work_item(name: STRING; description: STRING; points: INTEGER; iteration: INTEGER; project: STRING; state: STRING; created_by: STRING; owner: STRING): INTEGER
		-- Adds a new work_item with the given information
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			num_new:INTEGER
		do
			create db_insert_statement.make ("INSERT INTO work_item(number,nb_iteration,project,name,description,points,status,created_by,owner) VALUES (?,?,?,?,?,?,?,?,?);", db)
			num_new:=count_number_work_item(iteration,project)
			l_query_result_cursor:=db_insert_statement.execute_new_with_arguments(<<num_new,iteration,project,name,description,points,state,created_by,owner>>)
			if db_insert_statement.has_error then
				print("Error while inserting a new work_item")
				Result:=-1
			else
				-- The new work_item was deleted from db and so sends an appropriate message				
				print("SUCCESS: The new work_item was added to the db. %N")
				-- Finds the generated work_itedm_id
				create db_query_statement.make ("SELECT last_insert_rowid();",db)
				l_query_result_cursor:=db_query_statement.execute_new
				if l_query_result_cursor.after = False then
					--The execution of the previous statement returns a single row which rapresent the last insertion, so reads its work_item_id
					Result:=l_query_result_cursor.item.integer_value (1)
				end

			end
		end

	--OK
	remove_work_item(work_item_id:INTEGER)
		-- Removes an existing work_item which has the given identificator	
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			j_links: JSON_ARRAY
			array_links: ARRAYED_LIST[INTEGER]
			link, i: INTEGER
			text_comment, name: STRING
		do
			-- Search all work_items which has a link with the present one
			j_links:= work_item_links(work_item_id)
			create array_links.make (j_links.count)
			across j_links.array_representation as array loop
				-- Reads one work_item at time
				if attached {JSON_OBJECT} array.item as l then
					if attached {JSON_STRING} l.item ("work_item_id") as t then
						link:= t.item.to_integer
						array_links.extend (link)
					end
				end
			end
			-- Retrieve the name of the deleted work_item
			create db_query_statement.make ("SELECT * FROM work_item WHERE id=?;",db)
			l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<work_item_id>>)
			name:= l_query_result_cursor.item.value (5).out
			print(name)
			-- Create the text comment
			text_comment:="The link with work_item '" + name + "' was removed because the work_item was deleted from the db."
			-- Adds a new comment as regards the present deletion on the connected work_items
			from
				i:=1
			until
				i>array_links.count
			loop
				add_comment_from_modification(array_links[i], text_comment)
				i:= i + 1
			end

			create db_modify_statement.make ("DELETE FROM work_item WHERE id=?;", db)
			l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_id>>)
			if db_modify_statement.has_error then
				print("Error while deleting a work_item.%N")
			else
				-- The new work_item was deleted from db and so sends an appropriate message				
				print("SUCCESS: The work_item was deleted from the db. %N")
			end
		end

	--OK
	modify_work_item(work_item_id: INTEGER; work_item_iteration: INTEGER; work_item_name: STRING; work_item_point: INTEGER; work_item_state: STRING; work_item_owner: STRING; work_item_description:STRING; work_item_project: STRING): STRING
		-- Modifies an existing work_item which the given informations	
		local
			a: STRING
			b, new_num: INTEGER
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			text: STRING
			old_name: STRING
		do
			if work_item_exists(work_item_id)then
				-- Finds the work_item with che given id
				create db_query_statement.make ("SELECT * FROM work_item WHERE id=?;",db)
				l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<work_item_id>>)
				-- Checks each element of the given work_item
				-- Checks the name
				a:= l_query_result_cursor.item.value(5).out
				-- Saves the original name of the work_item
				old_name:=a
				if (a.same_string(work_item_name) = false) then
					-- The names are different than add a comment
					text:=("Old name: " + a + " "+", New name: " + work_item_name + "")
					add_comment_from_modification(work_item_id,text)
					create db_modify_statement.make ("UPDATE work_item SET name=? WHERE id=? ;", db)
					l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_name,work_item_id>>)
					if db_modify_statement.has_error then
						print("Error while changing the work_item name.")
					end
				end
				-- Checks the points	
				create db_query_statement.make ("SELECT * FROM work_item WHERE id=?;",db)
				l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<work_item_id>>)
				b:= l_query_result_cursor.item.integer_value(7)
				if (b.is_equal(work_item_point) = false) then
					-- The points are different than add a comment
					text:=("Old points: " + b.out + ""+", New points: " + work_item_point.out + "")
					add_comment_from_modification(work_item_id,text)
					create db_modify_statement.make ("UPDATE work_item SET points=? WHERE id=? ;", db)
					l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_point,work_item_id>>)
					if db_modify_statement.has_error then
						print("Error while changing the work_item point.")
					end
				end
				-- Checks the status
				create db_query_statement.make ("SELECT * FROM work_item WHERE id=?;",db)
				l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<work_item_id>>)
				a:= l_query_result_cursor.item.value(8).out
				if (a.same_string(work_item_state) = false) then
					-- The status are different than add a comment
					text:=("Old status: " + a + ""+", New status: " + work_item_state + "")
					add_comment_from_modification(work_item_id,text)
					create db_modify_statement.make ("UPDATE work_item SET status=? WHERE id=? ;", db)
					l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_state,work_item_id>>)
					if db_modify_statement.has_error then
						print("Error while changing the work_item status.")
					end
				end
				-- Checks the owner
				create db_query_statement.make ("SELECT * FROM work_item WHERE id=?;",db)
				l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<work_item_id>>)
				a:= l_query_result_cursor.item.value(10).out
				if (a.same_string(work_item_owner) = false) then
					-- The owners are different than add a comment
					text:=("Old owner: " + a + ""+", New owner: " + work_item_owner + "")
					add_comment_from_modification(work_item_id,text)
					create db_modify_statement.make ("UPDATE work_item SET owner=? WHERE id=? ;", db)
					l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_owner,work_item_id>>)
					if db_modify_statement.has_error then
						print("Error while changing the work_item owner.")
					end
				end
				-- Checks the iteration
				create db_query_statement.make ("SELECT * FROM work_item WHERE id=?;",db)
				l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<work_item_id>>)
				b:= l_query_result_cursor.item.integer_value(3)
				if (b.is_equal (work_item_iteration)= false) then
					-- Remove all links connected with the given work_item
					remove_all_work_item_links(work_item_id)
					-- The iterations are different than add a comment
					text:=("Old iteration: " + b.out + ""+", New iteration: " + work_item_iteration.out + "")
					add_comment_from_modification(work_item_id,text)
					-- Modify its number with respect to the number of the new iteration
					-- Count and modify the number of the new iteration
					new_num:=count_number_work_item(work_item_iteration,work_item_project)
					create db_modify_statement.make ("UPDATE work_item SET number=? WHERE id=? ;", db)
					l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<new_num,work_item_id>>)
					-- Update the numbers of the work_items of the original iteration
					update_number(work_item_id)
					create db_modify_statement.make ("UPDATE work_item SET nb_iteration=? WHERE id=? ;", db)
					l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_iteration,work_item_id>>)
					if db_modify_statement.has_error then
						print("Error while changing the work_item iteration.")
					end
				end
				-- Checks the description
				create db_query_statement.make ("SELECT * FROM work_item WHERE id=?;",db)
				l_query_result_cursor:= db_query_statement.execute_new_with_arguments (<<work_item_id>>)
				a:= l_query_result_cursor.item.value(6).out
				if (a.same_string(work_item_description) = false) then
					-- The creators are different than add a comment
					text:=("Old description: " + a + ""+", New description: " + work_item_description + "")
					add_comment_from_modification(work_item_id,text)
					create db_modify_statement.make ("UPDATE work_item SET description=? WHERE id=? ;", db)
					l_query_result_cursor:=db_modify_statement.execute_new_with_arguments(<<work_item_description,work_item_id>>)
					if db_modify_statement.has_error then
						print("Error while changing the work_item description.")
					end
				end
				-- Returns the old name of the work_item
				Result:= old_name
			end
		end


feature --data access: LINKS

	--OK
	add_link(work_item_id1: INTEGER; work_item_id2: INTEGER)
		-- Adds a new link between the work_idem with id work_item_id1 and one with id work_item_id2	
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_insert_statement.make ("INSERT INTO link(work_item1,work_item2) VALUES (?,?);", db)
			l_query_result_cursor:=db_insert_statement.execute_new_with_arguments(<<work_item_id1,work_item_id2>>)
			if db_insert_statement.has_error then
				print("Error while inserting a new link between two work_items")
			else
				print("SUCCESS: a new link  is added between the two given work_items")
			end
		end

	link_exist(work_item_id1: INTEGER; work_item_id2: INTEGER):BOOLEAN
		-- Checks if the given link exist into the db, returns True if it exists and False otherwise
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_query_statement.make ("SELECT * FROM link WHERE work_item1 = ? AND work_item2 = ? OR work_item1 = ? AND work_item2 = ?;",db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<work_item_id1,work_item_id2,work_item_id2,work_item_id1>>)
			if l_query_result_cursor.after then
				Result := False
			else
				Result := True
			end
		end

	remove_all_work_item_links(work_item_id: INTEGER)
		-- When we delete an existing work_item we have to remove all links connect with it
		local
			l_modify_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_modify_statement.make ("DELETE FROM link WHERE work_item1 = ? OR work_item2 =?;",db)
			l_modify_result_cursor:=db_modify_statement.execute_new_with_arguments (<<work_item_id,work_item_id>>)
			if db_modify_statement.has_error then
				print("Error while deleting all links connected with the given work_item.%N")
			else
				print("SUCCESS: all links connected with the given work_item are deleted.%N")
			end
		end

	--OK
	remove_link(work_item_id1: INTEGER; work_item_id2: INTEGER)
		-- Removes an existing link between the work_idem with id work_item_id1 and one with id work_item_id2
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_modify_statement.make ("DELETE FROM link WHERE work_item1=? AND work_item2=? OR work_item1=? AND  work_item2=?;", db)
			l_query_result_cursor:=db_modify_statement.execute_new_with_arguments (<<work_item_id1,work_item_id2,work_item_id2,work_item_id1>>)
			if db_modify_statement.has_error then
				print("Error while deleting an existing link%N")
			else
				print("SUCCESS:the given link was deleted%N")
			end
		end

	--OK
	work_item_links(work_item_id: INTEGER): JSON_ARRAY
		-- Returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a link with another work_item	
		do
			-- Create the result object, in this case an empty JSON_ARRAY			
			create Result.make_array
			create db_query_statement.make("SELECT work_item2 as work_item_id FROM link WHERE work_item1=?;" , db)
			db_query_statement.execute_with_arguments (agent rows_to_json_array (?, 1, Result), <<work_item_id>>)
			create db_query_statement.make("SELECT work_item1 as work_item_id FROM link WHERE work_item2=?;" , db)
			db_query_statement.execute_with_arguments (agent rows_to_json_array (?, 1, Result), <<work_item_id>>)
			if(db_query_statement.has_error) then
				-- The work_item with the given number hasn't any link into the db				
			print("Error while getting of the link%N")
			end
		end

	--OK
	check_status(status: STRING): BOOLEAN
		-- Checks the correctness of the status field: it could be only "not started", "ongoing" or "done". Returns True if it is correct, False otherwise
		do
			if status.same_string ("Not started") OR status.same_string ("Ongoing") OR status.same_string ("Done") then
				Result:=True
			else
				Result:=False
			end
		end

	work_item_exists(id: INTEGER): BOOLEAN
		-- Checks if the given work_item exists into the db, if it doesn't exist I return True and I return Fale otherwise
		require
			valid_number: id >= 0
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_query_statement.make ("SELECT * FROM work_item WHERE id = ?;",db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<id>>)
			if l_query_result_cursor.after then
				Result := False
			else
				Result := True
			end

		end

feature --data access: COMMENTS
	--OK
	remove_all_work_item_comments(work_item_id: INTEGER)
		-- Removes all comments regarding the given work_item
		local
			l_modify_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			create db_modify_statement.make ("DELETE FROM comment WHERE work_item = ?;",db)
			l_modify_result_cursor:=db_modify_statement.execute_new_with_arguments (<<work_item_id>>)
			if db_modify_statement.has_error then
				print("Error while deleting all comments connected with the given work_item.%N")
			else
				-- All comments are deleted and so sends an appropriate message
				print("SUCCESS: all comments connected with the given work_item are deleted.%N")
			end
		end


	--OK
	add_comment(work_item_id: INTEGER; text_comment: STRING; author_comment:STRING)
		-- Adds a new comment with the given information		
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
				print("Error while inserting a new comment%N")
			else
				-- The new work_item was added to db and so sends an appropriate message	
				print("SUCCESS: the new comment was added%N")
			end
		end

	--OK
	add_comment_from_modification(work_item_id: INTEGER; text_comment: STRING)
		-- Adds a new comment with che given string from the modification of an existing work_item
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
				print("Error while inserting a new comment%N")
			else
				--The new work_item was added to db and so sends an appropriate message	
				print("SUCCESS: the new comment was added%N")
			end
		end

	--works
	work_item_comments(work_item_id: INTEGER): JSON_ARRAY
		-- Returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a comment		
		do
			-- Create the result array, in this case an empty JSON_ARRAY			
			create Result.make_array
			create db_query_statement.make ("SELECT date, content, author FROM comment WHERE work_item=? ;", db)
			db_query_statement.execute_with_arguments (agent rows_to_json_array (?, 3, Result), <<work_item_id>>)
			if db_query_statement.has_error then
				print("Error during the listing of the comments")
			else
				--The comments regarding the given work_item are listed
				print("SUCCESS: the comments regarding the given work_item are listed")
			end

		end

feature --SEARCH

	search_user(keyword: STRING): TUPLE[success: BOOLEAN; matches: JSON_ARRAY]

		local
			j_arr: JSON_ARRAY

		do
			create j_arr.make_array
			create Result.default_create

			 keyword.prepend ("%%")
			 keyword.append ("%%")

			create db_query_statement.make("SELECT email, name, surname, male as gender, role, photo FROM user WHERE email LIKE '" + keyword + "';" , db)
			db_query_statement.execute(agent rows_to_json_array (?, 6, j_arr))

			if j_arr.count > 0 then

				Result.success := True
				Result.matches := j_arr

			else
				Result.success := False
			end

		end


	search_work_items(keyword: STRING): TUPLE[success: BOOLEAN; matches: JSON_ARRAY]

		local
			j_arr: JSON_ARRAY

		do
			create j_arr.make_array
			create Result.default_create

			 keyword.prepend ("%%")
			 keyword.append ("%%")

			create db_query_statement.make("SELECT id as work_item_id, nb_iteration as iteration_number, project FROM work_item WHERE name LIKE '" + keyword + "';" , db)
			db_query_statement.execute(agent rows_to_json_array (?, 3, j_arr))

			if j_arr.count > 0 then

				Result.success := True
				Result.matches := j_arr

			else
				Result.success := False
			end

		end

	path_to_src_folder(file_num: INTEGER): STRING
		-- calculates the path to the src folder, based on the location of the .ecf file
		-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		do
			if file_num = 1 then
				Result := ".." + Operating_environment.directory_separator.out + "src/send_email_add_iteration.py "
			end
			if file_num = 2  then
				Result := ".." + Operating_environment.directory_separator.out + "src/send_email_pass.py "
			end
			if file_num = 3  then
				Result := ".." + Operating_environment.directory_separator.out + "src/send_email_rem_iteration.py "
			end
			if file_num = 4  then
				Result := ".." + Operating_environment.directory_separator.out + "src/send_email_invitation.py "
			end
			if file_num = 5 then
				Result := ".." + Operating_environment.directory_separator.out + "src/promote_owner.py "
			end
			if file_num = 6 then
				Result := ".." + Operating_environment.directory_separator.out + "src/new_owner.py "
			end
			if file_num = 7 then
				Result := ".." + Operating_environment.directory_separator.out + "src/send_email_add_member.py  "
			end
			if file_num = 8 then
				Result := ".." + Operating_environment.directory_separator.out + "src/send_email_is_added.py  "
			end
			if file_num = 9 then
				Result := ".." + Operating_environment.directory_separator.out + "src/send_email_remove_member.py  "
			end
			if file_num = 10 then
				Result := ".." + Operating_environment.directory_separator.out + "src/send_email_is_removed.py  "
			end
			if file_num = 11 then
				Result := ".." + Operating_environment.directory_separator.out + "src/send_email_welcome.py  "
			end
			if file_num = 12 then
				Result := ".." + Operating_environment.directory_separator.out + "src/send_email_add_work_item.py  "
			end
			if file_num = 15 then
				Result := ".." + Operating_environment.directory_separator.out + "src/downgrade_owner.py  "
			end
			if file_num = 14 then
				Result := ".." + Operating_environment.directory_separator.out + "src/new_member.py  "
			end
			if file_num = 13 then
				Result := ".." + Operating_environment.directory_separator.out + "src/send_email_rem_work_item.py  "
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
