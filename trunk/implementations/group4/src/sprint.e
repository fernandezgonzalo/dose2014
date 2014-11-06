note
	description: "Summary description for {SPRINT}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	SPRINT

create
	make

feature -- Initialization

	make (new_id: INTEGER; new_status: STRING; new_duration: INTEGER)
			-- Creates a project with initial properties
		require
			not_void_or_empty (new_status)
			not_void (new_id)
			not_void (new_duration)
		do
			id := new_id
			status := new_status
			duration := new_duration
		end

feature -- Sprint properties

	id : INTEGER

	duration : INTEGER

	status : STRING


feature -- Sprint relations

	project_belong : PROJECT

	sprint_topics : LINKED_LIST [TOPIC]

	sprint_task : LINKED_LIST [TASK]

feature -- Auxiliary routines

	not_void_or_empty(control: STRING) : BOOLEAN
			-- Validate if string isnt void or empty
	do
		if (control /= Void) and (not control.is_equal ("")) then
			Result := TRUE
		end
	end

	not_void (control: INTEGER) : BOOLEAN
		-- Validate integer isnt void
	do
		if (control /= Void) then
			Result := TRUE
		end
	end

end

