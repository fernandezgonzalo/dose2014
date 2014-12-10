import unittest
import requests
import json
from test_api_rest import *
from faker import Factory

class TestProject(unittest.TestCase):

    def setUp(self):
        self.session = requests.Session()	

    def test_full(self):

	### things that are tested:
	### 1) get all projects
	### 2) insert a new test project
	### 3) verify that there is now a more project in the database
	### 4) verify that the data entered correctly
	### 5) modify project data
	### 6) verify that the data is successfully modified
	### 7) get all projects
	### 8) delete test project
	### 9) verify that an item was removed in the database
	

	do_login(self.session, "dex@asd.com", "blood")
	
		# get all projects in users_1
	projects_1 = json.loads(get_projects(self.session, 5).content)

        name = "test_name"
        info = "test_info"
		# insert a user
        req = post_projects(self.session, name, info, 5)
	self.assertEqual(req.status_code, 200)
	
		
	

if __name__ == '__main__':
    unittest.main()
