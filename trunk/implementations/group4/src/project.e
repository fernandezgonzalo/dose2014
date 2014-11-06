note
	description: "Project class thats represents projects in CASD system"
	author: "RioIVTeam"
	date: "November 06, 2014"
	revision: "0.01"

class
	PROJECT

create
	make

feature -- Initialization

	make (new_name: STRING; new_description: STRING; new_mpps: INTEGER)
			-- Creates a project with initial properties
		require
			not_void_or_empty (new_name)
			not_void_or_empty (new_description)
			not_void (new_mpps)
		do
			name := new_name
			description := new_description
			max_points_per_sprint := new_mpps
		end

feature -- Project properties

	name : STRING

	description : STRING

	status : STRING

	max_points_per_sprint : INTEGER

feature -- Project relations

	owner_user : USER

	colaboator_users : LINKED_LIST [USER]

	project_topics : LINKED_LIST [TOPIC]

	project_sprints : LINKED_LIST [SPRINT]

feature -- Auxiliary routines

	not_void_or_empty(control: STRING) : BOOLEAN
			-- Validate if isnt void or empty
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
