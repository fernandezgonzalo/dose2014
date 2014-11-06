note
	description: "Class that represents a user of the application."
	author: "Facundo Molina"
	date: "$November 5, 2014$"
	revision: "$0.1$"

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
