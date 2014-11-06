note
	description: "Class that represents a user of the application."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-06$"
	revision: "$0.01$"

class
	USER

create
	make

feature -- Initialization

	make(new_email, new_username, new_password : STRING)
			-- Create a new user with all the attributes.
		do
			email := new_email
			username := new_username
			password := new_password
			is_active := true
		end

feature -- User data

	email : STRING

	username : STRING

	password : STRING

	is_active: BOOLEAN

end
