note
	description: "Handler for sprints."
	author: "ar"
	date: "13.11.2014"
	revision: "1"

class
	SPRINT_CONTROLLER

inherit
	REST_CONTROLLER
redefine
	modify_json
end

create
	make


feature {None} -- Internal helpers

	modify_json(sprint: JSON_OBJECT)
		local
			stories: JSON_ARRAY
			sprint_id: STRING
		do
			sprint_id := sprint.item(create {JSON_STRING}.make_json ("id")).representation
			stories := db.query_id_list("SELECT id FROM stories WHERE sprint_id = ?", <<sprint_id>>)
			sprint.put (stories, "stories")
		end

end
