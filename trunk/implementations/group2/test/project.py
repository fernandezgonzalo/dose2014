'''
Created on 03.12.2014

@author: Sven
'''
import json
import requests

class Project:
    
    def __init__(self, cookie, user_id, sprint_id):
        self.cookie=cookie
        self.user_id = user_id
        self.project_name = "my project"
        self.project_description = "a good project"
        self.project_id = "1"
        self.sprint_id = sprint_id
    
    def get_id(self):
        return self.project_id
        
    def create_project(self):
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
            
    def update_project(self):
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
            
    def delete_project(self):
        url = 'http://localhost:9090/coffee/projects/%s' % self.project_id
        req = requests.delete(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.project_id:
            print "test_delete_project: OK"
        else:
            print "test_delete_project: " + j_response["Message"]
    
    def get_all_projects_for_user(self):
        url = 'http://localhost:9090/coffee/users/%s/projects' % self.user_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response) == 2:
            print "test_get_all_projects: OK"
        else:
            print "test_get_all_projects: " + j_response["Message"]
            
    def get_project(self):
        url = 'http://localhost:9090/coffee/projects/%s' % self.user_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.project_id:
            print "test_get_projects: OK"
        else:
            print "test_get_projects: " + j_response["Message"]    
            
            
    def add_dev_to_projects(self,user_id):
        url = 'http://localhost:9090/coffee/users/%s/projects/%s' % (user_id, self.project_id)
        req = requests.post(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["project_id"] == self.project_id:
            print "test_add_dev_projects: OK"
        else:
            print "test_add_dev_projects: " + j_response["Message"]
            
    def remove_dev_to_projects(self):
        url = 'http://localhost:9090/coffee/users/2/projects/%s' % self.project_id
        req = requests.delete(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == "2":
            print "test_remove_dev_projects: OK"
        else:
            print "test_remove_dev_projects: " + j_response["Message"]
            
            
    def get_current_sprint(self):
        url = 'http://localhost:9090/coffee/projects/%s/current_sprint' % self.project_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.sprint_id:
            print "test_get_current_sprint: OK"
        else:
            print "test_get_current_sprint: " + j_response["Message"]    
            
    def get_users_per_project(self):
        url = 'http://localhost:9090/coffee/projects/%s/users' % self.project_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response) == 2:
            print "test_get_users_per_project: OK"
        else:
            print "test_get_users_per_project: " + j_response["Message"]   
            
    def get_users_ranking(self):
        url = 'http://localhost:9090/coffee/projects/%s/users/ranking' % self.project_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response) == 2:
            print "test_get_ranking: OK"
        else:
            print "test_get_ranking: " + j_response["Message"]   
            
    def get_backlog(self):
        url = 'http://localhost:9090/coffee/projects/%s/tasks_backlog' % self.project_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response) == 1:
            print "test_get_backlog: OK"
        else:
            print "test_get_backlog: " + j_response["Message"]   
            
    def get_progress(self):
        url = 'http://localhost:9090/coffee/projects/%s/progress' % self.project_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["progress_percentage"]:
            print "test_get_progress: OK"
        else:
            print "test_get_progress: " + j_response["Message"]   