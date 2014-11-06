note
	description: "A topic is a way for the project members to communicate. It is created by an user and it can have answers made by other project members."
	author: "Angelo Chaves"
	date: "$2014-11-06$"
	revision: "$0.01$"

class
	TOPIC

create
	make

feature -- Topic data

	id : INTEGER
		-- ID to identify the topic.

	project_id : INTEGER
		-- Project where the topic is in.

	task_id : INTEGER
		-- Task referenced by the topic.

	user_id : INTEGER
		-- Creator of the topic.

	title : STRING
		-- Title.

	description : STRING
		-- Topic description.

	answered : BOOLEAN
		-- Used to differentiate answered topics in the views.

feature -- Creation

	make (an_id, a_project_id, a_task_id, a_user_id : INTEGER; a_title, a_descr : STRING)
		-- Default creation procedure
		require
			title_not_void: a_title /= Void
			descr_not_void: a_descr /= Void
		do
			id := an_id
			project_id := a_project_id
			task_id := a_task_id
			user_id := a_user_id
			title := a_title
			description := a_descr
			-- answered by default is false

		end

feature -- Operations




end
