note
	description: "This class connected provides features that query the database (user). Results are directly returned in JSON format."
	author: "Nico orcasitas"
	date: "$11/11/2014$"
	revision: "$Revision$"

class
	CRUD_USER

create
	make

	feature


	make (database:SQLITE_DATABASE)
	-- Creation procedure
	do
		db:= database
	end



feature {NONE} -- Format helpers

	rows_to_json_array (a_row: SQLITE_RESULT_ROW; a_num_columns: NATURAL; a_result_array: JSON_ARRAY): BOOLEAN
			-- given the rows of a db query as input, this function turns the rows into an JSON array of JSON objects
			-- each object has as JSON keys the db's colum name and and as JSON value the db's row value
		local
			j_obj: JSON_OBJECT
					i: NATURAL
					aux: STRING;

		do
		-- create a JSON object; it will hold the values "id", "description", "user" for ech eb table entry
				create j_obj.make

				from
					i := 1
				until
					i > a_num_columns
				loop

					if  a_row.is_null (i) then
						aux:= "";
					else
						aux:=a_row.string_value (i)
					end
						j_obj.put (create {JSON_STRING}.make_json (aux), create{JSON_STRING}.make_json (a_row.column_name (i)))
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
			aux: STRING;
		do
			from
				i := 1
			until
				i > a_num_columns
			loop
				if  a_row.is_null (i) then
						aux:= "";
					else
						aux:=a_row.string_value (i)
					end
						a_result_object.put (create {JSON_STRING}.make_json (aux), create{JSON_STRING}.make_json (a_row.column_name (i)))
						i := i + 1
			end

			Result := False
		end


feature -- Data access


	users: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a user
			--returns all users
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM user;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 9, Result))

		end

	user_by_id(id : NATURAL): JSON_OBJECT
			-- returns a JSON_OBJECT  that represents a user identified by id

		do
			create Result.make
			create db_query_statement.make ("SELECT * FROM user WHERE id = '" + id.out + "';", db)
			db_query_statement.execute (agent row_to_json_object (?, 9, Result))

		end

	user_by_email(email : STRING): JSON_OBJECT
			-- returns a JSON_OBJECT  that represents a user identified by id

		do
			create Result.make
			create db_query_statement.make ("SELECT * FROM user WHERE email = '" + email + "';", db)
			db_query_statement.execute (agent row_to_json_object (?, 9, Result))

		end

	remove_user_by_id (id: NATURAL): BOOLEAN
			-- removes the user identified by id
		do
			create db_modify_statement.make ("DELETE FROM user WHERE id= '" + id.out + "' ;", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while deleting a Todo")
				Result:= false;
					-- TODO: we probably want to return something if there's an error
			else
				Result:=true;
			end
		end

	add_user (email: STRING;username: STRING ;password: STRING; name: STRING; last_lgn: STRING; is_adminn: INTEGER ):TUPLE [was_created:BOOLEAN; id: INTEGER]
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do	-- adds a new user with the given user name, password,email, name
			create Result

			create db_insert_statement.make ("INSERT INTO user (email,username,password,name,last_login,is_admin) VALUES ('" + email +"', '" +username  +"', '" +  password  +"', '" + name + "', '"+last_lgn +"', '"+ is_adminn.out + "');", db)
			db_insert_statement.execute
			if db_insert_statement.has_error or db_insert_statement.changes_count=0 then
			--	print("Error while inserting a new user")
				Result.id:= -1 ;
				Result.was_created:=false;
			else
				create db_query_statement.make ("SELECT * FROM user WHERE email=? and password =? ;", db)
				l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<email, password>>)
				Result.id:= l_query_result_cursor.item.integer_value (1)
				Result.was_created:= true;
			end
		end

