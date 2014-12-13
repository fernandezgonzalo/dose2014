import unittest
import requests
import json
from test_api_rest import *
from faker import Factory

class TestUser(unittest.TestCase):

    def setUp(self):
        self.session = requests.Session()
        self.faker = Factory.create()

    def test_login(self):
        email = "bobesponja@gmail.com"
        password = "asd"
        req = do_login(self.session, email, password)
        self.assertEqual(req.status_code, 200)

    def test_login_with_incorrect_data(self):
        email = "asd@asd.com"
        password = "asdd"
        req = do_login(self.session, email, password)
        self.assertEqual(req.json().get('Message'), "Username or password incorrect")
        self.assertEqual(req.status_code, 401)

    def test_logout(self):
        email = "asd@asd.com"
        password = "aaa"
        req = do_login(self.session, email, password)
        req = do_logout(self.session)
        self.assertEqual(req.json().get('Message'), "User logged out")
        self.assertEqual(req.status_code, 200)

    def test_create_user(self):
        # Get random data
        name = self.faker.first_name()
        lastname = self.faker.last_name()
        email = self.faker.email()
        password = self.faker.password()
        rol = 1
        active = 1

        req = post_users(self.session, name, lastname, email, password, rol, active)
        self.assertEqual(req.status_code, 200)

    def test_create_user_with_email_registered(self):
        name = self.faker.first_name()
        lastname = self.faker.last_name()
        email = "asd@asd.com"
        password = self.faker.password()
        rol = 1
        active = 1

        req = post_users(self.session, name, lastname, email, password, rol, active)
        self.assertEqual(req.status_code, 401)
        self.assertEqual(req.json().get('Message'), "Email already registered")




 #    def test_full(self):

	# ### things that are tested:
	# ### 1) get all users
	# ### 2) insert a new test user
	# ### 3) verify that there is now a more user in the database
	# ### 4) verify that the data entered correctly
	# ### 5) modify user data
	# ### 6) verify that the data is successfully modified
	# ### 7) get all users
	# ### 8) delete test user
	# ### 9) verify that an item was removed in the database


	# do_login(self.session, "dex@asd.com", "blood")

	# 	# get all users in users_1
	# users_1 = json.loads(get_users(self.session).content)

 #        name = "test_name"
 #        lastname = "test_last_name"
 #        email = "test@email.com"
 #        password = "test_password"
 #        rol = 1
 #        active = 1
	# 	# insert a user
 #        req = post_users(self.session, name, lastname, email, password, rol, active)
	# self.assertEqual(req.status_code, 200)

	# 	# get all users in users_2
	# users_2  = json.loads(get_users(self.session).content)

	# 	# the number of users is increased by 1 after inserting a user
	# 	# the length users_1 is equal to the length (users_2 - 1)
	# self.assertEqual(len (users_1), len  (users_2)-1)

	# 	# get the id of test user in "id_user"
	# for i in range (len  (users_2)):
	# 	if users_2 [i] ['email'] == "test@email.com":
	# 		id_user = users_2 [i] ['id']

	# 	# obtain user information
	# user_info = json.loads(get_user (self.session, id_user).content)
	# 	# verify that the data entered correctly
	# self.assertEqual(user_info ['name'], "test_name")
	# self.assertEqual(user_info ['lastname'], "test_last_name")
	# self.assertEqual(user_info ['email'], "test@email.com")
	# self.assertEqual(user_info ['password'], "test_password")

	# 	# modify user data
	# put_user = put_users(self.session, id_user, "test_name_2", "test_last_name_2", "test_password_2", rol, active)

	# 	#verify that the data is successfully modified
	# user_info_2 = json.loads(get_user (self.session, id_user).content)
	# self.assertEqual(user_info_2 ['name'], "test_name_2")
	# self.assertEqual(user_info_2 ['lastname'], "test_last_name_2")
	# self.assertEqual(user_info_2 ['email'], "test@email.com")
	# self.assertEqual(user_info_2 ['password'], "test_password_2")

	# 	#get all users in users_1
	# users_1 = json.loads(get_users(self.session).content)
	# 	# delete user
	# req2 = delete_users (self.session, id_user)
	# 	#get all users in users_2
	# users_2  = json.loads(get_users(self.session).content)
	# 	# the number of users is decremented by 1 after deleting a user
	# 	# the length users_1 is equal to the length (users_2 + 1)
	# self.assertEqual(len (users_1), len  (users_2)+1)


if __name__ == '__main__':
    unittest.main()
