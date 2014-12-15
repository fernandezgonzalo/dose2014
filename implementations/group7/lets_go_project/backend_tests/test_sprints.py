import unittest
import test_rest_resource
from datetime import date
import requests
from model.sprint import Sprint, get_sprint_from_json


class TestSprints(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestSprints, self).setUp()
        self.resource_name = 'sprint'
        self.resources_uri = self.root_uri + 'projects/1/sprints'
        self.single_resource_uri = self.resources_uri + '/1'
        self.example_resource = Sprint(
            name="Test Sprint",
            start_date=date(2018, 1, 1),
            end_date=date(2018, 12, 31),
            status=1,
            project_id=1,
            stories=[],
            id_=2
        )

        self.update_resource = Sprint(
            name="Updated Test Sprint",
            start_date=date(2017, 2, 1),
            end_date=date(2017, 2, 28),
            status=2,
            project_id=1,
            stories=[],
            id_=2
        )

    def test_overlapping_sprints_impossible(self):
        # Create first sprint
        data = self.example_resource.get_json_with_database_fields_without_id()
        response = requests.post(self.resources_uri, data=data, cookies=self.cookies)
        self.assertEqual(response.status_code, 201)
        single_resource_uri_1 = '%s/%d' % (self.resources_uri, int(response.text))

        # Ensure creating a second sprint with overlapping dates fails
        overlapping_sprints = [

            # Same start and end
            '{"status": 1, "start_date": "2018-01-01", "end_date": "2018-12-31", "name": "Test Sprint"}',

            # Terminates after other sprint starts
            '{"status": 1, "start_date": "2017-01-01", "end_date": "2018-01-31", "name": "Test Sprint"}',

            # Starts before other sprint terminates
            '{"status": 1, "start_date": "2018-11-30", "end_date": "2019-01-31", "name": "Test Sprint"}',

            # Starts before other sprint terminates, Terminates after other sprint terminates
            '{"status": 1, "start_date": "2017-01-01", "end_date": "2019-01-31", "name": "Test Sprint"}',

            # Within other sprint
            '{"status": 1, "start_date": "2018-01-02", "end_date": "2018-12-30", "name": "Test Sprint"}',

            # start_date after end_date
            '{"status": 1, "start_date": "2019-12-31", "end_date": "2019-01-01", "name": "Test Sprint"}'
        ]

        for overlapping_sprint in overlapping_sprints:
            response = requests.post(self.resources_uri, data=overlapping_sprint, cookies=self.cookies)
            self.assertEqual(response.status_code, 400)

        # Create second sprint
        not_overlapping_sprint = '{"status": 1, "start_date": "2019-01-01", "end_date": "2019-12-31", "name": "Test Sprint"}'
        response = requests.post(self.resources_uri, data=not_overlapping_sprint, cookies=self.cookies)
        self.assertEqual(response.status_code, 201)
        single_resource_uri_2 = '%s/%d' % (self.resources_uri, int(response.text))

        # Ensure updating the second sprint with overlapping dates fails
        overlapping_sprints = [

            # Same start and end
            '{"start_date": "2018-01-01", "end_date": "2018-12-31"}',
            '{"start_date": "2018-01-01"}',
            '{"end_date": "2018-12-31"}',

            # Terminates after other sprint starts
            '{"start_date": "2017-01-01", "end_date": "2018-01-31"}',

            # Starts before other sprint terminates
            '{"start_date": "2018-11-30", "end_date": "2019-01-31"}',
            '{"start_date": "2018-11-30"}',

            # Starts before other sprint terminates, Terminates after other sprint terminates
            '{"start_date": "2017-01-01", "end_date": "2019-01-31"}',

            # Within other sprint
            '{"start_date": "2018-01-02", "end_date": "2018-12-30"}',
            '{"start_date": "2018-01-02"}',
            '{"end_date": "2018-12-30"}',

            # start_date after end_date
            '{"start_date": "2019-12-31", "end_date": "2019-01-01"}',
            '{"start_date": "2020-01-01"}',
            '{"end_date": "2018-12-31"}'
        ]

        for overlapping_sprint in overlapping_sprints:
            response = requests.put(single_resource_uri_2, data=overlapping_sprint, cookies=self.cookies)
            self.assertEqual(response.status_code, 400)

        # Ensure updating the second sprint with non-overlapping dates succeeds
        non_overlapping_data = '{"start_date": "2019-01-01", "end_date": "2019-12-31"}'
        response = requests.put(single_resource_uri_2, data=non_overlapping_data, cookies=self.cookies)
        self.assertEqual(response.status_code, 204)

        # Delete both sprints
        response = requests.delete(single_resource_uri_1, cookies=self.cookies)
        self.assertEqual(response.status_code, 204)
        response = requests.delete(single_resource_uri_2, cookies=self.cookies)
        self.assertEqual(response.status_code, 204)


    def get_resource_from_json(self, json_str):
        return get_sprint_from_json(json_str)


if __name__ == '__main__':
    unittest.main()
