import unittest
import test_rest_resource
import requests
from model.user import User, get_user_from_json, HASHED_EXAMPLE_PASSWORD
import hashlib


class TestUsers(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestUsers, self).setUp()
        self.resource_name = 'user'
        self.resources_uri = self.root_uri + 'users'
        self.single_resource_uri = self.resources_uri + '/2'
        self.example_resource = User(
            email='bertrand.meier@gmail.com',
            password='asdf',
            firstname='Bertrand',
            lastname='Meier',
            projects=[],
            assigned_tasks=[],
            id_=2
        )

        self.update_resource = User(
            email='updated.bertrand.meier@gmail.com',
            password='qwer',
            firstname='UpdatedBertrand',
            lastname='UpdatedMeier',
            projects=[],
            assigned_tasks=[],
            id_=2
        )

    def test_get_all(self):
        pass

    def test_create_new(self):
        response = requests.post(self.resources_uri, data=self.example_resource.get_json_with_database_fields_without_id())
        self.assertEqual(response.status_code, 201)
        new_id = response.text

        response = requests.get('%s/%s' % (self.resources_uri, new_id), cookies = self.cookies)
        inserted_user = self.get_resource_from_json(response.text)

        m = hashlib.sha256()
        m.update(self.example_resource.password + new_id)
        self.assertEqual(inserted_user.password, m.hexdigest().upper())

    def get_resource_from_json(self, json_str):
        return get_user_from_json(json_str)


if __name__ == '__main__':
    unittest.main()
