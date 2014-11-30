import config
import requests

login_response = requests.post('http://localhost:9090/sessions', data='{"email": "asfdf", "password": "asdf"}')
print "Status code of login: " + str(login_response.status_code)
print

login_response = requests.post('http://localhost:9090/sessions', data='{"email": "asdf", "password": "asdf"}')
cookie = login_response.cookies['lets_go_session']
response = requests.get('http://localhost:9090/projects/1/sprints/1/stories/1/tasks', cookies=dict(lets_go_session=cookie))
print response.text