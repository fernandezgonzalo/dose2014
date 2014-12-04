'''
Created on 03.12.2014

@author: Sven
'''
import json
import requests

class Requirement:
    
    def __init__(self, cookie, project_id):
        self.cookie=cookie
        self.project_id = project_id
        self.req_title = "my req"
        self.req_desc = "good req"
        self.req_priority = "1"
        self.req_risk = "12"
        self.req_completed = "false"
        self.req_id = "1"
        
    def get_id(self):
        return self.req_id    

    def add_req(self, project_id):
        url = 'http://localhost:9090/coffee/projects/%s/reqs' % project_id
        raw_data = {}
        raw_data["project_id"] = project_id
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
            
    def update_req(self):
        url = 'http://localhost:9090/coffee/projects/%s/reqs/%s' % (self.project_id, self.req_id)
        raw_data = {}
        raw_data["project_id"] = self.project_id
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
            
    def delete_req(self):
        url = 'http://localhost:9090/coffee/reqs/%s' % self.req_id
        req = requests.delete(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.req_id:
            print "test_delete_req: OK"
        else:
            print "test_delete_req: " + j_response["Message"]
            
    def get_all_req(self):
        url = 'http://localhost:9090/coffee/projects/%s/reqs' % self.project_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response) == 1:
            print "test_get_all_req: OK"
        else:
            print "test_get_all_req: " + j_response["Message"]
            
            
    def get_req(self):
        url = 'http://localhost:9090/coffee/reqs/%s' % self.req_id
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.req_id:
            print "test_get_req: OK"
        else:
            print "test_get_req: " + j_response["Message"] 