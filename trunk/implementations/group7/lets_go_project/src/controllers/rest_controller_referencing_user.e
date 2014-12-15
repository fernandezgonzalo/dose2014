note
	description: "Summary description for {REST_CONTROLLER_REFERENCING_USER}."
	author: "aaron"
	date: "1.12.2014"

class
	REST_CONTROLLER_REFERENCING_USER

inherit
	REST_CONTROLLER

create
	make


feature -- Handlers

	add_users (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		do
			perform_transaction_for_all_users(req, res, input, agent add_user_transaction(?, ?))
		end


	remove_users (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		do
			perform_transaction_for_all_users(req, res, input, agent remove_user_transaction(?, ?))
		end


feature -- Error checking handlers (authentication, authorization, input validation)

	add_users_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent ensure_input_validated (req, res, agent add_users(req, res, ?), get_json_object_from_request(req))))
		end


	remove_users_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent ensure_input_validated (req, res, agent remove_users(req, res, ?), get_json_object_from_request(req))))
		end


feature {None} -- Internal helpers

	perform_transaction_for_all_users (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT; transaction: PROCEDURE [ANY, TUPLE])
		local
			resource_id: STRING
			user_array: JSON_ARRAY
			i: INTEGER
		do
			resource_id := req.path_parameter (uri_id_name).string_representation

			if input.has_key(jkey("emails")) then

			end

			user_array := get_json_array_from_string(input.item("devs").representation)
			if user_array /= Void then
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
				reply_with_400(res)
			end
		end

	add_user_transaction(resource_id: STRING; user_id: STRING)
		do
		end

	remove_user_transaction(resource_id: STRING; user_id: STRING)
		do
		end

end
