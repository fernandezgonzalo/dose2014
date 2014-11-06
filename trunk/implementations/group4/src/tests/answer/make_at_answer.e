note
	description: "[
		Tests for routine make of class Answer
	]"
	author: "Facundo Molina"
	date: "$November 6, 2014$"
	revision: "$0.1$"

class
	MAKE_AT_ANSWER

inherit
	EQA_TEST_SET

feature -- Test routines

	new_answer_with_valid_values_test
			-- Test that create an answer with valid description and user.
		local
			answer : ANSWER
			user : USER
		do
			create user.make ("nono@nono.com", "Nono Nono", "nono1234")
			create answer.make("Some answer",user)
			assert ("Description ok", answer.description.is_equal("Some answer"))
			assert ("User ok", answer.user.is_equal(user))
		end

end


