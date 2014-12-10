import unittest
import test_rest_resource
import requests
from datetime import date
from model.project import Project, get_project_from_json


class TestProjects(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestProjects, self).setUp()
        self.resource_name = 'project'
        self.resources_uri = self.root_uri + 'projects'
        self.single_resource_uri = self.resources_uri + '/1'
        self.example_resource = Project(
            name="Test Project",
            description="some description",
            start_date=date(2013, 1, 1),
            end_date=date(2014, 12, 31),
            status=1,
            owner=1,
            invited_devs=[],
            sprints=[],
            id_=2
        )

        self.update_resource = Project(
            name="Updated Test Project",
            description="some updated description",
            start_date=date(2013, 1, 2),
            end_date=date(2014, 12, 2),
            status=2,
            owner=2,
            invited_devs=[1],
            sprints=[],
            id_=2
        )
        # requests.put(self.single_resource_uri + '/invite_devs', data='{"devs":[1]}', cookies=self.cookies)

    def test_invite_developers(self):
        method = requests.put
        uri = self.single_resource_uri + '/invite_dev'
        data = '{"email":"abdul.beirne@gmail.com"}'
        self.ensure_unauthorized_fails_authorized_passes(method, uri, 204, data=data)

    def test_remove_developers(self):
        method = requests.put
        uri = self.single_resource_uri + '/remove_devs'
        data = '{"devs":[3, 4]}'
        self.ensure_unauthorized_fails_authorized_passes(method, uri, 204, data=data)

    def get_resource_from_json(self, json_str):
        return get_project_from_json(json_str)


if __name__ == '__main__':
    unittest.main()
