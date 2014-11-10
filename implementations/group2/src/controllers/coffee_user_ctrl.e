note
	description: "Summary description for {COFFEE_USER_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_USER_CTRL

	inherit
	DEMO_HEADER_JSON_HELPER
		-- inherit this helper to get a procedure that simplifies setting
		-- the HTTP response header correctly

create
	make


feature {NONE} -- Creation

	make (a_dao: DEMO_DB)
		do
			my_db := a_dao
		end

feature {NONE} -- Private attributes

	my_db: DEMO_DB


feature -- Handlers

	add_user (req: WSF_REQUEST; res: WSF_RESPONSE)

	local

	do

	end

	get_users (req: WSF_REQUEST; res: WSF_RESPONSE)

	local

	do

	end

	delete_user (req: WSF_REQUEST; res: WSF_RESPONSE)

	local

	do

	end

	update_user (req: WSF_REQUEST; res: WSF_RESPONSE)

	local

	do

	end


end
