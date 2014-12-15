note
	description: "Helpers to set a HTTP response's status code and content."
	author: "aaron"
	date: "23.11.2014"

deferred class
	HTTP_RESPONSE_HELPER


feature {NONE} -- Successful HTTP responses

	reply_with_200_with_data (res: WSF_RESPONSE; data: STRING)
			-- Set the status code of the response to 200
			-- Set 'data' as the content of the response
			-- To be used in case of: a successful request
		do
			reply_with_statuscode_with_data(res, {HTTP_STATUS_CODE}.ok, data)
		end


	reply_with_201_with_data (res: WSF_RESPONSE; data: STRING)
			-- Set the status code of the response to 201
			-- Set 'data' as the content of the response
			-- To be used in case of: successful resource creation
		do
			reply_with_statuscode_with_data(res, {HTTP_STATUS_CODE}.created, data)
		end


	reply_with_204 (res: WSF_RESPONSE)
			-- Set the status code of the response to 204
			-- To be used in case of: successful update or delete operation
		do
			res.set_status_code({HTTP_STATUS_CODE}.no_content)
		end


feature {NONE} -- HTTP responses in case of failure


	reply_with_400 (res: WSF_RESPONSE)
			-- Set the status code of the response to 400
			-- To be used in case of: a bad request (e.g. invalid json)
		do
			res.set_status_code({HTTP_STATUS_CODE}.bad_request)
		end


	reply_with_401 (res: WSF_RESPONSE)
			-- Set the status code of the response to 401
			-- To be used in case of: authorization or authentication errors
		do
			res.set_status_code({HTTP_STATUS_CODE}.unauthorized)
		end


	reply_with_404 (res: WSF_RESPONSE)
			-- Set the status code of the response to 404
			-- To be used in case of: a non-existing resource
		do
			res.set_status_code({HTTP_STATUS_CODE}.not_found)
		end


	reply_with_500 (res: WSF_RESPONSE)
			-- Set the status code of the response to 500
			-- To be used in case of: Internal server errors (e.g. failed database insertion)
		do
			res.set_status_code({HTTP_STATUS_CODE}.internal_server_error)
		end


	reply_with_400_with_data(res: WSF_RESPONSE; data: STRING)
			-- Set the status code of the response to 400
			-- Set 'data' as the content of the response
			-- To be used in case of: a bad request (e.g. invalid json)
		do
			print("%N" + data)
			reply_with_statuscode_with_data (res, {HTTP_STATUS_CODE}.bad_request, data)
		end


	reply_with_401_with_data(res: WSF_RESPONSE; data: STRING)
			-- Set the status code of the response to 401
			-- Set 'data' as the content of the response
			-- To be used in case of: authorization or authentication errors
		do
			reply_with_statuscode_with_data (res, {HTTP_STATUS_CODE}.not_found, data)
		end


	reply_with_404_with_data(res: WSF_RESPONSE; data: STRING)
			-- Set the status code of the response to 404
			-- Set 'data' as the content of the response
			-- To be used in case of: a non-existing resource
		do
			reply_with_statuscode_with_data (res, {HTTP_STATUS_CODE}.not_found, data)
		end


	reply_with_500_with_data(res: WSF_RESPONSE; data: STRING)
			-- Set the status code of the response to 500
			-- Set 'data' as the content of the response
			-- To be used in case of: Internal server errors (e.g. failed database insertion)
		do
			reply_with_statuscode_with_data (res, {HTTP_STATUS_CODE}.internal_server_error, data)
		end


feature {NONE} -- Internal helpers


	reply_with_statuscode_with_data (res: WSF_RESPONSE; statuscode: INTEGER; data: STRING)
			-- Set the status code of the response to 'statuscode'
			-- Set 'data' as the content of the response
		do
			set_json_header (res, statuscode, data.count)
			res.put_string(data)
		end


	set_json_header (res: WSF_RESPONSE; a_status_code: INTEGER; a_content_length: INTEGER)
			-- sets the header of the given to status code `a_status_code'
			-- sets the content type to json
			-- sets the content lenght according to `a_content_lenght'
		do
			res.set_status_code (a_status_code)
			res.header.put_content_type_application_json
			res.header.put_content_length (a_content_length)
		end
end
