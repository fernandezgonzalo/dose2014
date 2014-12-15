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

        self.invalid_create_new_json = [
            # Not a json object
            'Test',

            # Missing status
            '{"description": "some description", "end_date": "2014-12-31", "start_date": "2013-01-01", "owner": 1, "name": "Test Project"}',

            # Missing description
            '{"status": 1, "end_date": "2014-12-31", "start_date": "2013-01-01", "owner": 1, "name": "Test Project"}',

            # Missing end_date
            '{"status": 1, "description": "some description", "start_date": "2013-01-01", "owner": 1, "name": "Test Project"}',

            # Missing start_date
            '{"status": 1, "description": "some description", "end_date": "2014-12-31", "owner": 1, "name": "Test Project"}',

            # Missing owner
            '{"status": 1, "description": "some description", "end_date": "2014-12-31", "start_date": "2013-01-01", "name": "Test Project"}',

            # Missing name
            '{"status": 1, "description": "some description", "end_date": "2014-12-31", "start_date": "2013-01-01", "owner": 1}',

            # Additional non-existing field (a)
            '{"status": 1, "description": "some description", "end_date": "2014-12-31", "start_date": "2013-01-01", "owner": 1, "name": "Test Project", "a": "a"}',

            # Additional existing field (id)
            '{"status": 1, "description": "some description", "end_date": "2014-12-31", "start_date": "2013-01-01", "owner": 1, "name": "Test Project", "id":1}'
        ]

        self.invalid_update_json = [
            # Non-existing field
            '{"a": "a"}',
        ]

    def test_invite_developers(self):
        method = requests.put
        uri = self.single_resource_uri + '/invite_dev'
        data = '{"email":"vimal@chellakudam"}'
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
