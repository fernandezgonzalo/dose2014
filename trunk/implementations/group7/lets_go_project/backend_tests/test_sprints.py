import unittest
import test_rest_resource


class TestSprints(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestSprints, self).setUp()
        self.resource_name = 'sprint'
        self.resources_uri = self.root_uri + 'users/1/projects/1/sprints'
        self.single_resource_uri = self.resources_uri + '/1'


if __name__ == '__main__':
    unittest.main()
