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

	make (new_name: STRING; new_status: STRING; new_description: STRING; new_mpps: INTEGER; new_user_id: INTEGER)
			-- Creates a project with initial properties
		require
			not_void (new_name)
			not_void (new_description)
			not_void (new_status)
			mpps_possitive: (new_mpps > 0)
			user_id_possitive: (new_user_id >= 0)
		do
			name := new_name
			status := new_status
			description := new_description
			max_points_per_sprint := new_mpps
			user_id := new_user_id
		end

feature -- Project properties

	name : STRING

	description : STRING

	status : STRING

	max_points_per_sprint : INTEGER

	user_id : INTEGER

feature -- Project seters

	set_project_name(new_name: STRING)
	do
		name := new_name
	end

feature -- Auxiliary routines

	not_void(control: STRING) : BOOLEAN
			-- Validate if isnt void or empty
	do
		if (not control.is_equal ("")) then
			Result := TRUE
		end
	end


end
