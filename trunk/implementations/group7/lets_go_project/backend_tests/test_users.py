import unittest
import test_rest_resource
import requests
from model.user import User, get_user_from_json, HASHED_EXAMPLE_PASSWORD
import hashlib


class TestUsers(test_rest_resource.TestRestResource):

    def setUp(self):
        super(TestUsers, self).setUp()
        self.resource_name = 'user'
        self.resources_uri = self.root_uri + 'users'
        self.single_resource_uri = self.resources_uri + '/1'
        self.example_resource = User(
            email='bertrand.meier@gmail.com',
            password='asdf',
            firstname='Bertrand',
            lastname='Meier',
            projects=[],
            assigned_tasks=[],
            id_=2
        )

        self.update_resource = User(
            email='updated.bertrand.meier@gmail.com',
            password='qwer',
            firstname='UpdatedBertrand',
            lastname='UpdatedMeier',
            projects=[],
            assigned_tasks=[],
            id_=2
        )

        self.invalid_create_new_json = [
            # Missing password
            '{"firstname": "Bertrand", "lastname": "Meier", "email": "bertrand.meier@gmail.com"}',

            # Missing email
            '{"firstname": "Bertrand", "lastname": "Meier", "password": "asdf"}',

            # Missing lastname
            '{"firstname": "Bertrand", "email": "bertrand.meier@gmail.com", "password": "asdf"}',

            # Missing firstname
            '{"lastname": "Meier", "email": "bertrand.meier@gmail.com", "password": "asdf"}',

            # Additional non-existing field (a)
            '{"firstname": "Bertrand", "lastname": "Meier", "email": "bertrand.meier@gmail.com", "password": "asdf", "a": "a"}',

            # Additional existing field (id)
            '{"firstname": "Bertrand", "lastname": "Meier", "email": "bertrand.meier@gmail.com", "password": "asdf", "id":1}'
        ]

        self.invalid_update_json = [
            # Non-existing field
            '{"a": "a"}',
        ]

    def test_get_all(self):
        """No support for get_all for users."""
        self.assertEqual(requests.get(self.resources_uri).status_code, 404)

    def test_create_new(self):
        """This case is covered more specific by belows test cases."""
        pass

    def test_update(self):
        """Tested more specific by belows update-tests."""
        pass

    def test_create_update_delete(self):
        """This case is covered by belows more specific test_update_to_non_existing_passes()."""
        pass

    def test_create_new_non_existing_passes(self):
        """Creating a user with a different mailaddress from all other users mailaddress should pass."""

        # Insert a new user with an email address that does not exist in the db before.
        _, new_resource_uri = self.__assert_successfull_creation(self.example_resource)

        # Delete the created user.
        response = self.__assert_successfull_delete(new_resource_uri)

    def test_create_new_like_existing_fails(self):
        """Creating a new user with same mail address as another user should fail."""

        # Insert a new user with an email address that does not exist in the db before.
        _, new_resource_uri = self.__assert_successfull_creation(self.example_resource)

        # Ensure inserting a second user with the same mailaddress fails.
        response = self.__create_new(self.example_resource)
        self.assertEqual(response.status_code, 400)

        # Delete the created user.
        response = self.__assert_successfull_delete(new_resource_uri)

    def test_create_new_with_invalid_json(self):
        """
        Like TestRestResource.test_create_new_with_invalid_json(), but without cookies since
        creating new users without login is allowed.
        """
        for json_data in self.invalid_create_new_json:
            response = requests.post(self.resources_uri, data=json_data)
            self.assertEqual(response.status_code, 400)

    def test_update_to_non_existing_passes(self):
        """Change a users email address to a not already existing email address should pass."""

        # Insert a new user with an email address that does not exist in the db before.
        inserted_user, new_resource_uri = self.__assert_successfull_creation(self.example_resource)

        # Update the user with an email address that does not exist already in the database.
        inserted_user.email = "non@existing.com"
        inserted_user.password = "updated"
        data = inserted_user.get_json_with_database_fields_with_id()
        response = requests.put(new_resource_uri, data=data, cookies = self.cookies)
        self.assertEqual(response.status_code, 204)

        # Delete the created user.
        response = self.__assert_successfull_delete(new_resource_uri)

    def test_update_with_unchanged_email_passes(self):
        """Updating a user with his own unchanged email address should pass."""

        # Insert a new user with an email address that does not exist in the db before.
        inserted_user, new_resource_uri = self.__assert_successfull_creation(self.example_resource)

        # Update the user with his own unchanged email address.
        inserted_user.password = "updated"
        data = inserted_user.get_json_with_database_fields_with_id()
        response = requests.put(new_resource_uri, data=data, cookies = self.cookies)
        self.assertEqual(response.status_code, 204)

        # Delete the created user.
        response = self.__assert_successfull_delete(new_resource_uri)

    def test_update_to_existing_email_fails(self):
        """Change a users email address to a already existing email address should fail."""

        # Insert 2 new users with email addresses that do not exist in the db before.
        inserted_user_1, new_resource_uri_1 = self.__assert_successfull_creation(self.example_resource)
        inserted_user_2, new_resource_uri_2 = self.__assert_successfull_creation(self.update_resource)

        # Update the user with an email address that exists already in the database.
        inserted_user_2.email = inserted_user_1.email
        inserted_user_2.password = "updated"
        data = inserted_user_2.get_json_with_database_fields_with_id()
        response = requests.put(new_resource_uri_2, data=data, cookies = self.cookies)
        self.assertEqual(response.status_code, 400)

        # Delete the created users.
        response = self.__assert_successfull_delete(new_resource_uri_1)
        response = self.__assert_successfull_delete(new_resource_uri_2)

    def __create_new(self, user):
        """Create a new user in the database from 'user'."""
        return requests.post(self.resources_uri, data=user.get_json_with_database_fields_without_id())

    def __delete(self, uri):
        """Delete the user at this uri."""
        return requests.delete(uri, cookies=self.cookies)

    def __assert_successfull_delete(self, uri):
        """Assert that deleting the user at uri succeeds with status code 204."""
        response = self.__delete(uri)
        self.assertEqual(response.status_code, 204)

    def __assert_successfull_creation(self, user):
        """
        Assert that creating a new user in the database from 'user' succeeds with status code 201.
        Ensure, that the password of 'user' was hashed correctly.
        Return a tuple of an object for the created user and the uri of the created user.
        """
        response = self.__create_new(user)
        self.assertEqual(response.status_code, 201)
        new_id = response.text

        new_resource_uri = '%s/%s' % (self.resources_uri, new_id)
        response = requests.get(new_resource_uri, cookies = self.cookies)
        inserted_user = self.get_resource_from_json(response.text)

        m = hashlib.sha256()
        m.update(user.password + new_id)
        self.assertEqual(inserted_user.password, m.hexdigest().upper())
        return (inserted_user, new_resource_uri)

    def get_resource_from_json(self, json_str):
        """Return a user created from 'json_str'"""
        return get_user_from_json(json_str)


if __name__ == '__main__':
    unittest.main()
