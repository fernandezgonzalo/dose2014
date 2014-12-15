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

	make (a_db: SQLITE_DATABASE; a_table_name: STRING)
		require
			is_accessible: a_db /= Void AND a_db.is_accessible AND a_db.is_readable AND a_db.is_writable
			is_table_name_correct: a_table_name /= Void
		do
			db := a_db
			table_name := a_table_name
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

	list_all_object_ids: JSON_ARRAY
		do
			create Result.make_array

			create db_query_statement.make ("SELECT t.id FROM " + table_name + " As t;" , db)

			db_query_statement.execute (agent rows_to_json_array (?, 1, Result))
		end

	get_all: JSON_ARRAY
			do
				create Result.make_array
				create db_query_statement.make ("SELECT * FROM " + table_name + ";" , db)

				db_query_statement.execute (agent rows_to_json_array (?, 4, Result))
			end

	delete_by_id(id: NATURAL)
		do
			create db_modify_statement.make ("DELETE FROM " + table_name + " WHERE id=" + id.out + ";", db)
			db_modify_statement.execute
		ensure
			without_errors: not db_modify_statement.has_error
		end

	get_by_id(id: NATURAL): JSON_ARRAY
		do
			create Result.make_array
			create db_query_statement.make("SELECT * FROM " + table_name + " WHERE id =" + id.out + ";" , db)

			db_query_statement.execute(agent rows_to_json_array(?, 4, Result))
		end


	update_fields(an_update: JSON_OBJECT; an_id: INTEGER)
		require
			has_json: attached {JSON_OBJECT} an_update
		local
			keys : ARRAY [JSON_STRING]
			index: INTEGER
			query: STRING

		do
			keys := an_update.current_keys
			create query.make_from_string("UPDATE " + table_name + " SET")
			create index

			from index := keys.lower
			until index = keys.upper
			loop
				query.append_string(keys.at(index).representation + " = " + an_update.item (keys.at (index)).representation + ", ")
				index := index + 1

			end
			query.append_string(keys.at(keys.upper).representation + " = " + an_update.item(keys.at(keys.upper)).representation)
			query.append_string(" WHERE id = " + an_id.out + ";")

			create db_modify_statement.make(query, db)
			db_modify_statement.execute

		end

	create_by_fields(a_params: JSON_OBJECT): JSON_ARRAY
		require
			has_json: not attached {JSON_OBJECT} a_params
		do
			--TODO if needed
		end



feature {NONE}
	table_name: STRING

	db: SQLITE_DATABASE
		-- the database

	db_query_statement: SQLITE_QUERY_STATEMENT
		-- an sql query statement for the db

	db_insert_statement: SQLITE_INSERT_STATEMENT
		-- an sql insert statement for the db

	db_modify_statement: SQLITE_MODIFY_STATEMENT
		-- other sql modification statment for the db, e.g. DELETE
end
