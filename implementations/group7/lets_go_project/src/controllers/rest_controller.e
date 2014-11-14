note
	description: "Handler for tasks."
	author: "ar"
	date: "13.11.2014"
	revision: "1"

deferred class
	REST_CONTROLLER

inherit
	DEMO_HEADER_JSON_HELPER
		-- inherit this helper to get a procedure that simplifies setting
		-- the HTTP response header correctly

	DEMO_SESSION_HELPER
		-- inherit this helper to get functions to check for a session cookie
		-- if a session cookie exists, we can get the data of that session


feature {NONE} -- Creation

	make (a_db: DEMO_DB; a_session_manager: WSF_SESSION_MANAGER; a_resource_name: STRING)
		do
			db := a_db
			session_manager := a_session_manager
			resource_name := a_resource_name
		end


feature {NONE} -- Private attributes

	db: DEMO_DB
	session_manager: WSF_SESSION_MANAGER
	resource_name: STRING


feature -- Handlers

	get_all (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_dummy_json_list(req, res)
		end


	create_new (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_dummy_id(req, res)
		end


	get (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_dummy_json(req, res)
		end


	update (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_ack(req, res)
		end


	delete (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_ack(req, res)
		end

feature {NONE} -- Internal helpers			


	reply_with_dummy_id (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_data (req, res, "1")
		end


	reply_with_ack (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_data (req, res, "ACK")
		end

	reply_with_dummy_json (req: WSF_REQUEST; res: WSF_RESPONSE)
		do
			reply_with_data (req, res, get_dummy_json)
		end

	reply_with_dummy_json_list (req: WSF_REQUEST; res: WSF_RESPONSE)
		local
			dummy_json: STRING
		do
			dummy_json := get_dummy_json
			reply_with_data (req, res, "{%"results%": [" + dummy_json + ", " + dummy_json + "]}")
		end


	reply_with_data (req: WSF_REQUEST; res: WSF_RESPONSE; data: STRING)
		local
			answer: STRING
		do
			if req_has_cookie (req, "lets_go_session") then
				answer := data
				set_json_header_ok (res, answer.count)
			else
				answer := "Error"
				set_json_header (res, 401, answer.count)
			end
			res.put_string(answer)
		end


	get_dummy_json: STRING
		local
		    l_file: PLAIN_TEXT_FILE
		do
		    create l_file.make_open_read("dummy_json" + Operating_environment.directory_separator.out + resource_name + ".txt")
		    l_file.read_stream (l_file.count)
		    Result := l_file.last_string.twin
		    l_file.close
		end
end
