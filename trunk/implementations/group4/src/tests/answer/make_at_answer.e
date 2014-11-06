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
			-- Test that create an answer with valid description and user.
		local
			answer : ANSWER
			user : USER
			topic : TOPIC
		do
			create user.make ("nono@nono.com", "Nono Nono", "nono1234")
			create answer.make("Some answer",user)
			--create topic.make (a_project_id, a_task_id, a_user_id: INTEGER_32, a_title, a_descr: STRING_8)
			assert ("Description ok", answer.description.is_equal("Some answer"))
			assert ("User ok", answer.user.is_equal(user))
		end

end


