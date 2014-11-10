note
	description: "Handlers for everything that concerns users"
	author: "Nicolò Gallo peozzi"
	date: "$Date$"
	revision: "$Revision$"

class
	USER_CTRL

create
	make

feature {NONE} --creation
	make

		do

		end

feature --private attributes

feature --handlers

	get_users(req: WSF_REQUEST; res: WSF_RESPONSE)
			--gets a list of all the users into the database;
		do

		end

	add_user(req: WSF_REQUEST; res: WSF_RESPONSE)
			--adds a new user to the database; new user's information (name, surname, mail, password,
			--gender, role, photo) are expected to be part of the request payload
		do

		end

	remove_user(req: WSF_REQUEST; res: WSF_RESPONSE)
			--removes a user from the database; user's email is expected to be part of the request payload
		do

		end

	update_user(req: WSF_REQUEST; res: WSF_RESPONSE)
			--updates user's information in the database; all user's information (name, surname, mail,
			--password, gender, role, photo) are expeced to be part of the request payload
		do

		end
	get_user_info(req: WSF_REQUEST; res: WSF_RESPONSE)
			--gets user's information from the database; user's email is expected to be part of the request payload
		do

		end

	check_user_password(req: WSF_REQUEST; res: WSF_RESPONSE)
			--checks if a given password corresponds to the one stored in the database; user's email and the
			--given password are expected to be part of the request payload
		do

		end



end
