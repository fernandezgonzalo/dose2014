import requests
import json

# SESSION

def do_login(session, email, password):
	uri_login = "http://localhost:9090/api/login"
	payload = {"email": email, "password": password}
	headers = {"content-type": "application/json"}
	return session.post(uri_login, data=json.dumps(payload), headers=headers)

def do_logout(session):
	uri_logout = "http://localhost:9090/api/logout"
	headers = {"content-type": "application/json"}
	return session.get(uri_logout, headers=headers)

# USERS

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

# ROLE

def get_role(session, id_user, id_project):
	uri_get_role = "http://localhost:9090/api/users/%s/projects/%s/role" % (id_user, id_project)
	headers = {"content-type": "application/json", "accept": "applicacion/json"}
	return session.get(uri_get_role, headers=headers)

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
	payload = {"name": name, "info": info}
	headers = {"content-type": "application/json"}
	return session.put(uri_update_project, data=json.dumps(payload), headers=headers)

# DEVELOPERS

def get_devs_from_project(session, id_user, id_project):
	uri_get_devs_from_project = "http://localhost:9090http://localhost:9090/api/users/%s/projects/%s/developers" % (id_user, id_project)
	headers = {"content-type": "application/json"}
	return session.get(uri_get_devs_from_project, headers=headers)

def add_dev_from_project(session, id_user, id_project, role):
	uri_add_dev_from_project = "http://localhost:9090http://localhost:9090/api/users/%s/projects/%s/developers" % (id_user, id_project)
	payload = {"role": role}
	headers = {"content-type": "application/json"}
	return session.post(uri_add_dev_from_project, data=json.dumps(payload), headers=headers)

def delete_dev_from_project(session, id_user, id_project, id_developer):
	uri_delete_dev_from_project = "http://localhost:9090http://localhost:9090/api/users/%s/projects/%s/developers/%s" % (id_user, id_project, id_developer)
	headers = {"content-type": "application/json"}
	return session.delete(uri_add_dev_from_project, headers=headers)

# RANKING

def get_ranking(session, id_user, id_project):
	uri_get_ranking = "http://localhost:9090http://localhost:9090/api/users/%s/projects/%s/developers/ranking" % (id_user, id_project)
	headers = {"content-type": "application/json"}
	return session.get(uri_add_dev_from_project, headers=headers)

# SPRINTS

def add_sprint(session, id_user, id_project, duration):
	uri_add_sprint = "http://localhost:9090/api/users/%s/projects/%s/sprints" % (id_user, id_project)
	payload = {"duration": duration}
	headers = {"content-type": "application/json"}
	return session.post(uri_add_sprint, data=json.dumps(payload), headers=headers)

def get_sprints(session, id_user, id_project):
	uri_get_sprints = "http://localhost:9090/api/users/%s/projects/%s/sprints" % (id_user, id_project)
	headers = {"content-type": "application/json"}
	return session.get(uri_get_sprints, headers=headers)

def get_sprint(session, id_user, id_project, id_sprint):
	uri_add_sprint = "http://localhost:9090/api/users/%s/projects/%s/sprints/%s" % (id_user, id_project, id_sprint)
	headers = {"content-type": "application/json"}
	return session.get(uri_get_sprint, headers=headers)

def update_sprint(session, id_user, id_project, id_sprint, duration):
	uri_update_sprint = "http://localhost:9090/api/users/%s/projects/%s/sprints/%s" % (id_user, id_project, id_sprint)
	payload = {"duration": duration}
	headers = {"content-type": "application/json"}
	return session.put(uri_update_sprint, data=json.dumps(payload), headers=headers)

def delete_sprint(session, id_user, id_project, id_sprint):
	uri_delete_sprint = "http://localhost:9090/api/users/%s/projects/%s/sprints/%s" % (id_user, id_project, id_sprint)
	headers = {"content-type": "application/json"}
	return session.delete(uri_delete_sprint, headers=headers)

# TASKS

def add_task(session, id_user, id_project, id_sprint, desc, comment, duration, points, status, id_requirement, id_u):
	uri_add_task = "http://localhost:9090/api/users/%s/projects/%s/sprints/%s/tasks" % (id_user, id_project)
	payload = {"desc": desc,
				"comment": comment,
				"duration": duration,
				"points": points,
				"status": status,
				"id_requirement": id_requirement,
				"id_user": id_u}
	headers = {"content-type": "application/json"}
	return session.post(uri_add_task, data=json.dumps(payload), headers=headers)

def get_tasks(session, id_user, id_project):
	uri_add_task = "http://localhost:9090/api/users/%s/projects/%s/sprints/%s/tasks" % (id_user, id_project)
	headers = {"content-type": "application/json"}
	return session.get(uri_get_task, headers=headers)

def get_task(session, id_user, id_project, id_task):
	uri_get_task = "http://localhost:9090/api/users/%s/projects/%s/sprints/%s/tasks/%s" % (id_user, id_project, id_task)
	headers = {"content-type": "application/json"}
	return session.get(uri_get_task, headers=headers)

def update_task(session, id_user, id_project, id_sprint, id_task, desc, comment, duration, points, status, id_u):
	uri_add_task = "http://localhost:9090/api/users/%s/projects/%s/sprints/%s/tasks/%s" % (id_user, id_project, id_task)
	payload = {"desc": desc,
				"comment": comment,
				"duration": duration,
				"points": points,
				"status": status,
				"id_user": id_u}
	headers = {"content-type": "application/json"}
	return session.put(uri_add_task, data=json.dumps(payload), headers=headers)

def delete_task(session, id_user, id_project, id_sprint, id_task):
	uri_add_task = "http://localhost:9090/api/users/%s/projects/%s/sprints/%s/tasks/%s" % (id_user, id_project, id_task)
	headers = {"content-type": "application/json"}
	return session.delete(uri_add_task, headers=headers)


# REQUIREMENTS

def add_requirement(session, id_user, id_project, estimation, desc):
	uri_add_requirement = "http://localhost:9090/api/users/%s/projects/%s/requirements" % (id_user, id_project)
	payload = {"estimation": estimation, "desc": desc}
	headers = {"content-type": "application/json"}
	return session.post(uri_add_requirement, data=json.dumps(payload), headers=headers)

def get_requirements(session, id_user, id_project):
	uri_get_requirements = "http://localhost:9090/api/users/%s/projects/%s/requirements" % (id_user, id_project)
	headers = {"content-type": "application/json"}
	return session.get(uri_get_requirements, headers=headers)

def get_requirement(session, id_user, id_project, id_requirement):
	uri_get_requirement = "http://localhost:9090/api/users/%s/projects/%s/requirements/%s" % (id_user, id_project, id_requirement)
	headers = {"content-type": "application/json"}
	return session.get(uri_get_requirement, headers=headers)

def update_requirement(session, id_user, id_project, id_requirement, estimation, desc, id_proj):
	uri_update_requirement = "http://localhost:9090/api/users/%s/projects/%s/requirements/%s" % (id_user, id_project, id_requirement)
	payload = {"estimation": estimation, "desc": desc, "id_project": id_proj}
	headers = {"content-type": "application/json"}
	return session.put(uri_update_requirement, data=json.dumps(payload), headers=headers)

def delete_requirement(session, id_user, id_project, id_requirement):
	uri_delete_requirement = "http://localhost:9090/api/users/%s/projects/%s/requirements/%s" % (id_user, id_project, id_requirement)
	headers = {"content-type": "application/json"}
	return session.delete(uri_delete_requirement, headers=headers)