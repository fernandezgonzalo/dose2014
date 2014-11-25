import config
import requests

login_response = requests.post('http://localhost:9090/sessions', data='{"email": "asdf", "password": "asdf"}')
print "Status code of login: " + str(login_response.status_code)
print "Returned data: " + login_response.text
print

cookie = login_response.cookies['lets_go_session']
user = requests.put('http://localhost:9090/projects/1', cookies=dict(lets_go_session=cookie), data='{"description": "updated"}')
print "Status code of updating a user: " + str(user.status_code)