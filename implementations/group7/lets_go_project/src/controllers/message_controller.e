note
	description: "Summary description for {MESSAGE_CONTROLLER}."
	author: "aaron"
	date: "8.12.2014"

class
	MESSAGE_CONTROLLER

inherit
	REST_CONTROLLER
redefine
	post_insert_action
end

create
	make

feature {NONE} -- Internal helpers

	post_insert_action(req: WSF_REQUEST; res: WSF_RESPONSE; new_id: INTEGER_64; input: JSON_OBJECT)
		local
			dummy: ANY
		do
			dummy := db.delete("DELETE FROM messages WHERE id NOT IN (SELECT id FROM messages ORDER BY id DESC LIMIT ?)", <<"2">>)
		end

end
