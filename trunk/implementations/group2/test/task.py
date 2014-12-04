'''
Created on 03.12.2014

@author: Sven
'''
import json
import requests

class Task:
    
    def __init__(self, cookie, req_id):
        self.cookie=cookie
        self.req_id = req_id
        self.task_title = "my task"
        self.task_desc = "a good task"
        self.task_points = "12"
        self.task_estimate = "8"
        self.task_spent = "0"
        self.task_progress = "New"
        self.task_last_modified = "2014-12-01 15:00:00"
        self.task_id = "1"
        
        
    def add_task(self):
        url = 'http://localhost:9090/coffee/reqs/%s/tasks' % self.req_id
        raw_data = {}
        raw_data["title"] = self.task_title
        raw_data["points"] = self.task_points
        raw_data["description"] = self.task_desc
        raw_data["hours_estimated"] = self.task_estimate
        raw_data["hours_spent"] = self.task_spent
        raw_data["progress"] = self.task_progress
        raw_data["last_modified"] = self.task_last_modified
        raw_data["sprint_id"] = "0"
        data = json.dumps(raw_data)
        req = requests.post(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["title"] == self.task_title:
            print "test_add_task: OK"
        else:
            print "test_add_task: " + j_response["Message"]
            
    def update_task(self):
        url = 'http://localhost:9090/coffee/reqs/%s/tasks/%s' % (self.req_id,self.task_id)
        raw_data = {}
        raw_data["title"] = self.task_title
        raw_data["points"] = self.task_points
        raw_data["description"] = self.task_desc
        raw_data["hours_estimated"] = self.task_estimate
        raw_data["hours_spent"] = "2"
        raw_data["progress"] = self.task_progress
        raw_data["last_modified"] = self.task_last_modified
        raw_data["sprint_id"] = "0"
        data = json.dumps(raw_data)
        req = requests.put(url, data=data, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.task_id:
            print "test_update_task: OK"
        else:
            print "test_update_task: " + j_response["Message"]
            
    def delete_task(self):
        url = 'http://localhost:9090/coffee/reqs/%s/tasks/%s' % (self.req_id,self.task_id)
        req = requests.delete(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.task_id:
            print "test_delete_task: OK"
        else:
            print "test_delete_task: " + j_response["Message"]  
            
    def get_all_task(self):
        url = 'http://localhost:9090/coffee/reqs/%s/tasks' % self.req_id
        req = requests.get(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response) == 1:
            print "test_get_all_task: OK"
        else:
            print "test_get_all_task: " + j_response["Message"] 
            
                
    def get_task(self):
        url = 'http://localhost:9090/coffee/tasks/%s' % self.task_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.task_id:
            print "test_get_task: OK"
        else:
            print "test_get_task: " + j_response["Message"] 