import requests
import unittest
import config
import os


class TestRestResource(unittest.TestCase):

    def setUp(self):
        self.root_uri = 'http://%s:%d/' % (config.HOST, config.PORT)
        cookie = requests.post(self.root_uri + 'sessions', data='{"username": "Mary", "password": "secret"}').cookies['lets_go_session']
        self.cookies = dict(lets_go_session=cookie)

    def test_get_all(self):
        method = requests.get
        uri = self.resources_uri
        self.ensure_unauthorized_fails_authorized_passes(method, uri)

    def test_create_new(self):
        method = requests.post
        uri = self.resources_uri
        data = 'asdf'
        self.ensure_unauthorized_fails_authorized_passes(method, uri, data=data)

    def test_get(self):
        method = requests.get
        uri = self.single_resource_uri
        self.ensure_unauthorized_fails_authorized_passes(method, uri)

    def test_update(self):
        method = requests.put
        uri = self.single_resource_uri
        data = 'asdf'
        self.ensure_unauthorized_fails_authorized_passes(method, uri, data=data)

    def test_delete(self):
        method = requests.delete
        uri = self.single_resource_uri
        self.ensure_unauthorized_fails_authorized_passes(method, uri)

    def ensure_unauthorized_fails(self, method, uri, data=None):
        response = method(uri, data=data)
        expected_result = "Error"
        self.assertEqual(response.status_code, 401)
        self.assertEqual(response.text, expected_result)

    def ensure_authorized_passes(self, method, uri, data=None):
        response = method(uri, data=data, cookies=self.cookies)
        if method in [requests.put, requests.delete]:
            expected_result = "ACK"
        elif method == requests.post:
            expected_result = "1"
        else:
            if uri == self.resources_uri:
                expected_result = self.get_dummy_json_list()
            else:
                expected_result = self.get_dummy_json()

        self.assertEqual(response.status_code, 200)
        self.assertEqual(response.text, expected_result)

    def ensure_unauthorized_fails_authorized_passes(self, method, uri, data=None):
        self.ensure_unauthorized_fails(method, uri)
        self.ensure_authorized_passes(method, uri)

    def get_dummy_json(self):
        filename = os.path.dirname(os.path.dirname(__file__)) + '/src/dummy_json/%s.txt' % self.resource_name
        with file(filename) as fobj:
            return fobj.read()

    def get_dummy_json_list(self):
        json = self.get_dummy_json()
        return '{"results": [' + json + ", " + json + "]}"
