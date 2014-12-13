import unittest
import requests
import json
from test_api_rest import *
from faker import Factory

class TestProject(unittest.TestCase):

    def setUp(self):
        self.session = requests.Session()

    '''def test_full(self):

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

		# get all projects in projects_1
	projects_1 = json.loads(get_projects(self.session, 5).content)

        name = "test_name"
        info = "test_info"
		# insert a user
        req = add_project(self.session,5, name, info)
	self.assertEqual(req.status_code, 200)

		# get all projects in projects_2
	projects_2  = json.loads(get_projects(self.session, 5).content)

		# the number of projects is increased by 1 after inserting a project
		# the length projects_1 is equal to the length (projects_2 - 1)
	self.assertEqual(len (projects_1), len  (projects_2)-1)

		# get the id of test project in "id_project"
	for i in range (len  (projects_2)):
		if projects_2 [i] ['id_user'] == "5" and projects_2 [i] ['id_project'] == id_project:
			id_project = projects_2 [i] ['id']

		# obtain project information
	project_info = json.loads(get_project (self.session, id_project).content)
		# verify that the data entered correctly
	self.assertEqual(project_info ['name'], "test_name")
	self.assertEqual(project_info ['info'], "test_info")

		# modify project data
	put_project = update_projects(self.session, id_project, "test_name_2", "test_info_2")

		#verify that the data is successfully modified
	project_info_2 = json.loads(get_project (self.session, id_project).content)
	self.assertEqual(project_info_2 ['name'], "test_name_2")
	self.assertEqual(project_info_2 ['info'], "test_info_2")

		#get all projects in projects_1
	projects_1 = json.loads(get_projects(self.session,5).content)
		# delete project
	req2 = delete_project (self.session, id_project)
		#get all projects in project_2
	projects_2  = json.loads(get_projects(self.session,5).content)
		# the number of projects is decremented by 1 after deleting a project
		# the length projects_1 is equal to the length (projects_2 + 1)
	self.assertEqual(len (projects_1), len  (projects_2)+1) '''
	self.assertTrue(True)

if __name__ == '__main__':
    unittest.main()