--	update_user_photo (id: NATURAL)
--			-- updates the picture of the user identified by id
--		do
--			create db_modify_statement.make ("UPDATE user SET photo= foto nueva WHERE id=" + id.out + ";", db)
--			db_modify_statement.execute
--			if db_modify_statement.has_error then
--				print("Error while deleting an user")
--					-- TODO: we probably want to return something if there's an error
--			end
--		end

	update_user_password (id: NATURAL; new_pass: STRING): BOOLEAN
			-- updates the password of the user identified by id
		do
			create db_modify_statement.make ("UPDATE user SET password= '"+ new_pass+"' WHERE id= '" + id.out + "' ;", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while updating an user")
				Result:=false
					-- TODO: we probably want to return something if there's an error
			else
				Result:= true;
			end
		end

	update_user_name (id: NATURAL; new_name: STRING): BOOLEAN
			-- updates the name of the user identified by id
		do
			create db_modify_statement.make ("UPDATE user SET name= '"+ new_name+ "' WHERE id= '" + id.out + "' ;", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while updating an user")
				Result:=false
					-- TODO: we probably want to return something if there's an error
			else
				Result:= true;
			end
		end

	update_user_email (id: NATURAL; new_email: STRING): BOOLEAN
			-- updates the email of the user identified by id
		do
			create db_modify_statement.make ("UPDATE user SET email= '"+ new_email+ "' WHERE id= '" + id.out + "' ;", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while updating an user")
					Result:=false
						-- TODO: we probably want to return something if there's an error
				else
					Result:= true;
			end
		end

	update_user_username (id: NATURAL; new_username: STRING): BOOLEAN
			-- updates the username of the user identified by id
		do
			create db_modify_statement.make ("UPDATE user SET username= '"+ new_username+ "' WHERE id= '" + id.out + "' ;", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while updating an user")
					Result:=false
						-- TODO: we probably want to return something if there's an error
				else
					Result:= true;
			end
		end

		update_user_last_login (id: NATURAL; new_last_login: STRING): BOOLEAN
				-- updates the last_login of the user identified by id
			do
				create db_modify_statement.make ("UPDATE user SET last_login= '"+ new_last_login + "' WHERE id= '" + id.out + "' ;", db)
				db_modify_statement.execute
				if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
				--	print("Error while updating an user")
						Result:=false
							-- TODO: we probably want to return something if there's an error
					else
						Result:= true;
				end
			end

			update_user_last_login_today (id: NATURAL): BOOLEAN
				-- updates the last_login with current day of the user identified by id
			do
				create db_modify_statement.make ("UPDATE user SET last_login= datetime() WHERE id= '" + id.out + "' ;", db)
				db_modify_statement.execute
				if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
				--	print("Error while updating an user")
						Result:=false
							-- TODO: we probably want to return something if there's an error
					else
						Result:= true;
				end
			end

	update_user_is_admin (id: NATURAL; new_is_admin: NATURAL): BOOLEAN
				-- updates the is_admin of the user identified by id
			do
				create db_modify_statement.make ("UPDATE user SET is_admin= '"+ new_is_admin.out + "' WHERE id= '" + id.out + "' ;", db)
				db_modify_statement.execute
				if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
				--	print("Error while updating an user")
						Result:=false
							-- TODO: we probably want to return something if there's an error
					else
						Result:= true;
				end
			end

	user_exists_with_email (email: STRING) : TUPLE[exists: BOOLEAN; id: INTEGER]
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			--create a result object
			create Result
			create db_query_statement.make ("SELECT * FROM user WHERE email=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments(<<email>>)
			if l_query_result_cursor.after then
				Result.exists := False
				Result.id := -1
			else
				Result.exists := True
				Result.id := l_query_result_cursor.item.integer_value (1)
			end
		end

		user_exists_with_username (username: STRING) : TUPLE[exists: BOOLEAN; id: INTEGER]
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
			--create a result object
			create Result
			create db_query_statement.make ("SELECT * FROM user WHERE username=?;", db)
			l_query_result_cursor := db_query_statement.execute_new_with_arguments(<<username>>)
			if l_query_result_cursor.after then
				Result.exists := False
				Result.id := -1
			else
				Result.exists := True
				Result.id := l_query_result_cursor.item.integer_value (1)
			end
		end

		has_user_with_password (email, a_password: STRING): TUPLE[has_user: BOOLEAN; id:INTEGER; email,username,password,name,last_login:STRING;is_admin: INTEGER]
				-- checks if a user with given username and password exists
				-- if yes, the result tuple value "has_user" will be true and "id" ,"email","username","password", "name", "last_login" and "is_admin" will be set
				-- otherwise, "has_user" will be false and "id" and "username" will not be set
			local
				l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			do
					-- create a result object
				create Result

				create db_query_statement.make ("SELECT * FROM user WHERE email=? AND password=?;", db)
				l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<email, a_password>>)


				if l_query_result_cursor.after then
						-- there are no rows in the result of the query, thus no user with that password exits
				--	print("Did not find a user with email '" + email  + "' and password '" + a_password + "' in the dataase.%N")
					Result.has_user := False
				else
				--	print("Found a user email '" + email + "' and password '" + a_password + "' in the database.%N")
					Result.has_user := True
					Result.id := l_query_result_cursor.item.integer_value (1)
					Result.email := l_query_result_cursor.item.value (2).out
					Result.username := l_query_result_cursor.item.value (3).out
					Result.password := l_query_result_cursor.item.value (4).out
					Result.name := l_query_result_cursor.item.value (5).out
					Result.last_login := l_query_result_cursor.item.value (7).out
					Result.is_admin := l_query_result_cursor.item.integer_value (8)
				end
			end

		user_exists(id: NATURAL): BOOLEAN
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
		do
				create Result
				create db_query_statement.make ("SELECT * FROM user WHERE id=?;", db)
				l_query_result_cursor := db_query_statement.execute_new_with_arguments(<<id>>)
				if l_query_result_cursor.after then
					Result := False
				else
					Result := True
				end
		end

feature {NONE}--login

	is_admin(id:INTEGER): JSON_OBJECT
	--returns the username and is_admin of the user identified by id
		do
			create Result.make
			create db_query_statement.make ("SELECT username,is_admin FROM user WHERE id = '" + id.out + "' ;", db)
			db_query_statement.execute (agent row_to_json_object (?, 2, Result))

		end

	last_login(id:NATURAL): JSON_OBJECT
	--returns the username and the last login of the user identified by id
		do
			create Result.make
			create db_query_statement.make ("SELECT username,last_login FROM user WHERE id = '" + id.out + "' ;", db)
			db_query_statement.execute (agent row_to_json_object (?, 2, Result))

		end

	crypto_pass(user_password: STRING): TUPLE [salt:INTEGER_64; hashed_password: STRING]
	--Encrypts the password
	local
        bcrypt: BCRYPT
        hashed_password: STRING
        a_salt_generator: SALT_GENERATOR
        salt: INTEGER_64
        pass: STRING
    do
    	create Result
        a_salt_generator.make (5)
        salt := a_salt_generator.new_random
        create bcrypt.make
        pass := user_password + salt.out
        hashed_password := bcrypt.hashed_password (pass, bcrypt.default_gensalt)
        Result.hashed_password := hashed_password
        Result.salt := salt;
   	end

	valid_pass(password_entry: STRING;hashed_password: STRING;salt: INTEGER_64): BOOLEAN
	--Params: the entered password and encrypted password
	--the function tells us if the password entered is correct
	local
        bcrypt: BCRYPT
        pass: STRING
    do
        create bcrypt.make
        pass := password_entry + salt.out;
        if bcrypt.is_valid_password (pass, hashed_password) then
             Result := true
        else
             Result := false
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
