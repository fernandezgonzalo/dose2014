note
	description: "[
		All CRUD tests
	]"
	author: "Jacinto Jaimez"
	date: "21/11/2014"
	revision: "$Revision$"
	testing: "type/manual"

class
	TESTS

inherit
	EQA_TEST_SET

feature -- Test routines

		path_to_db_file: STRING
		-- calculates the path to the demo.db file, based on the location of the .ecf file
		-- Note: we used to have a fixed path here but this way it should work out-of-box for everyone
		once
			print(Operating_environment.current_directory_name_representation)
			Result := "."+ Operating_environment.directory_separator.out + "db"+ Operating_environment.directory_separator.out +"test.db"
		end


	tests
		-- I didn't find the way to do separate tests, all the tests are together.
	local
		result_add_project,result_add_user,result_add_task: TUPLE [BOOLEAN, INTEGER_32]
		was_created, res: BOOLEAN
		project_id,user_id,task_id: NATURAL
		cero: INTEGER
		l_email, l_username, l_password, l_name, l_is_admin,l_deadline, l_client, l_user_id,l_title,l_description,l_status,l_priority,l_estimation,l_id_user_assigned,l_id_user_creator,l_project_id: STRING
		l_result,l_result2,l_result3,usr: JSON_OBJECT
		database : SQLITE_DATABASE
		crud_user: CRUD_USER
		crud_project: CRUD_PROJECT
		crud_task: CRUD_TASK
	do

		create database.make_open_read_write (path_to_db_file)
		-- CRUD USER TEST		
		create crud_user.make(database)
		create usr.make

		-- create a user and confirm that the information is correct.
		result_add_user := crud_user.add_user ("jacinto@mail.com","jjaimez","1234","jacinto",0)
		was_created := result_add_user.boolean_item (1)
		user_id := result_add_user.integer_32_item (2).out.to_natural
		usr := crud_user.user_by_id(user_id)
		create l_name.make_empty
		create l_email.make_empty
		create l_username.make_empty
		create l_password.make_empty
		create l_is_admin.make_empty
		if attached {JSON_OBJECT} usr as j_object then
		-- we have to convert the json string into an eiffel string
			if attached {JSON_STRING} j_object.item ("name") as s then
				l_name := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object.item ("email") as s then
				l_email := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object.item ("username") as s then
				l_username := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object.item ("password") as s then
				l_password := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object.item ("is_admin") as s then
				l_is_admin := s.unescaped_string_8
			end
		end
		cero := 0;
		assert ("The result must be true", was_created )
		assert ("The name must be jacinto", l_name.is_equal("jacinto"))
		assert ("The email must be jacinto@mail.com", l_email.is_equal("jacinto@mail.com") )
		assert ("The pass must be 1234", l_password.is_equal("1234") )
		assert ("The username must be jjaimez", l_username.is_equal("jjaimez") )
		assert ("The is_admin must be 0", l_is_admin.is_equal(cero.out))

		-- create same user.
		result_add_user := crud_user.add_user ("jacinto@mail.com","jjaimez","1234","jacinto",0)
		was_created := result_add_user.boolean_item (1)
		assert ("The result must be true", was_created) --CAMBIAR A NOT

		-- updates user password and confirm that the information is correct.
		res := crud_user.update_user_email(user_id,"midifyemail@mail.com")
		usr := crud_user.user_by_id(user_id)
		create l_email.make_empty
		if attached {JSON_OBJECT} usr as j_object then
			-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("email") as s then
					l_email := s.unescaped_string_8
				end
		end
		assert ("The result must be true", res )
		assert ("The email must be midifyemail@mail.com", l_email.is_equal("midifyemail@mail.com") )

		--updates user password and confirm that the information is correct.
		res := crud_user.update_user_password(user_id,"1111")
		usr := crud_user.user_by_id(user_id)
		create l_password.make_empty
		if attached {JSON_OBJECT} usr as j_object then
			-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("password") as s then
					l_password := s.unescaped_string_8
				end
		end
		assert ("The result must be true", res )
		assert ("The password must be 1111", l_password.is_equal("1111") )

		--updates user name and confirm that the information is correct.
		res := crud_user.update_user_name(user_id,"new name")
		usr := crud_user.user_by_id(user_id)
		create l_name.make_empty
		if attached {JSON_OBJECT} usr as j_object then
			-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("name") as s then
					l_name := s.unescaped_string_8
				end
		end
		assert ("The result must be true", res )
		assert ("The name must be new name", l_name.is_equal("new name") )

		--updates user username and confirm that the information is correct.
		res := crud_user.update_user_username(user_id,"new username")
		usr := crud_user.user_by_id(user_id)
		create l_username.make_empty
		if attached {JSON_OBJECT} usr as j_object then
			-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("username") as s then
					l_username := s.unescaped_string_8
				end
		end
		assert ("The result must be true", res )
		assert ("The username must be new username", l_username.is_equal("new username") )

		--updates user is_admin and confirm that the information is correct.
		res := crud_user.update_user_is_admin(user_id,1)
		usr := crud_user.user_by_id(user_id)
		create l_is_admin.make_empty
		if attached {JSON_OBJECT} usr as j_object then
			-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object.item ("is_admin") as s then
					l_is_admin := s.unescaped_string_8
				end
		end
		assert ("The result must be true", res )
		assert ("The is_admin must be 1", l_is_admin.is_equal("1") )


		--delete user and confirm that the delete is correct.
		res := crud_user.remove_user_by_id(user_id)
		assert ("The result must be true", res )



		--CRUD PROJECT TEST
		create crud_project.make(database)
		create l_result.make
		create l_result2.make
		create l_result3.make

		-- create a project and confirm that the information is correct.
		result_add_user := crud_user.add_user ("jacinto@mail.com","jjaimez","1234","jacinto",0)
		user_id := result_add_user.integer_32_item (2).out.to_natural
		result_add_project := crud_project.add_project ("projectt","","rick",user_id)
		was_created := result_add_user.boolean_item (1)
		project_id := result_add_user.integer_32_item (2).out.to_natural
		l_result3 := crud_project.project_by_id(project_id)
		create l_name.make_empty
		create l_deadline.make_empty
		create l_client.make_empty
		create l_user_id.make_empty
		if attached {JSON_OBJECT} l_result3 as j_object then
			-- we have to convert the json string into an eiffel string
			if attached {JSON_STRING} j_object.item ("name") as s then
				l_name := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object.item ("client_name") as s then
				l_client := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object.item ("id_user") as s then
				l_user_id := s.unescaped_string_8
		end
		assert ("The result must be true", res )
		assert ("The name must be project", l_name.is_equal("projectt"))
		assert ("The client_name must be rick", l_client.is_equal("rick") )
		assert ("The id_user must be user_id.out", l_user_id.is_equal(user_id.out) )


		-- updates project name and confirm that the information is correct.
		res:= crud_project.update_project_name("new name",project_id)
		create l_result.make
		l_result := crud_project.project_by_id(project_id)
		create l_name.make_empty
		if attached {JSON_OBJECT} l_result as j_object2 then
				-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object2.item ("name") as s then
					l_name := s.unescaped_string_8
				end
		end
		assert ("The result must be true", was_created )
		assert ("The name must be new name", l_name.is_equal("new name"))


		-- updates project client_name and confirm that the information is correct.
		res := crud_project.update_project_client_name("new client_name",project_id)
		l_result2 := crud_project.project_by_id(project_id)
		create l_client.make_empty
		if attached {JSON_OBJECT} l_result2 as j_object3 then
			-- we have to convert the json string into an eiffel string
			if attached {JSON_STRING} j_object3.item ("client_name") as s then
				l_client := s.unescaped_string_8
			end
		end
		assert ("The result must be true", res )
		assert ("The client_name must be new client_name", l_client.is_equal("new client_name"))


		--delete user and confirm that the delete is correct.
		res := crud_project.remove_project_by_id(user_id)
		assert ("The result must be true", res )


		--CRUD TASK TEST
		create crud_task.make(database)
		result_add_user := crud_user.add_user ("jacinto@mail.com","jjaimez","1234","jacinto",0)
		user_id := result_add_user.integer_32_item (2).out.to_natural
		result_add_project := crud_project.add_project ("projectt","","rick",user_id)
		project_id := result_add_user.integer_32_item (2).out.to_natural
		result_add_task := crud_task.add_task("title","description","status","priority","","estimation",user_id,user_id,project_id)
		was_created := result_add_task.boolean_item (1)
		task_id := result_add_task.integer_32_item (2).out.to_natural
		l_result3 := crud_task.task_by_id(task_id)
		create l_title.make_empty
		create l_description.make_empty
		create l_status.make_empty
		create l_priority.make_empty
		create l_estimation.make_empty
		create l_id_user_creator.make_empty
		create l_id_user_assigned.make_empty
		create l_project_id.make_empty
		if attached {JSON_OBJECT} l_result3 as j_object4 then
		-- we have to convert the json string into an eiffel string
			if attached {JSON_STRING} j_object4.item ("title") as s then
				l_title := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object4.item ("description") as s then
				l_description := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object4.item ("status") as s then
				l_status := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object4.item ("priority") as s then
				l_priority := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object4.item ("estimation") as s then
				l_estimation := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object4.item ("id_user_creator") as s then
				l_id_user_creator := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object4.item ("id_user_assigned") as s then
				l_id_user_assigned := s.unescaped_string_8
			end
			if attached {JSON_STRING} j_object4.item ("project_id") as s then
				l_project_id := s.unescaped_string_8
			end
		end
		cero := 0;
		assert ("The result must be true", was_created )
		assert ("The title must be title", l_title.is_equal("title"))
		assert ("The description must be description", l_description.is_equal("description") )
		assert ("The estimation must be estimation", l_estimation.is_equal("estimation"))
		assert ("The priority must be priority", l_priority.is_equal("priority") )
		assert ("The status must be status", l_status.is_equal("status"))
		assert ("The project_id must be project_id", l_project_id.is_equal(project_id.out) )
		assert ("The id_user_assigned must be user_id", l_id_user_assigned.is_equal(user_id.out) )
		assert ("The id_user_creator must be user_id", l_id_user_creator.is_equal(user_id.out))


		-- updates task title and confirm that the information is correct.
			res := crud_task.update_task_title("new title",task_id)
			l_result2 := crud_task.task_by_id(task_id)
			create l_title.make_empty
			if attached {JSON_OBJECT} l_result2 as j_object3 then
				-- we have to convert the json string into an eiffel string
				if attached {JSON_STRING} j_object3.item ("title") as s then
					l_title := s.unescaped_string_8
				end
			end
			assert ("The result must be true", res )
			assert ("The title must be new title", l_title.is_equal("new title"))

			-- updates task title and confirm that the information is correct.
				res := crud_task.update_task_title("new title",task_id)
				l_result2 := crud_task.task_by_id(task_id)
				create l_title.make_empty
				if attached {JSON_OBJECT} l_result2 as j_object3 then
					-- we have to convert the json string into an eiffel string
					if attached {JSON_STRING} j_object3.item ("title") as s then
						l_title := s.unescaped_string_8
					end
				end
				assert ("The result must be true", res )
				assert ("The title must be new title", l_title.is_equal("new title"))

				-- updates task description and confirm that the information is correct.
					res := crud_task.update_task_description("new description",task_id)
					l_result2 := crud_task.task_by_id(project_id)
					create l_description.make_empty
					if attached {JSON_OBJECT} l_result2 as j_object3 then
						-- we have to convert the json string into an eiffel string
						if attached {JSON_STRING} j_object3.item ("description") as s then
							l_description := s.unescaped_string_8
						end
					end
					assert ("The result must be true", res )
					assert ("The title must be new description", l_description.is_equal("new description"))

					-- updates task estimation and confirm that the information is correct.
						res := crud_task.update_task_estimation("new estimation",task_id)
						l_result2 := crud_task.task_by_id(task_id)
						create l_estimation.make_empty
						if attached {JSON_OBJECT} l_result2 as j_object3 then
							-- we have to convert the json string into an eiffel string
							if attached {JSON_STRING} j_object3.item ("estimation") as s then
								l_estimation := s.unescaped_string_8
							end
						end
						assert ("The result must be true", res )
						assert ("The estimation must be new estimation", l_estimation.is_equal("new estimation"))

						-- updates task priority and confirm that the information is correct.
							res := crud_task.update_task_title("new priority",task_id)
							l_result2 := crud_task.task_by_id(task_id)
							create l_priority.make_empty
							if attached {JSON_OBJECT} l_result2 as j_object3 then
								-- we have to convert the json string into an eiffel string
								if attached {JSON_STRING} j_object3.item ("priority") as s then
									l_priority := s.unescaped_string_8
								end
							end
							assert ("The result must be true", res )
							assert ("The priority must be new priority", l_priority.is_equal("new priority"))

							-- updates task title and confirm that the information is correct.
								res := crud_task.update_task_title("new status",task_id)
								l_result2 := crud_task.task_by_id(task_id)
								create l_status.make_empty
								if attached {JSON_OBJECT} l_result2 as j_object3 then
									-- we have to convert the json string into an eiffel string
									if attached {JSON_STRING} j_object3.item ("status") as s then
										l_status := s.unescaped_string_8
									end
								end
								assert ("The result must be true", res )
								assert ("The status must be new status", l_status.is_equal("new status"))

								-- updates task id_user_assigned and confirm that the information is correct.
								result_add_user := crud_user.add_user ("emilio@mail.com","emilio","1234","emilio",0)
								user_id := result_add_user.integer_32_item (2).out.to_natural
															res := crud_task.update_task_id_user_assigned(user_id,task_id)
															l_result2 := crud_task.task_by_id(task_id)
															create l_id_user_assigned.make_empty
															if attached {JSON_OBJECT} l_result2 as j_object3 then
																-- we have to convert the json string into an eiffel string
																if attached {JSON_STRING} j_object3.item ("id_user_assigned") as s then
																	l_id_user_assigned := s.unescaped_string_8
																end
															end
															assert ("The result must be true", res )
															assert ("The id_user_assigned must be user_id", l_id_user_assigned.is_equal(user_id.out))



			--delete user and confirm that the delete is correct.
				res := crud_task.remove_task_by_id(task_id)
				assert ("The result must be true", res )

end


	end
end

