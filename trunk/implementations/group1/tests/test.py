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
        do_login(self.session, "bob_esponja@gmail.com", "asd")

    def test_create_user(self):
        name = self.faker.first_name()
        lastname = self.faker.last_name()
        email = self.faker.email()
        password = self.faker.password()
        rol = "1"
        active = "1"

        res = post_users(self.session, name, lastname, email, password, rol, active)
        self.assertEqual(res.status_code, 200, "Status code is not 200")
        u = User.get(User.id == res.json().get('id'))
        self.assertEqual(u.email, email, "The email stored is different from the entered email ")

    def test_create_user_with_email_registered(self):
        name = self.faker.first_name()
        lastname = self.faker.last_name()
        email = "bob_esponja@gmail.com"
        password = self.faker.password()
        rol = 1
        active = 1

        req = post_users(self.session, name, lastname, email, password, rol, active)
        self.assertEqual(req.status_code, 401, "Status code is not 401")
        self.assertEqual(req.json().get('Message'), "Email already registered", "Message is not 'Email already registered'")

    def test_update_user(self):
        res = do_login(self.session, "bob_esponja@gmail.com", "asd")
        id_user_logged = res.json().get('id')
        new_name = self.faker.first_name()
        user = get_user(self.session, id_user_logged).json()
        res = put_users(self.session, id_user_logged, new_name, user.get("lastname"), "asd", "1", "1")
        user = User.get(User.id == id_user_logged)
        self.assertEqual(user.name, new_name, "The name stored is different from the entered email")

    def test_delete_user(self):
        name = self.faker.first_name()
        lastname = self.faker.last_name()
        email = self.faker.email()
        password = self.faker.password()
        rol = "1"
        active = "1"

        res = post_users(self.session, name, lastname, email, password, rol, active)
        res_login = do_login(self.session, email, password)
        res = delete_users(self.session, res_login.json().get('id'))
        self.assertEqual(res.status_code, 200, "Status code is not 200")
        self.assertEqual(res.json().get('Message'), "Removed user %s" % res_login.json().get('id'), "Message is not 'Removed user id'")

    def test_delete_user_not_logged(self):
        name = self.faker.first_name()
        lastname = self.faker.last_name()
        email = self.faker.email()
        password = self.faker.password()
        rol = "1"
        active = "1"
        self.session.cookies.pop('_session_')

        res_post = post_users(self.session, name, lastname, email, password, rol, active)
        res_del = delete_users(self.session, res_post.json().get('id'))
        self.assertEqual(res_del.status_code, 401, "Status code is not 401")
        self.assertEqual(res_del.json().get('Message'), "User is not logged in.", "Message is not 'User is not logged in.'")

    #def tearDown(self):
    #    self.database.close()