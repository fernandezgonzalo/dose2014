note
	description: "Project class thats represents projects in CASD system"
	author: "$Rio Cuarto4 Team$"
	date: "$2014-11-06$"
	revision: "$0.01$"

class
	PROJECT

create
	make

feature -- Initialization

	make (new_name: STRING; new_description: STRING; new_mpps: INTEGER)
			-- Creates a project with initial properties
		require
			not_void (new_name)
			not_void (new_description)
			mpps_possitive: (new_mpps > 0)
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

	not_void(control: STRING) : BOOLEAN
			-- Validate if isnt void or empty
	do
		if (not control.is_equal ("")) then
			Result := TRUE
		end
	end


end
