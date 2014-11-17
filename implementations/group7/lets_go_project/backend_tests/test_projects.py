import unittest
import test_rest_resource
import requests
from datetime import date
from model.project import Project


class TestProjects(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestProjects, self).setUp()
        self.resource_name = 'project'
        self.resources_uri = self.root_uri + 'users/1/projects'
        self.single_resource_uri = self.resources_uri + '/1'
        self.example_resource = Project(
            name="Test Project",
            description="some description",
            start_date=date(2013, 1, 1),
            end_date=date(2014, 12, 31),
            status=1,
            owner=1,
            invited_devs=[1, 2],
            id_=2
        )

    def test_invite_developers(self):
        method = requests.put
        uri = self.single_resource_uri + '/invite_devs'
        data = "[3, 4]"
        self.ensure_unauthorized_fails_authorized_passes(method, uri, data=data)

    def test_remove_developers(self):
        method = requests.put
        uri = self.single_resource_uri + '/remove_devs'
        data = "[1, 2]"
        self.ensure_unauthorized_fails_authorized_passes(method, uri, data=data)


if __name__ == '__main__':
    unittest.main()
