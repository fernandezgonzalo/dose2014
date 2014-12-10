import config
import requests

login_response = requests.post('http://localhost:9090/sessions', data='{"email": "asdf@asdf", "password": "asdfasdf"}')
cookie = login_response.cookies['lets_go_session']
response = requests.get('http://localhost:9090/projects/1/messages', cookies=dict(lets_go_session=cookie))
print response.text
response = requests.post('http://localhost:9090/projects/1/messages', data='{"text": "test", "project_id": 1}', cookies=dict(lets_go_session=cookie))
print response.text

response = requests.get('http://localhost:9090/projects/1/sprints/1/burndown_chart', cookies=dict(lets_go_session=cookie))
print response.text

# new_user_data = '{"firstname": "Aaron", "lastname": "Beisch", "email": "aaron.beisch10@gmail.com", "password": "asdf"}'
# r = requests.post('http://localhost:9090/users', data=new_user_data)
# user_id = r.text
# print user_id

# new_user_login_data = '{"email": "aaron.beisch10@gmail.com", "password": "asdf"}'
# login_response = requests.post('http://localhost:9090/sessions', data=new_user_login_data)
# print "Status code of login: " + str(login_response.status_code)

# cookie = login_response.cookies['lets_go_session']
# r = requests.delete('http://localhost:9090/users/%s' % user_id, cookies=dict(lets_go_session=cookie))
# print r.text
# print r.status_code

# logout_response = requests.delete('http://localhost:9090/sessions', cookies=dict(lets_go_session=cookie))
# print "Status code of logout: " + str(logout_response.status_code)

# new_user_login_data = '{"email": "aaron.beisch10@gmail.com", "password": "asdf"}'
# login_response = requests.post('http://localhost:9090/sessions', data=new_user_login_data)
# print "Status code of login: " + str(login_response.status_code)
