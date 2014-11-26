import requests
import json


def do_login(session, email, password):
	uri_login = "http://localhost:9090/api/login"
	payload = {"email": email, "password": password}
	headers = {"content-type": "application/json"}
	return session.post(uri_login, data=json.dumps(payload), headers=headers)
	
def do_logout(session):
	uri_logout = "http://localhost:9090/api/logout"
	headers = {"content-type": "application/json"}
	return s.get(uri_logout, headers=headers)
	
def get_users(session):
	uri_get_users = "http://localhost:9090/api/users"
	headers = {"content-type": "application/json"}
	return session.get(uri_get_users, headers=headers)
	
def post_users(session, name, lastname, email, password, rol, active):
	uri_post_users = "http://localhost:9090/api/users"
	payload = {"name": name, "lastname": lastname, "email": email, "password": password, "rol": rol, "active": active}
	headers = {"content-type": "application/json"}
	return s.post(uri_post_users, data=json.dumps(payload), headers=headers)
	
def delete_users(session, id_user):
	uri_delete_users = "http://localhost:9090/api/users/%s" % id_user
	headers = {"content-type": "application/json"}
	return s.delete(uri_delete_users, headers=headers)
	
def put_users(session, id_user, name, lastname, password, rol, active):
	uri_put_users = "http://localhost:9090/api/users/%s" % id_user
	payload = {"name": name, "lastname": lastname, "password":password, "rol": rol, "active": active}
	headers = {"content-type": "application/json"}
	return s.put(uri_put_users, data=json.dumps(payload), headers=headers)


s = requests.Session()
do_login(s, "asd@asd.com", "asd")

