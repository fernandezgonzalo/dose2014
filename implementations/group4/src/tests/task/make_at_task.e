note
	description: "[
		Eiffel tests that can be executed by testing tool.
	]"
	author: "EiffelStudio test wizard"
	date: "$Date$"
	revision: "$Revision$"
	testing: "type/manual"

class
	MAKE_AT_TASK

inherit
	EQA_TEST_SET

feature -- Test routines

	make_test_with_correct_values
			--
		local
			task: TASK
		do
			--create task.make (1, 1, 1, "title", "descr", "Feature", "Normal", "Backlog")
			assert ("not_implemented", False)
		end

end


