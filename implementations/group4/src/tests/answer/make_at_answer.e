note
	description: "[
		Tests for routine make of class Answer
	]"
	author: "Rio Cuarto4 Team"
	date: "$2014-11-06$"
	revision: "$0.01$"

class
	MAKE_AT_ANSWER

inherit
	EQA_TEST_SET

feature -- Test routines

	new_answer_with_valid_values_test
			-- Test that create an answer with valid description.
		local
			answer : ANSWER
			user_id : NATURAL
			topic_id : NATURAL
		do
			user_id := 1
			topic_id := 1
			create answer.make("Some answer",user_id,topic_id)
			assert ("Description ok", answer.description.is_equal("Some answer"))
		end

end


