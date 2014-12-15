note
	description: "Request handler for messages."
	author: "aaron"
	date: "8.12.2014"


class
	MESSAGE_CONTROLLER


inherit
	REST_CONTROLLER
redefine
	make,
	post_insert_action
end


create
	make


feature {NONE} -- Creation

	make (a_db: DATABASE; a_session_manager: WSF_SESSION_MANAGER)
			-- Initialization and configuration for this resource.
		do
			Precursor(a_db, a_session_manager)
			resource_name := "message"
			table_name := "messages"
			uri_id_name := "message_id"
			parent_uri_id_name := "project_id"
			required_create_new_json_fields := <<"text", "timestamp", "user_id">>
			optional_create_new_json_fields := <<>>
			required_update_json_fields := <<>>
			optional_update_json_fields := <<"text", "timestamp", "user_id", "id">>
		end


feature {NONE} -- Internal helpers

	post_insert_action(req: WSF_REQUEST; res: WSF_RESPONSE; new_id: INTEGER_64; input: JSON_OBJECT)
			-- Only store up to 20 messages per project.
		local
			dummy: ANY
		do
			dummy := db.delete("DELETE FROM messages WHERE id NOT IN (SELECT id FROM messages ORDER BY id DESC LIMIT ?)", <<"20">>)
		end

end
