import config
import requests


cookie = requests.post('http://localhost:9090/sessions', data='{"email": "asdf", "password": "asdf"}').cookies['lets_go_session']
user = requests.get('http://localhost:9090/projects/1', cookies=dict(lets_go_session=cookie))
print user.text
print user.status_code