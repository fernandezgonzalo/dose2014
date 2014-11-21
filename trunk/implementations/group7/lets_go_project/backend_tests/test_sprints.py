import unittest
import test_rest_resource
from datetime import date
from model.sprint import Sprint, get_sprint_from_json


class TestSprints(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestSprints, self).setUp()
        self.resource_name = 'sprint'
        self.resources_uri = self.root_uri + 'projects/1/sprints'
        self.single_resource_uri = self.resources_uri + '/1'
        self.example_resource = Sprint(
            name="Test Sprint",
            start_date=date(2013, 1, 1),
            end_date=date(2014, 12, 31),
            status=1,
            project_id=1,
            stories=[],
            id_=2
        )

        self.update_resource = Sprint(
            name="Updated Test Sprint",
            start_date=date(2013, 1, 2),
            end_date=date(2014, 12, 2),
            status=2,
            project_id=1,
            stories=[],
            id_=2
        )

    def get_resource_from_json(self, json_str):
        return get_sprint_from_json(json_str)


if __name__ == '__main__':
    unittest.main()
