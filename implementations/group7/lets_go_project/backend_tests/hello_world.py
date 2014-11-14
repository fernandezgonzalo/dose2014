import config
import requests


cookie = requests.post('http://localhost:9090/sessions', data='{"username": "Mary", "password": "secret"}').cookies['lets_go_session']
users = requests.get('http://localhost:9090/users/1', cookies=dict(lets_go_session=cookie))
print users.text