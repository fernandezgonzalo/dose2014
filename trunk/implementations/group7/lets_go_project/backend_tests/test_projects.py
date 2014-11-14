import unittest
import test_rest_resource
import requests


class TestProjects(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestProjects, self).setUp()
        self.resource_name = 'project'
        self.resources_uri = self.root_uri + 'users/1/projects'
        self.single_resource_uri = self.resources_uri + '/1'

    def test_invite_developers(self):
        method = requests.put
        uri = self.single_resource_uri + '/invite_devs'
        data = 'asdf'
        self.ensure_unauthorized_fails_authorized_passes(method, uri, data=data)

    def test_remove_developers(self):
        method = requests.put
        uri = self.single_resource_uri + '/remove_devs'
        data = 'asdf'
        self.ensure_unauthorized_fails_authorized_passes(method, uri, data=data)


if __name__ == '__main__':
    unittest.main()
