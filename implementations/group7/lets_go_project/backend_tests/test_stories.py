import unittest
import test_rest_resource


class TestStories(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestStories, self).setUp()
        self.resource_name = 'story'
        self.resources_uri = self.root_uri + 'users/1/projects/1/sprints/1/stories'
        self.single_resource_uri = self.resources_uri + '/1'


if __name__ == '__main__':
    unittest.main()
