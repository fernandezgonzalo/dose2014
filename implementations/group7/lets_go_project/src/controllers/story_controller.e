note
	description: "Handler for stories."
	author: "ar"
	date: "13.11.2014"

class
	STORY_CONTROLLER

inherit
	REST_CONTROLLER
redefine
	make,
	modify_json
end

create
	make


feature {NONE} -- Creation

	make (a_db: DATABASE; a_session_manager: WSF_SESSION_MANAGER)
			-- Initialization and configuration for this resource.
		do
			Precursor(a_db, a_session_manager)
			resource_name := "story"
			table_name := "stories"
			uri_id_name := "story_id"
			parent_uri_id_name := "sprint_id"
			required_create_new_json_fields := <<"title", "description">>
			optional_create_new_json_fields := <<"points", "notes">>
			required_update_json_fields := <<>>
			optional_update_json_fields := <<"title", "description", "points", "notes", "id">>
		end


feature {None} -- Internal helpers

	modify_json(story: JSON_OBJECT)
		local
			tasks: JSON_ARRAY
			story_id: STRING
		do
			story_id := story.item(jkey("id")).representation
			tasks := db.query_id_list("SELECT id FROM tasks WHERE story_id = ?", <<story_id>>)
			story.put (tasks, "tasks")
		end

end
