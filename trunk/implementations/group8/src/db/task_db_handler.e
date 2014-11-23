note
	description: "Summary description for {TASK_DB_HANDLER}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	TASK_DB_HANDLER

create
	make

feature{NONE}
	db: SQLITE_DATABASE
	dbQueryStatement: SQLITE_QUERY_STATEMENT
	dbInsertStatement: SQLITE_INSERT_STATEMENT
	dbModifyStatement: SQLITE_MODIFY_STATEMENT

	userDBHandler: USER_DB_HANDLER
	pbiDBHandler: PBI_DB_HANDLER

feature
	make(s: SQLITE_DATABASE; userdbHand: USER_DB_HANDLER; pbidbhand: PBI_DB_HANDLER)
		do
			db := s
			userDBHandler := userdbHand
			pbiDBHandler := pbidbhand
		end

feature
	getTaskFromId(id: INTEGER): TASK
		do
			create Result.make_default
			create dbQueryStatement.make ("SELECT * FROM Task WHERE id=" + id.out + ";", db)
			dbQueryStatement.execute (agent genTask(?, 8, Result))
			if Result.getId = 0 then
				Result := Void
			end
		end

	insertTask(t: TASK)
		do
			create dbInsertStatement.make("INSERT INTO Task(id, name, description, developer, points, state, pbi) VALUES('" + t.getid.out + "', '" +
											t.getname + "', '" + t.getdescription + "', '" + t.getDeveloper.getid.out + "', '" +
											t.getpoints.out + "', '" + t.getState.out + "', '" + t.getpbi.getid.out + "');", db)
			dbInsertStatement.execute
			if dbInsertStatement.has_error
			then print("Error while inserting task.")
			end
		end

	deleteTask(t: TASK)
		do
			create dbModifyStatement.make("DELETE FROM Task WHERE id=" + t.getid.out + ";", db)
			dbModifyStatement.execute
			if dbModifyStatement.has_error
			then print("Error while deleting task.")
			end
		end
	getTasksFromPBI(p: PBI): LINKED_SET[TASK]
		do
			create Result.make
			create dbquerystatement.make ("SELECT * FROM Task WHERE pbi=" + p.getid.out + ";", db)
			dbquerystatement.execute (agent genTasks(?, 7, Result))
			if Result.count = 0 then
				Result := Void
			end
		end

feature{NONE}
	genTask(row: SQLITE_RESULT_ROW; numColumns: NATURAL; resultObject: TASK): BOOLEAN
		local
			d: DATE_TIME
		do
			resultobject.setid (row.string_value (1).to_integer)
			resultobject.setname (row.string_value (2))
			resultobject.setdescription (row.string_value (3))
			resultobject.setDeveloper (userDBHandler.getUserFromId(row.string_value (4).to_integer))
			resultobject.setpoints (row.string_value(5).to_integer)
			if row.string_value (6).to_integer = {STATE}.completed
			then resultobject.setstate ({STATE}.completed)
			else resultobject.setstate ({STATE}.pending)
			end
			resultobject.setpbi (pbiDBHandler.getPBIFromId(row.string_value (7).to_integer))

			Result := false
		end

	genTasks(row: SQLITE_RESULT_ROW; numColumns: NATURAL; resultobject: LINKED_SET[TASK]): BOOLEAN
		local
			i: NATURAL
			d: DATE_TIME
			t: TASK
		do
			from i := 1
			until i > row.count
			loop
				create t.make_default
				t.setid (row.string_value (i).to_integer)
				t.setname (row.string_value (i + 1))
				t.setdescription (row.string_value (i + 2))
				t.setDeveloper (userDBHandler.getUserFromId(row.string_value (i + 3).to_integer))
				t.setpoints (row.string_value(i + 4).to_integer)
				if row.string_value (i + 5).to_integer = {STATE}.completed
				then t.setstate ({STATE}.completed)
				else t.setstate ({STATE}.pending)
				end
				t.setpbi (pbiDBHandler.getPBIFromId(row.string_value (i + 6).to_integer))
				resultobject.extend(t)
				i := i + 7
			end
			Result := false

		end
end