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

	make(new_email, new_user_name, new_password : STRING)
			-- Create a new user with all the attributes.
		require
			valid_email: (new_email /= void)
			valid_user_name: (new_user_name /= void)
			valid_password: (new_password /= void)
		do
			email := new_email
			username := new_user_name
			password := new_password
			is_active := true
		end

feature -- User data

	email : STRING

	username : STRING

	password : STRING

	is_active: BOOLEAN

feature -- Operations

	set_email (new_email : STRING)
			-- update the user email.
		require
			valid_email: (new_email /= void)
		do
			email := new_email
		end

	set_user_name (new_user_name : STRING)
			-- update the user name
		require
			valid_user_name: (new_user_name /= void)
		do
			username := new_user_name
		end

	set_password (new_password : STRING)
			-- update the user password
		require
			valid_password: (new_password /= void)
		do
			password := new_password
		end

end
