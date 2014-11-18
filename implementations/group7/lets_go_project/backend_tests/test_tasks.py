import requests
import unittest
import test_rest_resource
from model.task import Task, get_task_from_json


class TestTasks(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestTasks, self).setUp()
        self.resource_name = 'task'
        self.resources_uri = self.root_uri + 'projects/1/sprints/1/stories/1/tasks'
        self.single_resource_uri = self.resources_uri + '/1'
        self.example_resource = Task(
            nr=1,
            description='some description',
            owner=1,
            story_id=1,
            id_=2
        )

        self.update_resource = Task(
            nr=7,
            description='some updated description',
            owner=2,
            story_id=2,
            id_=2
        )

    def test_assign_developers(self):
        method = requests.put
        uri = self.single_resource_uri + '/assign_devs'
        data = '{"devs":[3, 4]}'
        self.ensure_unauthorized_fails_authorized_passes(method, uri, 204, data=data)

    def test_unassign_developers(self):
        method = requests.put
        uri = self.single_resource_uri + '/unassign_devs'
        data = '{"devs":[3, 4]}'
        self.ensure_unauthorized_fails_authorized_passes(method, uri, 204, data=data)

    def get_resource_from_json(self, json_str):
        return get_task_from_json(json_str)


if __name__ == '__main__':
    unittest.main()
