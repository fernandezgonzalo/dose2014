note
	description: "Handler for tasks."
	author: "ar"
	date: "13.11.2014"
	revision: "1"

class
	TASK_CONTROLLER

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
			results: JSON_ARRAY
			tasks: JSON_ARRAY
			i: INTEGER
			task: JSON_OBJECT
		do
			create results.make_array
			tasks := db.query_rows ("SELECT * FROM tasks")
			from
				i := 1
			until
				i > tasks.count
			loop
				task := get_json_object_from_string(tasks.i_th(i).representation)
				add_devs_to_task_json(task)
		    	results.extend (task)
				i := i + 1
			end
			reply_with_200_with_data(res, results.representation)
		end


	get (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			task: JSON_OBJECT
			task_id: STRING
		do
			task_id := req.path_parameter ("task_id").string_representation
			task := db.query_single_row("SELECT * FROM tasks WHERE id = " + task_id)
			if task.is_empty then
				reply_with_404(res)
			else
				add_devs_to_task_json(task)
				reply_with_200_with_data(res, task.representation)
			end
		end

	assign_developers (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		do
			perform_transaction_for_all_developers(req, res, input, agent assign_developer_transaction(?, ?))
		end


	unassign_developers (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT)
		do
			perform_transaction_for_all_developers(req, res, input, agent unassign_developer_transaction(?, ?))
		end


feature -- Error checking handlers (authentication, authorization, input validation)

	assign_developers_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authorized (req, res, agent ensure_input_validated (req, res, agent assign_developers(req, res, ?), get_json_object_from_request(req)))
		end


	unassign_developers_authorized_validated (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			ensure_authorized (req, res, agent ensure_input_validated (req, res, agent unassign_developers(req, res, ?), get_json_object_from_request(req)))
		end


feature {None} -- Internal helpers

	add_devs_to_task_json(task: JSON_OBJECT)
		local
			assigned_devs: JSON_ARRAY
			task_id: STRING
		do
			task_id := task.item(create {JSON_STRING}.make_json ("id")).representation
			assigned_devs := db.query_id_list("SELECT user_id FROM task_assignments WHERE task_id = " + task_id)
			task.put (assigned_devs, "assigned_devs")
		end

	perform_transaction_for_all_developers (req: WSF_REQUEST; res: WSF_RESPONSE; input: JSON_OBJECT; transaction: PROCEDURE [ANY, TUPLE])
		local
			task_id: STRING
			devs_array: JSON_ARRAY
			i: INTEGER
		do
			task_id := req.path_parameter ("task_id").string_representation

			devs_array := get_json_array_from_string(input.item("devs").representation)
			if devs_array /= Void then
				from
					i := 1
				until
					i > devs_array.count
				loop
					transaction.call ([task_id, devs_array.i_th(i).representation])
					i := i + 1
				end
				reply_with_204(res)
			else
				reply_with_400(res)
			end
		end

	assign_developer_transaction(task_id: STRING; dev_id: STRING)
		local
			dummy: ANY
		do
			dummy := db.insert("INSERT INTO task_assignments (user_id, task_id) VALUES (" + dev_id + ", " + task_id + ")")
		end

	unassign_developer_transaction(task_id: STRING; dev_id: STRING)
		local
			dummy: ANY
		do
			dummy := db.delete("DELETE FROM task_assignments WHERE user_id = " + dev_id + " AND task_id = " + task_id)
		end
end
