note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	MAKE_AT_TOPIC

inherit
	EQA_TEST_SET

feature -- Test routines

	MAKE_AT_TOPIC
			-- New test routine
		local
			topic: TOPIC
		do
			assert ("not_implemented", False)
		end

end


