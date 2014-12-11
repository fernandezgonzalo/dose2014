import requests
import unittest
from test_api_rest import *
from models import *
from faker import Factory

class Test(unittest.TestCase):

    def setUp(self):
        self.session = requests.Session()
        self.faker = Factory.create()
        self.database = SqliteDatabase('../database.db')
        database_proxy.initialize(self.database)
        do_login(self.session, "bob@esponja.com", "asd")

    def test_create_user(self):
        name = self.faker.first_name()
        lastname = self.faker.last_name()
        email = self.faker.email()
        password = self.faker.password()
        rol = "1"
        active = "1"

        res = post_users(self.session, name, lastname, email, password, rol, active)
        self.assertEqual(res.status_code, 200)
        u = User.get(User.id == res.json().get('id'))
        self.assertEqual(u.email, email)

    def test_update_user(self):
        new_name = "jaja"
        user = get_user(self.session, 39).json()
        res = put_users(self.session, 39, new_name, user.get("lastname"), user.get('password'), "1", "1")
        #user = get_user(self.session, 39).json()
        user = User.get(User.id == 39)
        self.assertEqual(user.name, new_name)

    def tearDown(self):
        self.database.close()