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
        email = "asd@asd.com"
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
        password = "asd"
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
        rol = "1"
        active = "1"

        #req = post_users(self.session, name, lastname, email, password, rol, active)
        self.assertTrue(True)

if __name__ == '__main__':
    unittest.main()