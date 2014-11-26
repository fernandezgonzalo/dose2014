note
	description: "Summary description for {EMAIL_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	EMAIL_CTRL

inherit

create
	make

feature {NONE} -- Initialization

	make
			-- Initialization for `Current'.
		do
			smtp_server := "smtp.live.com"
			sender := "prova@hotmail.com"
		end

feature --

	smtp_server: STRING

	sender: STRING

	recipient: STRING

	message: STRING

feature

	send_email(a_recipient: STRING; a_message: STRING)

		 local
--         	l_smtp_protocol: SMTP_PROTOCOL
--         	l_host: HOST_ADDRESS
--        	l_email: EMAIL

		do
--			-- To get local host name needed in creation of SMTP_PROTOCOL.
--            create l_host.make_local

--            -- Create our message.
--            create l_email.make_with_entry (sender, a_recipient)
--            l_email.set_message (a_message)

--            -- Send it.
--            create l_smtp_protocol.make (smtp_server, l_host.local_host_name)
--            l_smtp_protocol.initiate_protocol
--            l_smtp_protocol.transfer (l_email)
--            l_smtp_protocol.close_protocol

		end





end
