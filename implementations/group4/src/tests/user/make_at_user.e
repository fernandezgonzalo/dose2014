note
	description: "[
		Tests for routine make_new_user of class User
	]"
	author: "Rio Cuarto4 Team"
	date: "$2014-11-06$"
	revision: "$0.01$"

class
	MAKE_AT_USER

inherit
	EQA_TEST_SET

feature -- Test routines

	new_user_test
			-- Test that create a user with valid attributes values.
		local
			user : USER
		do
			create user.make("nono@nono.com","Nono Nono","nono1234")
			assert ("Email ok", user.email.is_equal("nono@nono.com"))
			assert ("Username ok", user.username.is_equal("Nono Nono"))
			assert ("Password ok", user.password.is_equal("nono1234"))
			assert ("Status ok", user.is_active)
		end

end


