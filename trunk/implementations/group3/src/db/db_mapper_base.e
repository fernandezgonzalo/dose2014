note
	description: "Basic class connected provides features that query the database. Results are directly returned in JSON format."
	author: "Oleg Ponomarev"
	date: "$Date$"
	revision: "$Revision$"

class
	DB_MAPPER_BASE
create
	make

feature {NONE}

	make (a_db: SQLITE_DATABASE)
		require
			is_accessible: a_db /= Void AND a_db.is_accessible AND a_db.is_readable AND a_db.is_writable
		do
			db := a_db
		end

feature {NONE} -- Format helpers
	rows_to_json_array(a_row: SQLITE_RESULT_ROW; a_num_columns: NATURAL; a_result_array: JSON_ARRAY): BOOLEAN
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


feature -- Data access

	get_all_object_ids (a_table_name: STRING): JSON_ARRAY
			-- returns a JSON_ARRAY contains each element id
		require
			is_table_name_correct: a_table_name /= Void
		do
			create Result.make_array

			create db_query_statement.make ("SELECT t.id FROM " + a_table_name + " As t;" , db)

			db_query_statement.execute (agent rows_to_json_array (?, 1, Result))
		end

	list_all_object_ids (a_table_name: STRING): JSON_ARRAY
			-- returns a JSON_ARRAY contains each element id
		require
			is_table_name_correct: a_table_name /= Void
		do
			create Result.make_array

			create db_query_statement.make ("SELECT t.id FROM " + a_table_name + " As t;" , db)

			db_query_statement.execute (agent rows_to_json_array (?, 1, Result))
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
