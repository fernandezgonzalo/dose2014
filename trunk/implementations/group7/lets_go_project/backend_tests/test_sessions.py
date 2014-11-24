import requests
import unittest
import config


EMAIL = 'asdf'
PASSWORD = 'asdf'


class TestSessions(unittest.TestCase):

    def setUp(self):
        self.root_uri = 'http://%s:%d/' % (config.HOST, config.PORT)
        self.sessions_uri = self.root_uri + 'sessions'
        self.projects_uri = self.root_uri + 'projects'

    def test_login(self):

        # Without using a cookie, we should fail to access anything
        self.assertEqual(requests.get(self.projects_uri).status_code, 401)

        # With the wrong cookie, we should fail to access anything
        invalid_cookies = dict(lets_go_session="some wrong cookie")
        self.assertEqual(requests.get(self.projects_uri, cookies=invalid_cookies).status_code, 401)

        # With a correct cookie, we should be able to access the projects
        valid_cookies = dict(lets_go_session=self.get_valid_cookie())
        self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies).status_code, 200)

    def test_logout(self):

        # Be sure to fail before logging in
        self.assertEqual(requests.get(self.projects_uri).status_code, 401)

        # Be sure to pass after login
        valid_cookies = dict(lets_go_session=self.get_valid_cookie())
        self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies).status_code, 200)

        # Be sure to fail again after logout
        self.assertEqual(requests.delete(self.sessions_uri, cookies=valid_cookies).status_code, 204)
        self.assertEqual(requests.get(self.projects_uri, cookies=valid_cookies).status_code, 401)


    def get_valid_cookie(self):
        return requests.post(self.sessions_uri, data='{"email": "%s", "password": "%s"}' % (EMAIL, PASSWORD)).cookies['lets_go_session']


if __name__ == '__main__':
    unittest.main()