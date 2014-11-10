note
	description: "This class represents an answer of the application "
	author: "Rio Cuarto4 Team"
	date: "$2014-11-06$"
	revision: "$0.01$"

class
	ANSWER

create
	make

feature -- Initialization

	make(new_description : STRING; answered_topic_id : NATURAL; answerer_user_id : NATURAL)
			-- Create an answer with a given description, user id and topic id.
		require
			some_description: (new_description /= void)
		do
			description := new_description
			topic_id := answered_topic_id
			user_id := answerer_user_id
		end

feature -- Answer data

	description : STRING

	topic_id : NATURAL

	user_id : NATURAL
end
