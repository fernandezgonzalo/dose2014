note
	description: "A topic is a way for the project members to communicate. It is created by an user and it can have answers made by other project members."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-06$"
	revision: "$0.01$"

class
	TOPIC

create
	make

feature -- Topic data

	id : INTEGER
		-- ID to identify the topic.

	project : PROJECT
		-- Project where the topic is in.

	task : TASK
		-- Task referenced by the topic.

	user : USER
		-- Creator of the topic.

	title : STRING
		-- Title.

	description : STRING
		-- Topic description.

	answered : BOOLEAN
		-- Used to differentiate answered topics in the views.

feature -- Creation

	make (an_id : INTEGER; a_project: PROJECT; a_task: TASK; a_user: USER; a_title, a_descr : STRING)
		-- Default creation procedure
		require
			project_not_void: a_project /= Void
			task_not_void: a_task /= Void
			user_not_void: a_user /= Void
			title_not_void: a_title /= Void
			descr_not_void: a_descr /= Void
		do
			id := an_id
			project := a_project
			task := a_task
			user := a_user
			title := a_title
			description := a_descr
			-- answered by default is false

		end

feature -- Operations




end
