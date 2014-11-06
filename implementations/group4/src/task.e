note
	description: "A Task is what a project member must do. It has an associated sprint (and of course project)."
	author: "Rio Cuarto4 Team"
	date: "$2014-11-06$"
	revision: "$0.01$"

class
	TASK

create
	make, make_sub_task

feature -- Task data

	id : INTEGER
		-- ID to identify the task.

	sprint : SPRINT
		-- Sprint where the task belongs.

	super_task : TASK
		-- If the task is a sub-task, it has a super-task associated.

	user : USER
		-- Accountable of the task.

	title : STRING
		-- Title.

	description : STRING
		-- Task description.

	type : STRING
		-- Type can be: Bug or Feature.

	priority : STRING
		-- Priority can be: Low, High or Normal.

	position : STRING
		-- Position can be: Backlog, Process, Done, Testing or Canceled.


feature -- Creation

	make (an_id : INTEGER; a_sprint: SPRINT; a_user: USER ; a_title, a_descr, a_type, a_priority, a_pos : STRING)
		-- Default creation procedure
		require
			sprint_not_void: a_sprint /= Void
			user_not_void: a_user /= Void
			title_not_void: a_title /= Void
			descr_not_void: a_descr /= Void
			type_not_void: a_type /= Void
			priority_not_void: a_priority /= Void
			position_not_void: a_pos /= Void
		do
			id := an_id
			sprint := a_sprint
			user := a_user
			title := a_title
			description := a_descr
			type := a_type
			priority := a_priority
			position := a_pos
			-- super_task Void by default, this is not a subtask.

		end

	make_sub_task (an_id : INTEGER; a_sprint: SPRINT; a_user: USER; a_super_task: TASK; a_title, a_descr, a_type, a_priority, a_pos : STRING)
		-- Creation procedure for a sub task
		require
			super_task_not_void: a_super_task /= Void
			sprint_not_void: a_sprint /= Void
			user_not_void: a_user /= Void
			title_not_void: a_title /= Void
			descr_not_void: a_descr /= Void
			type_not_void: a_type /= Void
			priority_not_void: a_priority /= Void
			position_not_void: a_pos /= Void
		do
			id := an_id
			sprint := a_sprint
			user := a_user
			title := a_title
			description := a_descr
			type := a_type
			priority := a_priority
			position := a_pos
			super_task := a_super_task -- Super task of this subtask

		end

feature -- Operations




invariant -- Invariant for enumerated types
	correct_type: (type.is_equal("Bug")) or (type.is_equal("Feature"))
	correct_priority: (priority.is_equal("Low")) or (priority.is_equal("Normal")) or (priority.is_equal("High"))
	correct_position: (position.is_equal("Backlog")) or (position.is_equal("Process")) or (position.is_equal("Done")) or (position.is_equal("Testing")) or (position.is_equal("Canceled"))

end
