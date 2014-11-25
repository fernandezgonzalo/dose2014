import config
import requests

print requests.post('http://localhost:9090/sessions', data='{"email": "asdf", "password": "asdf"}').text
cookie = requests.post('http://localhost:9090/sessions', data='{"email": "asdf", "password": "asdf"}').cookies['lets_go_session']
user = requests.put('http://localhost:9090/projects/1', cookies=dict(lets_go_session=cookie), data='{"description": "updated"}')
print user.text
print user.status_code