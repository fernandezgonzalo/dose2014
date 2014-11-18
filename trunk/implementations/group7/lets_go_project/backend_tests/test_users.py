import unittest
import test_rest_resource
from model.user import User, get_user_from_json, HASHED_EXAMPLE_PASSWORD


class TestUsers(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestUsers, self).setUp()
        self.resource_name = 'user'
        self.resources_uri = self.root_uri + 'users'
        self.single_resource_uri = self.resources_uri + '/1'
        self.example_resource = User(
            email='bertrand.meier@gmail.com',
            password=HASHED_EXAMPLE_PASSWORD,
            firstname='Bertrand',
            lastname='Meier',
            projects=[],
            assigned_tasks=[],
            id_=2
        )

        self.update_resource = User(
            email='updated.bertrand.meier@gmail.com',
            password=HASHED_EXAMPLE_PASSWORD,
            firstname='UpdatedBertrand',
            lastname='UpdatedMeier',
            projects=[],
            assigned_tasks=[],
            id_=2
        )

    def get_resource_from_json(self, json_str):
        return get_user_from_json(json_str)


if __name__ == '__main__':
    unittest.main()
