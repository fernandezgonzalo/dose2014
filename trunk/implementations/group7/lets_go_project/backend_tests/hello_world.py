import config
import requests

print requests.post('http://localhost:9090/sessions', data='{"email": "asdf", "password": "asdf"}').text
cookie = requests.post('http://localhost:9090/sessions', data='{"email": "asdf", "password": "asdf"}').cookies['lets_go_session']
user = requests.get('http://localhost:9090/projects', cookies=dict(lets_go_session=cookie))
print user.text
print user.status_code