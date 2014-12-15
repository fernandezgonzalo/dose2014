note
	description: "Summary description for {HTTP_RESPONSE_HELPER}."
	author: "aaron"
	date: "23.11.2014"

class
	HTTP_RESPONSE_HELPER


inherit
	HEADER_JSON_HELPER
		-- inherit this helper to get a procedure that simplifies setting
		-- the HTTP response header correctly


feature {NONE} -- Http responses

	reply_with_200_with_data (res: WSF_RESPONSE; data: STRING)
		do
			reply_with_statuscode_with_data(res, {HTTP_STATUS_CODE}.ok, data)
		end


	reply_with_201_with_data (res: WSF_RESPONSE; data: STRING)
		do
			reply_with_statuscode_with_data(res, {HTTP_STATUS_CODE}.created, data)
		end


	reply_with_204 (res: WSF_RESPONSE)
		do
			res.set_status_code({HTTP_STATUS_CODE}.no_content)
		end


	reply_with_statuscode_with_data (res: WSF_RESPONSE; statuscode: INTEGER; data: STRING)
		do
			set_json_header (res, statuscode, data.count)
			res.put_string(data)
		end


	reply_with_400 (res: WSF_RESPONSE)
		do
			res.set_status_code({HTTP_STATUS_CODE}.bad_request)
		end


	reply_with_401 (res: WSF_RESPONSE)
		do
			res.set_status_code({HTTP_STATUS_CODE}.unauthorized)
		end


	reply_with_404 (res: WSF_RESPONSE)
		do
			res.set_status_code({HTTP_STATUS_CODE}.not_found)
		end


	reply_with_500 (res: WSF_RESPONSE)
		do
			res.set_status_code({HTTP_STATUS_CODE}.internal_server_error)
		end


	reply_with_400_with_data(res: WSF_RESPONSE; data: STRING)
		do
			print("%N" + data)
			reply_with_statuscode_with_data (res, {HTTP_STATUS_CODE}.bad_request, data)
		end


	reply_with_401_with_data(res: WSF_RESPONSE; data: STRING)
		do
			reply_with_statuscode_with_data (res, {HTTP_STATUS_CODE}.not_found, data)
		end


	reply_with_404_with_data(res: WSF_RESPONSE; data: STRING)
		do
			reply_with_statuscode_with_data (res, {HTTP_STATUS_CODE}.not_found, data)
		end


	reply_with_500_with_data(res: WSF_RESPONSE; data: STRING)
		do
			reply_with_statuscode_with_data (res, {HTTP_STATUS_CODE}.internal_server_error, data)
		end
end
