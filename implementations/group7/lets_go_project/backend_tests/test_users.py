import unittest
import test_rest_resource


class TestUsers(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestUsers, self).setUp()
        self.resource_name = 'user'
        self.resources_uri = self.root_uri + 'users'
        self.single_resource_uri = self.resources_uri + '/1'


if __name__ == '__main__':
    unittest.main()
