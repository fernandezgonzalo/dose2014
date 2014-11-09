note
	description: "Sprint class thats represents sprints in CASD system"
	author: "$Rio Cuarto4 Team$"
	date: "$2014-11-06$"
	revision: "$0.01$"

class
	SPRINT

create
	make

feature -- Initialization

	make (new_id: INTEGER; new_status: STRING; new_duration: INTEGER)
			-- Creates a project with initial properties
		require
			not_empty (new_status)
			possitive_id: (new_id >= 0)
			greater_zero: (new_duration > 0)
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

	not_empty(control: STRING) : BOOLEAN
			-- Validate if string isnt void or empty
	do
		if (not control.is_equal ("")) then
			Result := TRUE
		end
	end


end

