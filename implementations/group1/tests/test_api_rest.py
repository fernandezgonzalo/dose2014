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
	return session.get(uri_logout, headers=headers)

def get_users(session):
	uri_get_users = "http://localhost:9090/api/users"
	headers = {"content-type": "application/json"}
	return session.get(uri_get_users, headers=headers)

def get_user(session, id_user):
	uri_get_user = "http://localhost:9090/api/users/%s" % id_user
	headers = {"content-type": "application/json"}
	return session.get(uri_get_user, headers=headers)

def post_users(session, name, lastname, email, password, rol, active):
	uri_post_users = "http://localhost:9090/api/users"
	payload = {"name": name, "lastname": lastname, "email": email, "password": password, "rol": rol, "active": active}
	headers = {"content-type": "application/json"}
	return session.post(uri_post_users, data=json.dumps(payload), headers=headers)

def delete_users(session, id_user):
	uri_delete_users = "http://localhost:9090/api/users/%s" % id_user
	headers = {"content-type": "application/json"}
	return session.delete(uri_delete_users, headers=headers)

def put_users(session, id_user, name, lastname, password, rol, active):
	uri_put_users = "http://localhost:9090/api/users/%s" % id_user
	payload = {"name": name, "lastname": lastname, "password":password, "rol": rol, "active": active}
	headers = {"content-type": "application/json", "accept": "applicacion/json"}
	return session.put(uri_put_users, data=json.dumps(payload), headers=headers)

# PROJECTS


def get_projects(session, id_user):
	uri_get_projects = "http://localhost:9090/api/users/%s/projects" % id_user
	headers = {"content-type": "application/json"}
	return session.get(uri_get_projects, headers=headers)

def get_project(session, id_project):
	uri_get_project = "http://localhost:9090/api/users/projects/%s" % id_project
	headers = {"content-type": "application/json"}
	return session.get(uri_get_project, headers=headers)

def add_project(session, id_user, name, info):
	uri_add_project = "http://localhost:9090/api/users/%s/projects" % id_user
	payload = {"name": name, "info": info}
	headers = {"content-type": "application/json"}
	return session.post(uri_add_project, data=json.dumps(payload), headers=headers)

def delete_project (session, id_user, id_project):
	uri_delete_project = "http://localhost:9090/api/users/%s/projects/%s" % (id_user, id_project)
	headers = {"content-type": "application/json"}
	return session.delete(uri_delete_project, headers=headers)

def update_project(session, id_user, id_project, name, info):
	uri_update_project = "http://localhost:9090/api/users/%s/projects/%s" % (id_user, id_project)
	headers = {"content-type": "application/json"}
	return session.put(uri_update_project, data=json.dumps(payload), headers=headers)

# REQUIREMENTS

def get_requirements (session, id_project):
	uri_get_requirement = "http://localhost:9090/api/users/projects/%s/requirements" % id_project
	headers = {"content-type": "application/json"}
	return session.get(uri_get_requirement, headers=headers)

if __name__ == '__main__':
	s = requests.Session()
	print "[*] Login with email:asd@asd.com and password:asd"
	print do_login(s, "asd@asd.com", "asd")
	print "[*] Get user info id=4"
	print get_user(s, 4).content
	print " "
	print get_requirements (s,53).content




