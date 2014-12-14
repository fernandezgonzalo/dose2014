import unittest
import requests
import json
from test_api_rest import *
from models import *
from faker import Factory

class TestProject(unittest.TestCase):

    def setUp(self):
        self.session = requests.Session()
        self.faker = Factory.create()
        self.database = SqliteDatabase('../database.db')
        database_proxy.initialize(self.database)
        self.res_login = do_login(self.session, "bob_esponja@gmail.com", "asd")


    def test_create_project(self):
    	name = self.faker.word()
    	info = self.faker.sentence()

    	res = add_project(self.session, self.res_login.json().get('id'), name, info)
    	self.assertEqual(res.status_code, 200, "Status code is not 200")
    	self.assertEqual(res.json().get('Message'), "Added project ", "The message is no 'Added project '")


    def test_update_project(self):




if __name__ == '__main__':
    unittest.main()
