note
	description: "Summary description for {USER_TESTS}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	USER_TESTS

inherit
	EQA_TEST_SET

feature -- Test routines

	make_test
			-- Test that create a user with valid attributes values.
		local
			user : USER
			session_manager: WSF_FS_SESSION_MANAGER
		do
			create session_manager.make
			create db.make (path_to_db_file)
			create user.make(db, session_manager)
			assert ("", true)
		end

feature -- Extras

	db: DB

	path_to_db_file: STRING
			-- calculates the path to the demo.db file, based on the location of the .ecf file
			-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		once
			Result := ".." + Operating_environment.directory_separator.out + "database.db"
		end
end
