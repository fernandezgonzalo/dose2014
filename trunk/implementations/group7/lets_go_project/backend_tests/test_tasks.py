import requests
import unittest
import test_rest_resource


class TestTasks(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestTasks, self).setUp()
        self.resource_name = 'task'
        self.resources_uri = self.root_uri + 'users/1/projects/1/sprints/1/stories/1/tasks'
        self.single_resource_uri = self.resources_uri + '/1'

    def test_assign_developers(self):
        method = requests.put
        uri = self.single_resource_uri + '/assign_devs'
        data = 'ACK'
        self.ensure_unauthorized_fails_authorized_passes(method, uri, data=data)

    def test_unassign_developers(self):
        method = requests.put
        uri = self.single_resource_uri + '/unassign_devs'
        data = 'ACK'
        self.ensure_unauthorized_fails_authorized_passes(method, uri, data=data)


if __name__ == '__main__':
    unittest.main()
