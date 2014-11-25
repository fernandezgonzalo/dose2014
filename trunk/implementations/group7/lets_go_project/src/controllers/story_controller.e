note
	description: "Handler for stories."
	author: "ar"
	date: "13.11.2014"
	revision: "1"

class
	STORY_CONTROLLER

inherit
	REST_CONTROLLER
redefine
	modify_json
end

create
	make


feature {None} -- Internal helpers

	modify_json(story: JSON_OBJECT)
		local
			tasks: JSON_ARRAY
			story_id: STRING
		do
			story_id := story.item(create {JSON_STRING}.make_json ("id")).representation
			tasks := db.query_id_list("SELECT id FROM tasks WHERE story_id = ?", <<story_id>>)
			story.put (tasks, "tasks")
		end

end
