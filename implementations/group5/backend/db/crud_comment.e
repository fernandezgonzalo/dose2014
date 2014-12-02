note
	description: "This class connected provides features that query the database (project). Results are directly returned in JSON format."
	author: "Nico Orcasitas"
	date: "$Date$"
	revision: "$Revision$"


class
	CRUD_COMMENT

create
	make

	feature {NONE}

	make (database:SQLITE_DATABASE)
			-- Creation procedure
	do
		db:=database
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


	comments: JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a comments
			--returns all projects
		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM comment;", db)
			db_query_statement.execute (agent rows_to_json_array (?, 4, Result))

		end

	comment_by_id(id : NATURAL): JSON_OBJECT
			-- returns a JSON_OBJECT  that represents a comment identified by id

		do
			create Result.make
			create db_query_statement.make ("SELECT * FROM comment WHERE id = " + id.out + ";", db)
			db_query_statement.execute (agent row_to_json_object (?, 4, Result))

		end

	comment_by_id_task(id : NATURAL): JSON_ARRAY
			-- returns a JSON_ARRAY  that represents a comment identified by id_task

		do
			create Result.make_array
			create db_query_statement.make ("SELECT * FROM comment WHERE id_task = '" + id.out + "';", db)
			db_query_statement.execute (agent rows_to_json_array (?, 4, Result))

		end

	remove_comment_by_id (id: NATURAL): BOOLEAN
			-- removes the comment identified by id
		do
			create db_modify_statement.make ("DELETE FROM comment WHERE id= '" + id.out + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0  then
			--	print("Error while deleting a comment")
				Result:= false;
					-- TODO: we probably want to return something if there's an error
			else
				Result:=true;
			end
		end

	add_comment (commentary:STRING;id_task:NATURAL;id_user:NATURAL ) : TUPLE [was_created:BOOLEAN; id: INTEGER]
		local
			l_query_result_cursor: SQLITE_STATEMENT_ITERATION_CURSOR
			-- adds a new comment with the given  commentary id_task id-user
		do
			create Result
			create db_insert_statement.make ("INSERT INTO comment(commentary, id_task, id_user) VALUES ('" + commentary +"','" +id_task.out  +"', '" +  id_user.out + "');", db)
			db_insert_statement.execute
			if db_insert_statement.has_error or db_insert_statement.changes_count=0 then
			--	print("Error while inserting a new comment")
				Result.id:= -1 ;
				Result.was_created:=false;
			else
				create db_query_statement.make ("SELECT * FROM comment WHERE commentary=? AND id_task=? AND id_user=? ;", db)
				l_query_result_cursor := db_query_statement.execute_new_with_arguments (<<commentary, id_task,id_user>>)
				Result.id:= l_query_result_cursor.item.integer_value (1)
				Result.was_created:= true;
			end
		end

	update_comment (commentary:STRING; id: NATURAL):BOOLEAN
			-- updates the name of the project identified by id,
		do
			create db_modify_statement.make ("UPDATE comment SET commentary= '"+ commentary+"' WHERE id= '" + id.out + "';", db)
			db_modify_statement.execute
			if db_modify_statement.has_error or db_modify_statement.changes_count=0 then
			--	print("Error while updating a comment")
				Result:=false;
			else
				Result:=true;
			end
		end


end
