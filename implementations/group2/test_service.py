
import requests
import json

class test_service():
    
    def __init__(self):
        self.cookie=None
        self.email = "john@doe.com"
        self.password ="123"
        self.first_name = "John"
        self.last_name = "Doe"
        self.user_id = ""
        self.project_name = "my project"
        self.project_description = "a good project"
        self.project_id = "1"
        self.req_title = "my req"
        self.req_desc = "good req"
        self.req_priority = "1"
        self.req_risk = "12"
        self.req_completed = "false"

    def test_add_user(self):
        url = 'http://localhost:9090/coffee/users'
        raw_data = {}
        raw_data["email"] = self.email
        raw_data["password"] = self.password
        raw_data["first_name"] = self.first_name
        raw_data["last_name"] = self.last_name
        data = json.dumps(raw_data)
        req = requests.post(url, data=data, headers={'Content-Type': 'application/json'})
        response = req.text
        j_response = json.loads(response)
        if j_response["Message"] == "OK" and j_response["user"]:
            print "test_add_user: OK"
        else:
            print "test_add_user: " + j_response["Message"]
            
    def test_get_user(self):
        url = 'http://localhost:9090/coffee/users/%s' % self.user_id
        req = requests.get(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["Message"] == "OK" and j_response["email"] == self.email:
            print "test_get_user: OK"
        else:
            print "test_get_user: " + j_response["Message"]
            
    def test_update_user(self):
        url = 'http://localhost:9090/coffee/users/%s' % self.user_id
        raw_data = {}
        raw_data["email"] = self.email
        raw_data["password"] = self.password
        raw_data["first_name"] = self.first_name
        raw_data["last_name"] = "Brunner"
        data = json.dumps(raw_data)
        req = requests.put(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["Message"] == "OK":
            print "test_update_user: OK"
        else:
            print "test_update_user: " + j_response["Message"]
    
    def login(self):
        url = "http://localhost:9090/coffee/sessions"
        raw_data = {}
        raw_data["email"] = self.email
        raw_data["password"] = self.password
        data = json.dumps(raw_data)
        req = requests.post(url, data=data, headers={'Content-Type': 'application/json'})
        response = req.text
        j_response = json.loads(response)
        if j_response["Message"] == "OK":
            print "Login: OK"
            self.user_id = j_response["id"]
            self.cookie = {"_coffee_session_": req.cookies["_coffee_session_"]}
        else:
            print "Login: " + j_response["Message"]
            return None
    
    def test_delete_user(self):
        url = 'http://localhost:9090/coffee/users'
        raw_data = {}
        raw_data["id"] = self.user_id
        #raw_data["email"] = self.email
        data = json.dumps(raw_data)
        req = requests.delete(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["Message"] == "OK":
            print "test_delete_user: OK"
        else:
            print "test_delete_user: " + j_response["Message"]
            
    def test_create_project(self):
        url = 'http://localhost:9090/coffee/projects'
        raw_data = {}
        raw_data["name"] = self.project_name
        raw_data["description"] = self.project_description
        data = json.dumps(raw_data)
        req = requests.post(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["Message"] == "OK" and j_response["project"]:
            print "test_create_project: OK"
        else:
            print "test_create_project: " + j_response["Message"]
            
    def test_update_project(self):
        url = 'http://localhost:9090/coffee/projects/%s' % self.project_id
        raw_data = {}
        raw_data["name"] = self.project_name
        raw_data["description"] = "a very good project"
        data = json.dumps(raw_data)
        req = requests.put(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["Message"] == "OK":
            print "test_update_project: OK"
        else:
            print "test_update_project: " + j_response["Message"]
            
    def test_delete_project(self):
        url = 'http://localhost:9090/coffee/projects/%s' % self.project_id
        req = requests.delete(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["Message"] == "OK":
            print "test_delete_project: OK"
        else:
            print "test_delete_project: " + j_response["Message"]
    
    def test_get_all_projects_for_user(self):
        url = 'http://localhost:9090/coffee/projects/%s' % self.user_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        print(j_response)
        if j_response["Message"] == "OK":
            print "test_get_all_projects: OK"
        else:
            print "test_get_all_projects: " + j_response["Message"]
            
    def test_get_all_users(self):
        url = 'http://localhost:9090/coffee/users'
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        print(j_response)
        if j_response["Message"] == "OK":
            print "test_get_all_projects: OK"
        else:
            print "test_get_all_projects: " + j_response["Message"]
            
    def test_add_dev_to_projects(self):
        url = 'http://localhost:9090/coffee/projects/user/2'
        raw_data = {}
        raw_data["project_id"] = self.project_id
        data = json.dumps(raw_data)
        req = requests.post(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        print(j_response)
        if j_response["Message"] == "OK":
            print "test_add_dev_projects: OK"
        else:
            print "test_add_dev_projects: " + j_response["Message"]
            
    def test_remove_dev_to_projects(self):
        url = 'http://localhost:9090/coffee/projects/user/2'
        raw_data = {}
        raw_data["project_id"] = self.project_id
        data = json.dumps(raw_data)
        req = requests.delete(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        print(j_response)
        if j_response["Message"] == "OK":
            print "test_remove_dev_projects: OK"
        else:
            print "test_remove_dev_projects: " + j_response["Message"]
            
    def test_add_req(self):
        url = 'http://localhost:9090/coffee/reqs/%s' % self.project_id
        raw_data = {}
        raw_data["project_id"] = self.project_id
        raw_data["title"] = self.req_title
        raw_data["description"] = self.req_desc
        raw_data["priority"] = self.req_priority
        raw_data["risk"] = self.req_risk
        raw_data["completed"] = self.req_completed
        data = json.dumps(raw_data)
        req = requests.post(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        print(j_response)
        if j_response["Message"] == "OK" and j_response["requirement"]:
            print "test_add_req: OK"
        else:
            print "test_add_req: " + j_response["Message"]

if __name__ == "__main__":
    #delete_db.delete_data_in_db()
    service = test_service()
    service.test_add_user()
    service.test_add_user()
    service.login()
    if service.cookie:
        service.test_get_user()
        service.test_update_user()
        service.test_create_project()
        service.test_update_project()
        service.test_add_dev_to_projects()
        service.test_get_all_projects_for_user()
        service.test_remove_dev_to_projects()
        service.test_add_req()
        service.test_delete_project()
        service.test_delete_user()
        service.test_get_all_users()
        