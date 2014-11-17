note
	description: "Handler for tasks."
	author: "ar"
	date: "13.11.2014"
	revision: "1"

class
	TASK_CONTROLLER

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
			-- TODO @ Vimal: Override the parent implementation to reply with json with field "assigned_devs" for each task
			--				 (analogous to "USER_CONTROLLER.get()" override).

			-- Currently, we just call the superclass implementation, this has to be replaced:
			Precursor(req, res)
		end


	get (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			-- TODO @ Vimal: Override the parent implementation to reply with json with field "assigned_devs"
			--				 (analogous to "USER_CONTROLLER.get()" override).

			-- Currently, we just call the superclass implementation, this has to be replaced:
			Precursor(req, res)
		end

	assign_developers (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			-- TODO @ Vimal: Store the assigned developers in the database table "task_assignments"
			--				 Insert-call can be done in a similar way like REST_CONTROLLER.create_new()

			-- Currently, we just send back ACK without storing anything in the databse. Do not remove the following call:
			reply_with_ack(req, res)
		end


	unassign_developers (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			-- TODO @ Vimal: Delete the unassigned developers in the database table "task_assignments"
			--				 Delete-call can be done in a similar way like REST_CONTROLLER.delete()

			-- Currently, we just send back ACK without removing anything in the databse. Do not remove the following call:
			reply_with_ack(req, res)
		end
end
