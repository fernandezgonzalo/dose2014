note
	description: "Handler for projects."
	author: "ar"
	date: "14.11.2014"
	revision: "1"

class
	PROJECT_CONTROLLER

inherit
	REST_CONTROLLER

create
	make

feature -- Handlers

	invite_developers (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_ack(req, res)
		end


	remove_developers (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_ack(req, res)
		end
end
