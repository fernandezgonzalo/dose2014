
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
        self.req_id = "1"
        self.task_title = "my task"
        self.task_desc = "a good task"
        self.task_points = "12"
        self.task_estimate = "8"
        self.task_spent = "0"
        self.task_progress = "New"
        self.task_last_modified = "2014-12-01 15:00:00"
        self.sprint_id = "1"
        self.task_id = "1"

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
        if j_response["first_name"]:
            print "test_add_user: OK"
        else:
            print "test_add_user: " + j_response["Message"]
            
    def test_get_user(self):
        url = 'http://localhost:9090/coffee/users/%s' % self.user_id
        req = requests.get(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["email"] == self.email:
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
        print(j_response)
        if j_response["id"] == self.user_id:
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
        if j_response["id"] == self.user_id:
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
        if j_response["name"]==self.project_name:
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
        if j_response["id"] == self.project_id:
            print "test_update_project: OK"
        else:
            print "test_update_project: " + j_response["Message"]
            
    def test_delete_project(self):
        url = 'http://localhost:9090/coffee/projects/%s' % self.project_id
        req = requests.delete(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.project_id:
            print "test_delete_project: OK"
        else:
            print "test_delete_project: " + j_response["Message"]
    
    def test_get_all_projects_for_user(self):
        url = 'http://localhost:9090/coffee/users/%s/projects' % self.user_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response) == 2:
            print "test_get_all_projects: OK"
        else:
            print "test_get_all_projects: " + j_response["Message"]
            
    def test_get_project(self):
        url = 'http://localhost:9090/coffee/projects/%s' % self.user_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.project_id:
            print "test_get_projects: OK"
        else:
            print "test_get_projects: " + j_response["Message"]    
            
    def test_get_all_users(self):
        url = 'http://localhost:9090/coffee/users'
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response)==2:
            print "test_get_all_users: OK"
        else:
            print "test_get_all_users: " + j_response["Message"]
            
    def test_add_dev_to_projects(self):
        url = 'http://localhost:9090/coffee/users/2/projects'
        raw_data = {}
        raw_data["project_id"] = self.project_id
        data = json.dumps(raw_data)
        req = requests.post(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["project_id"] == self.project_id:
            print "test_add_dev_projects: OK"
        else:
            print "test_add_dev_projects: " + j_response["Message"]
            
    def test_remove_dev_to_projects(self):
        url = 'http://localhost:9090/coffee/users/2/projects'
        raw_data = {}
        raw_data["project_id"] = self.project_id
        data = json.dumps(raw_data)
        req = requests.delete(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == "2":
            print "test_remove_dev_projects: OK"
        else:
            print "test_remove_dev_projects: " + j_response["Message"]
            
    def test_add_req(self, project_id):
        url = 'http://localhost:9090/coffee/projects/%s/reqs' % project_id
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
        if j_response["title"] == self.req_title:
            print "test_add_req: OK"
        else:
            print "test_add_req: " + j_response["Message"]
            
    def test_update_req(self):
        url = 'http://localhost:9090/coffee/projects/%s/reqs' % self.project_id
        raw_data = {}
        raw_data["project_id"] = self.project_id
        raw_data["id"] = self.req_id
        raw_data["title"] = self.req_title
        raw_data["description"] = self.req_desc
        raw_data["priority"] = self.req_priority
        raw_data["risk"] = "10"
        raw_data["completed"] = self.req_completed
        data = json.dumps(raw_data)
        req = requests.put(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.req_id:
            print "test_update_req: OK"
        else:
            print "test_update_req: " + j_response["Message"]
            
    def test_delete_req(self):
        url = 'http://localhost:9090/coffee/projects/%s/reqs' % self.project_id
        raw_data = {}
        raw_data["id"] = self.req_id
        data = json.dumps(raw_data)
        req = requests.delete(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.req_id:
            print "test_delete_req: OK"
        else:
            print "test_delete_req: " + j_response["Message"]
            
    def test_get_all_req(self):
        url = 'http://localhost:9090/coffee/projects/%s/reqs' % self.project_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response) == 1:
            print "test_get_all_req: OK"
        else:
            print "test_get_all_req: " + j_response["Message"]
    
    def test_is_logged_in(self):
        url = "http://localhost:9090/coffee/sessions"
        req = requests.get(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["first_name"] == self.first_name:
            print "Is Logged in: OK"
        else:
            print "Is Logged in: " + j_response["Message"]
            
    def test_add_task(self):
        url = 'http://localhost:9090/coffee/reqs/%s/tasks' % self.req_id
        raw_data = {}
        raw_data["title"] = self.task_title
        raw_data["points"] = self.task_points
        raw_data["description"] = self.task_desc
        raw_data["hours_estimated"] = self.task_estimate
        raw_data["hours_spent"] = self.task_spent
        raw_data["progress"] = self.task_progress
        raw_data["last_modified"] = self.task_last_modified
        raw_data["sprint_id"] = self.sprint_id
        data = json.dumps(raw_data)
        req = requests.post(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        print(j_response)
        if j_response["title"] == self.task_title:
            print "test_add_task: OK"
        else:
            print "test_add_task: " + j_response["Message"]
            
    def test_update_task(self):
        url = 'http://localhost:9090/coffee/reqs/%s/tasks' % self.req_id
        raw_data = {}
        raw_data["id"] = self.task_id
        raw_data["title"] = self.task_title
        raw_data["points"] = self.task_points
        raw_data["description"] = self.task_desc
        raw_data["hours_estimated"] = self.task_estimate
        raw_data["hours_spent"] = "2"
        raw_data["progress"] = self.task_progress
        raw_data["last_modified"] = self.task_last_modified
        raw_data["sprint_id"] = self.sprint_id
        data = json.dumps(raw_data)
        req = requests.put(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.task_id:
            print "test_update_task: OK"
        else:
            print "test_update_task: " + j_response["Message"]
            
    def test_delete_task(self):
        url = 'http://localhost:9090/coffee/reqs/%s/tasks' % self.req_id
        raw_data = {}
        raw_data["id"] = self.task_id
        data = json.dumps(raw_data)
        req = requests.delete(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.task_id:
            print "test_delete_task: OK"
        else:
            print "test_delete_task: " + j_response["Message"]  
            
    def test_get_all_task(self):
        url = 'http://localhost:9090/coffee/reqs/%s/tasks' % self.req_id
        req = requests.get(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response) == 1:
            print "test_get_all_task: OK"
        else:
            print "test_get_all_task: " + j_response["Message"]    
      
    def test_add_sprint(self):
        url = 'http://localhost:9090/coffee/projects/%s/sprints' % self.project_id
        raw_data = {}
        raw_data["number"] = "1"
        raw_data["start_date"] = "2014-12-01"
        raw_data["end_date"] = "2014-12-15"
        data = json.dumps(raw_data)
        req = requests.post(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["number"] == "1":
            print "test_add_sprint: OK"
        else:
            print "test_add_sprint: " + j_response["Message"]   
            
    def test_update_sprint(self):
        url = 'http://localhost:9090/coffee/projects/%s/sprints' % self.project_id
        raw_data = {}
        raw_data["id"] = "1"
        raw_data["number"] = "2"
        raw_data["start_date"] = "01.12.2014"
        raw_data["end_date"] = "15.12.2014"
        data = json.dumps(raw_data)
        req = requests.put(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.sprint_id:
            print "test_update_sprint: OK"
        else:
            print "test_update_sprint: " + j_response["Message"] 
            
    def test_delete_sprint(self):
        url = 'http://localhost:9090/coffee/projects/%s/sprints' % self.project_id
        raw_data = {}
        raw_data["id"] = "1"
        data = json.dumps(raw_data)
        req = requests.delete(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.sprint_id:
            print "test_delete_sprint: OK"
        else:
            print "test_delete_sprint: " + j_response["Message"]           
            
    def test_get_all_sprint(self):
        url = 'http://localhost:9090/coffee/projects/%s/sprints' % self.project_id
        req = requests.get(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response) == 1:
            print "test_get_all_sprint: OK"
        else:
            print "test_get_all_sprint: " + j_response["Message"]   
    

if __name__ == "__main__":
    service = test_service()
    service.test_add_user()
    service.test_add_user()
    service.login()
    if service.cookie:
        service.test_is_logged_in()
        service.test_get_user()
        service.test_update_user()
        service.test_create_project()
        service.test_create_project()
        service.test_update_project()
        service.test_get_project()
        service.test_add_dev_to_projects()
        service.test_get_all_projects_for_user()
        service.test_remove_dev_to_projects()
        service.test_add_req("1")
        service.test_add_req("2")
        service.test_update_req()
        service.test_get_all_req()
        service.test_add_sprint()
        service.test_update_sprint()
        service.test_get_all_sprint()
        service.test_add_task()
        service.test_update_task()
        service.test_get_all_task()
        service.test_delete_task()
        service.test_delete_sprint()
        service.test_delete_req()
        service.test_delete_project()
        service.test_get_all_users()
        service.test_delete_user()
        