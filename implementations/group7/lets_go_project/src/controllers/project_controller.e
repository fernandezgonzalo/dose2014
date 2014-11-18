note
	description: "Handler for projects."
	author: "ar"
	date: "14.11.2014"
	revision: "1"

class
	PROJECT_CONTROLLER

inherit
	REST_CONTROLLER
redefine
	get_all,
	get
end

create
	make

feature -- Handlers


	get_all (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			-- TODO @ Vimal: Override the parent implementation to reply with json with field "invited_devs" for each project
			--				 (analogous to "USER_CONTROLLER.get()" override).

			-- Currently, we just call the superclass implementation, this has to be replaced:
			Precursor(req, res)
		end


	get (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			-- TODO @ Vimal: Override the parent implementation to reply with json with field "invited_devs"
			--				 (analogous to "USER_CONTROLLER.get()" override).

			-- Currently, we just call the superclass implementation, this has to be replaced:
			Precursor(req, res)
		end

	invite_developers (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		do
			-- TODO @ Vimal: Store the invited developers in the database table "project_shares"
			--				 Insert-call can be done in a similar way like REST_CONTROLLER.create_new()

			-- Currently, we just send back a success statuscode without storing anything in the databse. Do not remove the following call:
			reply_with_204(res)
		end


	remove_developers (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		do
			-- TODO @ Vimal: Delete the removed developers in the database table "project_shares"
			--				 Delete-call can be done in a similar way like REST_CONTROLLER.delete()

			-- Currently, we just send back a success statuscode without removing anything in the databse. Do not remove the following call:
			reply_with_204(res)
		end


feature -- Error checking handlers (authentication, authorization, input validation)

	invite_developers_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authorized (req, res, agent ensure_input_validated (req, res, agent invite_developers(req, res, ?), parse_json(req)))
		end


	remove_developers_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authorized (req, res, agent ensure_input_validated (req, res, agent remove_developers(req, res, ?), parse_json(req)))
		end
end
