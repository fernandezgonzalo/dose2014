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
	make,
	is_input_valid,
	modify_json
end

create
	make


feature {NONE} -- Creation

	make (a_db: DATABASE; a_session_manager: WSF_SESSION_MANAGER)
		do
			Precursor(a_db, a_session_manager)
			resource_name := "sprint"
			table_name := "sprints"
			uri_id_name := "sprint_id"
			parent_uri_id_name := "project_id"
			required_create_new_json_fields := <<"name", "start_date", "end_date", "status">>
			optional_create_new_json_fields := <<>>
			required_update_json_fields := <<>>
			optional_update_json_fields := <<"name", "start_date", "end_date", "status", "id">>
		end

feature -- Handlers

	burndown_chart (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			story_ids, completions: JSON_ARRAY
			story_ids_str, total_task_count, start_date_str, end_date_str, tasks_remaining, completion_date_str: STRING
			dates_json: JSON_OBJECT
			start_date, end_date, current_date: DATE
			i, total_task_count_int, remaining_task_count: INTEGER
			completions_table: HASH_TABLE [STRING, STRING]
		do
			story_ids := db.query_id_list ("SELECT id FROM stories WHERE sprint_id = ?", <<get_id(req)>>)
			story_ids_str := get_comma_separated_string_from_array(story_ids)
			completions := db.query_rows("SELECT completion_date, COUNT(*) as completed FROM tasks WHERE status = 2 AND NOT completion_date IS NULL AND story_id IN (" + story_ids_str + ") GROUP BY completion_date ORDER BY completion_date ASC", Void)
			create completions_table.make (completions.count)

			across completions as completion loop
				if attached {JSON_OBJECT} completion.item as completion_obj then
					completion_date_str := completion_obj.item(create {JSON_STRING}.make_json ("completion_date")).representation
					completion_date_str.replace_substring_all ("%"", "")
					completions_table.put (completion_obj.item(create {JSON_STRING}.make_json ("completed")).representation, completion_date_str)
				end
			end

			print(completions_table)

			total_task_count := db.query_single_row ("SELECT COUNT(*) AS c FROM tasks WHERE story_id IN (" + story_ids_str + ")", Void).item (create {JSON_STRING}.make_json ("c")).representation
			total_task_count_int := total_task_count.to_integer

			dates_json := db.query_single_row ("SELECT start_date, end_date FROM sprints WHERE id = ?", <<get_id (req)>>)
			start_date_str := dates_json.item(create {JSON_STRING}.make_json ("start_date")).representation
			end_date_str := dates_json.item(create {JSON_STRING}.make_json ("end_date")).representation
			start_date_str.replace_substring_all ("%"", "")
			end_date_str.replace_substring_all ("%"", "")
			create start_date.make_from_string (start_date_str, "yyyy-[0]mm-[0]dd")
			create end_date.make_from_string (end_date_str, "yyyy-[0]mm-[0]dd")

			create current_date.make (start_date.year, start_date.month, start_date.day)

			tasks_remaining := ""
			remaining_task_count := total_task_count_int
			from
                i := 0
            until
                i > end_date.relative_duration(start_date).days_count
            loop
            	current_date.day_add(1)
            	if completions_table.has_key(current_date.formatted_out("yyyy-[0]mm-[0]dd")) then
            		remaining_task_count := remaining_task_count - completions_table.found_item.to_integer
            	end
            	tasks_remaining := tasks_remaining + remaining_task_count.out

            	if i < end_date.relative_duration(start_date).days_count then
            		tasks_remaining := tasks_remaining + ", "
            	end
                i := i + 1
            end

			reply_with_200_with_data(res, "{%"total_task_count%":" + total_task_count + ",%"tasks_remaining%":[" + tasks_remaining + "]}")
		end

	get_comma_separated_string_from_array(a: JSON_ARRAY): STRING
		local
			i: INTEGER
		do
			Result := ""
			from
                i := 1
            until
                i > a.count
            loop
            	Result := Result + a.i_th (i).representation

            	if i < a.count then
            		Result := Result + ", "
            	end
                i := i + 1
            end
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
					Result := sprint_does_not_overlap(sprint_id, project_id, start_date, end_date)
					print("%NOverlapping: " + Result.out)

				else
						-- Creation of a new sprint
					if not input.has_key (start_date_key) or not input.has_key (end_date_key) then
							-- start_date or end_date missing
						Result := False

					else
							-- start_date and end_date given
						start_date := get_string_from_json(input.item(start_date_key))
						end_date := get_string_from_json(input.item(end_date_key))
						Result := sprint_does_not_overlap(sprint_id, project_id, start_date, end_date)
					end
				end
			end
		end


	sprint_does_not_overlap(sprint_id, project_id, start_date, end_date: STRING): BOOLEAN
		do
			Result :=  db.query_rows ("SELECT id FROM sprints WHERE NOT id = ? AND project_id = ? AND (start_date > ? AND start_date < ? OR end_date > ? AND end_date < ? OR start_date <= ? AND end_date >= ?)", <<sprint_id, project_id, start_date, end_date, start_date, end_date, start_date, end_date>>).count = 0
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
