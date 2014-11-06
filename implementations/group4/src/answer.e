note
	description: "This class represents an answer of the application "
	author: "Facundo Molina"
	date: "$November 5, 2014$"
	revision: "$0.1$"

class
	ANSWER

create
	make

feature -- Initialization

	make(new_description : STRING; answerer_user : USER)
			-- Create an answer with a given description and user.
		require
			some_description: (new_description /= void)
			active_user: answerer_user.is_active
			-- active_topic: answered_topic.is_active
		do
			description := new_description
			user := answerer_user
			-- topic := answered_topic
		end

feature -- Answer data

	description : STRING

	user : USER

	-- topic : TOPIC
end
