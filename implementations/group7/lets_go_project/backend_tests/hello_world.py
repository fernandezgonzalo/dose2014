import config
import requests


cookie = requests.post('http://localhost:9090/sessions', data='{"username": "asdf", "password": "asdf"}').cookies['lets_go_session']
user = requests.get('http://localhost:9090/users/1', cookies=dict(lets_go_session=cookie))
print user.text