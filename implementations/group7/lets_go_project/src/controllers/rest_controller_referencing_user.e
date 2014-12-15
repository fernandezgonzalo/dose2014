note
	description: "Handler for restful requests and resources that can be (un)assigned to users."
	author: "aaron"
	date: "1.12.2014"

deferred class
	REST_CONTROLLER_REFERENCING_USER


inherit
	REST_CONTROLLER


feature -- Handlers

	add_users (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
			-- Handler to add the users specified in 'input' to this resource.
		do
			perform_transaction_for_all_users(req, res, input, agent add_user_transaction(?, ?))
		end


	remove_users (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
			-- Handler to remove the users specified in 'input' from this resource.
		do
			perform_transaction_for_all_users(req, res, input, agent remove_user_transaction(?, ?))
		end


feature -- Error checking handlers (authentication, authorization, input validation)

	add_users_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Ensure the client is allowed to add users to this resource.
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent ensure_input_validated (req, res, agent add_users(req, res, ?), get_json_object_from_request(req))))
		end


	remove_users_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
			-- Ensure the client is allowed to remove users from this resource.
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent ensure_input_validated (req, res, agent remove_users(req, res, ?), get_json_object_from_request(req))))
		end


feature {None} -- Internal helpers

	perform_transaction_for_all_users (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT; transaction: PROCEDURE [ANY, TUPLE])
			-- Perform some 'transaction' to all users specified in 'input'.
		local
			resource_id: STRING
			user_array: JSON_ARRAY
			i: INTEGER
		do
			resource_id := req.path_parameter (uri_id_name).string_representation
			user_array := get_json_array_from_string(input.item("devs").representation)
			if user_array /= Void then
					-- perform 'transaction' for all users in the user_array.
				from
					i := 1
				until
					i > user_array.count
				loop
					transaction.call ([resource_id, user_array.i_th(i).representation])
					i := i + 1
				end
				reply_with_204(res)
			else
					-- no users where specified.
				reply_with_400(res)
			end
		end

	add_user_transaction(resource_id: STRING; user_id: STRING)
			-- Default implementation to actually add a user to a resource.
			-- Has to be overriden by subclasses to actually modify the database accordingly.
		do
		end


	remove_user_transaction(resource_id: STRING; user_id: STRING)
			-- Default implementation to actually remove a user from a resource.
			-- Has to be overriden by subclasses to actually modify the database accordingly.
		do
		end
end
