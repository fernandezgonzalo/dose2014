note
	description: "Summary description for {PROJECT_CTRL}."
	author: ""
	date: "$Date$"
	revision: "$Revision$"

class
	PROJECT_CTRL

feature --Handlers

	add_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Add a new project
		do
				-- Receive the name of the new project

				-- Check if the name doesn't already exist

					-- If yes, ERROR

					-- if no:
						-- add in the database
		end

	remove_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Remove a project
		do
				-- Receive the name of the project

				-- Check if the project is empty (no iterations): db.is_project_empty(a_project_name)

				-- If yes, delete oit from the database: db.remove_project(a_project_name)

				--Otherwise, Error message
		end

	rename_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Rename a project
		do
				-- Receive the old and the new name of the project

				-- Change it into the database: db.rename_project(a_old_project_name, a_new_old_project_name)
		end

	get_all_user_projects (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Get all the projects of a user
		do
				-- Receive the email of a user

				-- Get from the database all the projects which the user takes part in: db.get_all_user_project(a_user_email)
		end

	get_all_project_members (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Get all the members and owners of a project
		do
				-- Receive the name of a project

				-- Get from the database all the members of the projet
		end

	get_all_project_owners (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Get all the owners of a project
		do
				-- Receive the name of a project

				-- Get from the database all the owners of the projet
		end

	add_member_to_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Add a member or an owner to a project
		do
				-- Receive the name of the prject, the email of the user and a true flag if the user is also an owner

				-- Add it in the daabase: add_member_to_project(a_project_name: STRING, a_user_email: STRING, a_owner: BOOLEAN)
		end

	remove_member_from_project (req: WSF_REQUEST; res: WSF_RESPONSE)
	-- Remove a member from a project
		do
				-- Receive the name of the project and the user's email to remove but also the email of the user who wants to remove a member

				-- Check if the user is allowed to remove a member: if he is aan owner

				-- Remove from the database: remove_member_project(a_project_name: STRING, a_user_email: STRING)
		end

end
