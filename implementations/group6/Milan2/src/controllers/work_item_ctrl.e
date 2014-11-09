note
	description: "Summary description for {WORK_ITEM_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	WORK_ITEM_CTRL

create
	make

feature {NONE} --creation

	make
		do

		end


feature --private attributes


feature --handlers about work_items

	get_work_item_info(req: WSF_REQUEST; res: WSF_RESPONSE)
		--sends a response which contains a json object with the information about a work_item; the work_item_id is expected to be
		--part of the request payload
		do

		end

	create_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		--adds a new work_item; iteration number (can't be empty), project name (can't be empty), name (can't be empty and should be less
		--than 40 characters), description (can't be empty and has less than 165536 characters), created_by (can't be empty)
		--and owner are expected to be part of the request payload
		do

		end

	delete_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		--deletes an existing work_item; work_item_id is expected to be part of the request payload
		do

		end

	update_work_item(req: WSF_REQUEST; res: WSF_RESPONSE)
		--updates an existing work_item; all the information about it (number, iteration, project, name (can't be empty and
		--has less than 40 characters), description (can't be empty and has less than 165536 characters), points (can't be empty), created_by,
		--owner) is expected to be part of the request payload
		do

		end

	get_all_iteration_work_items(req: WSF_REQUEST; res: WSF_RESPONSE)
			--gets all the work items related to an iteration; project's name and iteration's number are expected to be
			--part of the request paylod
		do

		end


feature --handlers about comments

	add_comment(req: WSF_REQUEST; res: WSF_RESPONSE)
		--adds a new comment; all the information abount it (date, work_item, content, author) should be not empty and are expected to be part of the
		--request payload
		do

		end

	get_all_work_item_comments(req: WSF_REQUEST; res: WSF_RESPONSE)
		 --sends a response which contains a json array with all comments about a certain work_item; the work_item ID is expected to be part of the request payload
		 do

		 end


feature -- handlers about links

	add_link(req: WSF_REQUEST; res: WSF_RESPONSE)
		--adds a new link between two work_items; both id are expected to be part of the request payload
		do

		end

	remove_link(req: WSF_REQUEST; res: WSF_RESPONSE)
		--removes an existing link;  both id are expected to be part of the request payload
		do

		end

	get_all_work_item_links(req: WSF_REQUEST; res: WSF_RESPONSE)
		--send a response which contains a json array with all links about a certain work_item; the work_item is expected to be part of the request payload
		do

		end

end
