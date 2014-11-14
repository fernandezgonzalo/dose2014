note
	description: "Handler for tasks."
	author: "ar"
	date: "13.11.2014"
	revision: "1"

class
	TASK_CONTROLLER

inherit
	REST_CONTROLLER

create
	make

feature -- Handlers

	assign_developers (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_ack(req, res)
		end


	unassign_developers (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_ack(req, res)
		end
end
