'''
Created on 03.12.2014

@author: Sven
'''

import json
import requests

class Sprint:
    
    def __init__(self, cookie, project_id):
        self.cookie=cookie
        self.project_id = project_id
        self.sprint_id = "1"

    def add_sprint(self):
        url = 'http://localhost:9090/coffee/projects/%s/sprints' % self.project_id
        raw_data = {}
        raw_data["number"] = "1"
        raw_data["start_date"] = "12/01/2014"
        raw_data["end_date"] = "12/15/2014"
        data = json.dumps(raw_data)
        req = requests.post(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["number"] == "1":
            print "test_add_sprint: OK"
        else:
            print "test_add_sprint: " + j_response["Message"]   
            
    def update_sprint(self):
        url = 'http://localhost:9090/coffee/sprints/%s' % (self.sprint_id)
        raw_data = {}
        raw_data["number"] = "2"
        raw_data["start_date"] = "12/01/2014"
        raw_data["end_date"] = "12/15/2014"
        data = json.dumps(raw_data)
        req = requests.put(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.sprint_id:
            print "test_update_sprint: OK"
        else:
            print "test_update_sprint: " + j_response["Message"] 
            
    def delete_sprint(self):
        url = 'http://localhost:9090/coffee/sprints/%s' % self.sprint_id
        req = requests.delete(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.sprint_id:
            print "test_delete_sprint: OK"
        else:
            print "test_delete_sprint: " + j_response["Message"]           
            
    def get_all_sprint(self):
        url = 'http://localhost:9090/coffee/projects/%s/sprints' % self.project_id
        req = requests.get(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response) == 1:
            print "test_get_all_sprint: OK"
        else:
            print "test_get_all_sprint: " + j_response["Message"]   
            
                
    def get_sprint(self):
        url = 'http://localhost:9090/coffee/sprints/%s' % self.sprint_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.sprint_id:
            print "test_get_sprint: OK"
        else:
            print "test_get_sprint: " + j_response["Message"] 
            
    def get_tasks_of_sprint(self):
        url = 'http://localhost:9090/coffee/sprints/%s/tasks' % self.sprint_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response) == 0:
            print "test_get_tasks_of_sprint: OK"
        else:
            print "test_get_tasks_of_sprint: " + j_response["Message"] 