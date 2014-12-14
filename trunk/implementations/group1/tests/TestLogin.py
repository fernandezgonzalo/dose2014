import requests
import unittest
from test_api_rest import *
from models import *
from faker import Factory


class TestLogin(unittest.TestCase):

    def setUp(self):
        self.session = requests.Session()
        self.faker = Factory.create()
        self.database = SqliteDatabase('../database.db')
        database_proxy.initialize(self.database)

    def test_login(self):
        email = "bob_esponja@gmail.com"
        password = "asd"
        res = do_login(self.session, email, password)
        self.assertEqual(res.status_code, 200, "Status code is not 200")
        self.assertIn('_session_', res.cookies, "The cookies dont have a _session_")
        self.assertIn('set-cookie', res.headers, "The headers have a cookie")

    def test_login_with_incorrect_data(self):
        email = self.faker.email()
        password = self.faker.password()
        req = do_login(self.session, email, password)
        self.assertEqual(req.json().get('Message'), "Username or password incorrect", "Message is not 'User or pass incorrect'")
        self.assertEqual(req.status_code, 401, "Status code is not 401")

    def test_logout(self):
        email = "bob_esponja@gmail.com"
        password = "asd"
        res = do_login(self.session, email, password)
        res = do_logout(self.session)
        self.assertEqual(res.json().get('Message'), "User logged out", "Message is not 'User logged out'")
        self.assertEqual(res.status_code, 200, "Status code is not 200")
        self.assertNotIn('set-cookie', res.headers, "The headers have a cookie")

    #def tearDown(self):
    #    self.database.close()