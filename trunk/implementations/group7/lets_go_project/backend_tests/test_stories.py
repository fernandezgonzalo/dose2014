import unittest
import test_rest_resource
from model.story import Story, get_story_from_json


class TestStories(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestStories, self).setUp()
        self.resource_name = 'story'
        self.resources_uri = self.root_uri + 'projects/1/sprints/1/stories'
        self.single_resource_uri = self.resources_uri + '/1'
        self.example_resource = Story(
            title="Test story title",
            description="some description",
            points=12,
            notes='some notes',
            sprint_id=1,
            id_=2
        )

        self.update_resource = Story(
            title="Updated test story title",
            description="some updated description",
            points=1,
            notes='some updated notes',
            sprint_id=1,
            id_=2
        )

    def get_resource_from_json(self, json_str):
        return get_story_from_json(json_str)


if __name__ == '__main__':
    unittest.main()
