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
	get_all,
	get
end

create
	make


feature -- Handlers

	get_all (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			results, sprints: JSON_ARRAY
			i: INTEGER
			sprint: JSON_OBJECT
			project_id, task_id, story_id, true_story_id: STRING

		do
			project_id := req.path_parameter("project_id").string_representation
			create results.make_array
			sprints := db.query_rows ("SELECT * FROM sprints WHERE project_id = " + project_id)
			from
				i := 1
			until
				i > sprints.count
			loop
				sprint := get_json_object_from_string(sprints.i_th(i).representation)
				add_stories_to_sprint_json(sprint)
		    	results.extend (sprint)
				i := i + 1
			end
			reply_with_200_with_data(res, results.representation)
		end


	get (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			sprint: JSON_OBJECT
			sprint_id: STRING
		do
			sprint_id := req.path_parameter ("sprint_id").string_representation
			sprint := db.query_single_row("SELECT * FROM sprints WHERE id = " + sprint_id)
			if sprint.is_empty then
				reply_with_404(res)
			else
				add_stories_to_sprint_json(sprint)
				reply_with_200_with_data(res, sprint.representation)
			end
		end


feature {None} -- Internal helpers

	add_stories_to_sprint_json(sprint: JSON_OBJECT)
		local
			stories: JSON_ARRAY
			sprint_id: STRING
		do
			sprint_id := sprint.item(create {JSON_STRING}.make_json ("id")).representation
			stories := db.query_id_list("SELECT id FROM stories WHERE sprint_id = " + sprint_id)
			sprint.put (stories, "stories")
		end

end
