note
	description: "This class manages the database operations that concerns topics."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-08$"
	revision: "$0.01$"

class
	DB_HANDLER_TASK

inherit
	CASD_DB

create
	make

feature -- Data access

	find_all : JSON_ARRAY
			-- returns a JSON_ARRAY where each element is a JSON_OBJECT that represents a task
		do
			--TODO
		end

	find_by_id (a_task_id : NATURAL) : JSON_OBJECT
			-- returns a JSON_OBJECT that represents a task that corresponds to the given id
		do
			--TODO
		end

	add(a_task: TASK)
			-- Adds a task
		do
			--TODO
		end

	update (task_id : INTEGER; task: TOPIC)
			-- Update a task
		do
			--TODO
		end

	remove (task_id: NATURAL)
			-- removes the task with the given id
		do
			--TODO
		end

end

