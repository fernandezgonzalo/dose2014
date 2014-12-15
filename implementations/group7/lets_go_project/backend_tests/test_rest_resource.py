import requests
import unittest
import config
import os


class TestRestResource(unittest.TestCase):

    def setUp(self):
        self.root_uri = 'http://%s:%d/' % (config.HOST, config.PORT)
        cookie = requests.post(self.root_uri + 'sessions', data='{"email": "asdf@asdf", "password": "asdfasdf"}').cookies['lets_go_session']
        self.cookies = dict(lets_go_session=cookie)
        self.invalid_create_new_json = []
        self.invalid_update_json = []

    def test_get_all(self):
        method = requests.get
        uri = self.resources_uri
        self.ensure_unauthorized_fails_authorized_passes(method, uri, 200)

    def test_get(self):
        method = requests.get
        uri = self.single_resource_uri
        self.ensure_unauthorized_fails_authorized_passes(method, uri, 200)

    def test_create_new_with_invalid_json(self):
        """Check that creating a new resource with invalid json fails."""
        for json_data in self.invalid_create_new_json:
            response = requests.post(self.resources_uri, data=json_data, cookies=self.cookies)
            self.assertEqual(response.status_code, 400)

    def test_update_with_invalid_json(self):
        """Check that updating a resource with invalid json fails."""
        for json_data in self.invalid_update_json:
            response = requests.put(self.single_resource_uri, data=json_data, cookies=self.cookies)
            self.assertEqual(response.status_code, 400)

    def test_create_update_delete(self):

        # Create
        data = self.example_resource.get_json_with_database_fields_without_id()
        response = requests.post(self.resources_uri, data=data, cookies=self.cookies)
        self.assertEqual(response.status_code, 201)
        id_ = int(response.text)
        self.example_resource.id = id_
        self.update_resource.id = id_
        single_resource_uri = '%s/%d' % (self.resources_uri, self.example_resource.id)

        # Update
        data = self.update_resource.get_json_with_database_fields_with_id()
        response = requests.put(single_resource_uri, data=data, cookies=self.cookies)
        self.assertEqual(response.status_code, 204)

        # Check successful update
        response = requests.get(single_resource_uri, cookies=self.cookies)
        self.assertEqual(response.status_code, 200)
        json_str = response.text
        updated_resource = self.get_resource_from_json(json_str)
        self.assertEqual(self.update_resource, updated_resource)

        # Delete
        response = requests.delete(single_resource_uri, cookies=self.cookies)
        self.assertEqual(response.status_code, 204)

        # Ensure deleted
        response = requests.get(single_resource_uri, cookies=self.cookies)
        self.assertEqual(response.status_code, 404)



    def ensure_unauthorized_fails(self, method, uri, data=None):
        response = method(uri, data=data)
        self.assertEqual(response.status_code, 401)

    def ensure_authorized_passes(self, method, uri, statuscode, data=None):
        response = method(uri, data=data, cookies=self.cookies)
        self.assertEqual(response.status_code, statuscode)

    def ensure_unauthorized_fails_authorized_passes(self, method, uri, statuscode, data=None):
        self.ensure_unauthorized_fails(method, uri, data)
        self.ensure_authorized_passes(method, uri, statuscode, data)
