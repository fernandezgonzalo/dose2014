import requests
import unittest
import config


# Valid user credentials for a successfull login
EMAIL = 'asdf@asdf'
PASSWORD = 'asdfasdf'


class TestSessions(unittest.TestCase):

    def setUp(self):
        self.root_uri = 'http://%s:%d/' % (config.HOST, config.PORT)
        self.sessions_uri = self.root_uri + 'sessions'
        self.projects_uri = self.root_uri + 'projects'

    def test_login(self):
        """Ensure accessing protected data fails before and succeeds after login."""

        # Without using a cookie, we should fail to access anything
        self.assertEqual(requests.get(self.projects_uri).status_code, 401)

        # With the wrong cookie, we should fail to access anything
        invalid_cookies = dict(lets_go_session="some wrong cookie")
        self.assertEqual(requests.get(self.projects_uri, cookies=invalid_cookies).status_code, 401)

        # With a correct cookie, we should be able to access the projects
        valid_cookies = dict(lets_go_session=self.get_valid_cookie())
        self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies).status_code, 200)

    def test_logout(self):
        """Ensure accessing protected data succeeds before and fails after logout."""

        # Be sure to fail before logging in
        self.assertEqual(requests.get(self.projects_uri).status_code, 401)

        # Be sure to pass after login
        valid_cookies = dict(lets_go_session=self.get_valid_cookie())
        self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies).status_code, 200)

        # Be sure to fail again after logout
        self.assertEqual(requests.delete(self.sessions_uri, cookies=valid_cookies).status_code, 204)
        self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies).status_code, 401)

    def test_multiple_login(self):
        """Creating multiple sessions should be possible."""

        # With the wrong cookie, we should fail to access the projects
        invalid_cookies = dict(lets_go_session="some wrong cookie")
        self.assertEqual(requests.get(self.projects_uri, cookies=invalid_cookies).status_code, 401)

        # Get a first correct cookie
        valid_cookies_1 = dict(lets_go_session=self.get_valid_cookie())

        # Get a second correct cookie
        valid_cookies_2 = dict(lets_go_session=self.get_valid_cookie())

        # We should be able to access the projects now with both cookies
        self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies_1).status_code, 200)
        self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies_2).status_code, 200)

    def test_invalid_login(self):
        """Login should fail with wrong user credentials."""

        # Ensure logging in with an invalid password fails
        response = requests.post(self.sessions_uri, data='{"email": "%s", "password": "%s"}' % (EMAIL, 'wrong_password'))
        self.assertEqual(response.status_code, 401)

        # Ensure logging in with an invalid email address fails
        response = requests.post(self.sessions_uri, data='{"email": "%s", "password": "%s"}' % ('non@existing.com', PASSWORD))
        self.assertEqual(response.status_code, 401)

        # Ensure logging in with an invalid email address and invalid password fails
        response = requests.post(self.sessions_uri, data='{"email": "%s", "password": "%s"}' % ('non@existing.com', 'wrong_password'))
        self.assertEqual(response.status_code, 401)

        # Ensure we can successfully login with the correct email address and password and we can access protected data afterwards
        response = requests.post(self.sessions_uri, data='{"email": "%s", "password": "%s"}' % (EMAIL, PASSWORD))
        self.assertEqual(response.status_code, 200)
        self.assertEqual(requests.get(self.projects_uri, cookies=dict(lets_go_session=response.cookies['lets_go_session'])).status_code, 200)

    def test_invalid_logout(self):
        """Logout with the wrong cookie should fail."""

        # Be sure to fail before logging in
        self.assertEqual(requests.get(self.projects_uri).status_code, 401)

        # Be sure to pass after login
        valid_cookies = dict(lets_go_session=self.get_valid_cookie())
        self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies).status_code, 200)

        # Be sure we can still access protected data after logging out with the wrong cookie
        self.assertEqual(requests.delete(self.sessions_uri, cookies=dict(lets_go_session='invalid_cookie')).status_code, 404)
        self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies).status_code, 200)

        # Be sure to fail again after logout with the correct cookie
        self.assertEqual(requests.delete(self.sessions_uri, cookies=valid_cookies).status_code, 204)
        self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies).status_code, 401)

    def test_multiple_login_logout_cycles(self):
        """Test login-logout-login-logout works as expected with using the same user credentials for both logins."""
        for i in xrange(2):

            # Be sure to fail before logging in
            self.assertEqual(requests.get(self.projects_uri).status_code, 401)

            # Be sure to pass after login
            valid_cookies = dict(lets_go_session=self.get_valid_cookie())
            self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies).status_code, 200)

            # Be sure to fail again after logout
            self.assertEqual(requests.delete(self.sessions_uri, cookies=valid_cookies).status_code, 204)
            self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies).status_code, 401)



    def get_valid_cookie(self):
        """Return a valid cookie for successfull accessing some protected data."""
        return requests.post(self.sessions_uri, data='{"email": "%s", "password": "%s"}' % (EMAIL, PASSWORD)).cookies['lets_go_session']


if __name__ == '__main__':
    unittest.main()