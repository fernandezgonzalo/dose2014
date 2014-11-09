note
	description: "Handlers for everything that concerns iterations"
	author: "Nicolò Gallo peozzi"
	date: "$Date$"
	revision: "$Revision$"

class
	ITERATION_CTRL

create
	make

feature {NONE} --creation
	make

	do
	end

feature --private attributes

feature --handlers

	get_all_project_iterations(req: WSF_REQUEST; res: WSF_RESPONSE)
			--gets all the iterations of a specified project; project's name is expected to be part of the request payload
		do

		end

	create_iteration(req: WSF_REQUEST; res: WSF_RESPONSE)
			--creates a new iteration in respect to a specified project; project's name and iteration number are expected
			--to be part of the request payload
		do

		end

	delete_iteration(req: WSF_REQUEST; res: WSF_RESPONSE)
			--deletes an iteration from the database; project's name and iteration's number are expected to be part of
			--the request paylod

		do

		end

	get_all_iteration_work_items(req: WSF_REQUEST; res: WSF_RESPONSE)
			--gets all the work items related to an iteration; project's name and iteration's number are expected to be
			--part of the request paylod
		do

		end

end
