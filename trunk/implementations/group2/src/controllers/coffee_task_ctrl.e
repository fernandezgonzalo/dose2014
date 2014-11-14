note
	description: "Summary description for {COFFEE_TASK_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	COFFEE_TASK_CTRL

	inherit
	COFFEE_HEADER_JSON_HELPER
		-- inherit this helper to get a procedure that simplifies setting
		-- the HTTP response header correctly

create
	make


feature {NONE} -- Creation

	make (a_dao: COFFEE_DB)
		do
			my_db := a_dao
		end

feature {NONE} -- Private attributes

	my_db: COFFEE_DB


feature -- Handlers

	create_task (req: WSF_REQUEST; res: WSF_RESPONSE)

	local

	do

	end

	get_tasks (req: WSF_REQUEST; res: WSF_RESPONSE)

	local

	do

	end

	delete_task (req: WSF_REQUEST; res: WSF_RESPONSE)

	local

	do

	end

	update_task (req: WSF_REQUEST; res: WSF_RESPONSE)

	local

	do

	end

end
