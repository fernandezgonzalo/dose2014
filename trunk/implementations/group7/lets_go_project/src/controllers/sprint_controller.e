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
	is_input_valid,
	modify_json
end

create
	make

feature -- Handlers

	burndown_chart (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
		do
			reply_with_200_with_data(res, "{%"total_task_count%":100,%"tasks_remaining%":[100,90,90,85,80,80,80]}")
		end


feature -- Error checking handlers (authentication, authorization, input validation)

	burndown_chart_authorized (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authenticated (req, res, agent ensure_authorized (req, res, agent burndown_chart(req, res)))
		end


feature {None} -- Internal helpers

	is_input_valid(req: WSF_REQUEST; input: JSON_OBJECT): BOOLEAN
		local
			sprint_id, project_id: STRING
			start_date_key, end_date_key, id_key: JSON_STRING
			start_date, end_date: STRING
		do
			create id_key.make_json("id")
			create start_date_key.make_json("start_date")
			create end_date_key.make_json("end_date")
			project_id := get_parent_id(req)

			if not input.has_key (start_date_key) and not input.has_key (end_date_key) then
					-- start and end date not affected at all
				Result := True

			else
					-- start or end date affected, check for overlaps:
				if input.has_key(id_key) then
						-- Update of an existing sprint
					sprint_id := input.item(id_key).representation

					if input.has_key (start_date_key) and not input.has_key (end_date_key) then
							-- only start_date given, end_date remains unchanged
						start_date := get_string_from_json(input.item(start_date_key))
						end_date := db.query_single_row ("SELECT end_date FROM sprints WHERE id = ?", <<sprint_id>>).representation

					elseif input.has_key (end_date_key) and not input.has_key (start_date_key) then
							-- only end_date given, start_date remains unchanged
						start_date := db.query_single_row ("SELECT start_date FROM sprints WHERE id = ?", <<sprint_id>>).representation
						end_date := get_string_from_json(input.item(end_date_key))

					elseif input.has_key (start_date_key) and input.has_key (end_date_key) then
							-- start_date and end_date given
						start_date := get_string_from_json(input.item(start_date_key))
						end_date := get_string_from_json(input.item(end_date_key))
					end
					Result := sprint_does_not_overlap(project_id, start_date, end_date)

				else
						-- Creation of a new sprint
					if not input.has_key (start_date_key) or not input.has_key (end_date_key) then
							-- start_date or end_date missing
						Result := False

					else
							-- start_date and end_date given
						start_date := get_string_from_json(input.item(start_date_key))
						end_date := get_string_from_json(input.item(end_date_key))
						Result := sprint_does_not_overlap(project_id, start_date, end_date)
					end
				end
			end
		end


	sprint_does_not_overlap(project_id, start_date, end_date: STRING): BOOLEAN
		do
			Result :=  db.query_rows ("SELECT id FROM sprints where project_id = ? AND (start_date > ? AND start_date < ? OR end_date > ? AND end_date < ? OR start_date <= ? AND end_date >= ?)", <<project_id, start_date, end_date, start_date, end_date, start_date, end_date>>).count = 0
		end


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
