import unittest
import requests
import json
from test_api_rest import *
from models import *
from faker import Factory
import logging

logging.basicConfig(level=logging.DEBUG)
logger = logging.getLogger(__name__)

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
		self.assertEqual(res.json().get('Message'), "Added project ", "The message is no 'Added project ' ")


	def test_update_project(self):
		name = self.faker.word()
		info = self.faker.sentence()

		res_add = add_project(self.session, self.res_login.json().get('id'), name, info)
		self.assertEqual(res_add.status_code, 200)
		self.assertEqual(res_add.json().get('Message'), "Added project ", "The message is no 'Added project ' ")
		p = Project.raw('SELECT * FROM Project where name=?', name)
		p = Project.select().where(Project.name==name).get()
		logger.debug(p.jsonify())
		self.assertEqual(p.name==name, p.info==info, "Not stored")

		info = self.faker.sentence()
		res_put = update_project(self.session, 44, p.id, name, info)
		self.assertEqual(res_put.status_code, 200, "Status code is not 200")

	def test_delete_project(self):
		name = self.faker.word()
		info = self.faker.sentence()

		res_add = add_project(self.session, self.res_login.json().get('id'), name, info)
		p = Project.raw('SELECT * FROM Project where name=?', name)
		p = Project.select().where(Project.name==name).get()
		res_del = delete_project(self.session, 44, p.id)
		self.assertEqual(res_del.status_code, 200, "Status code is not 200")

if __name__ == '__main__':
    unittest.main()
