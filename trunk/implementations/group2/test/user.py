'''
Created on 03.12.2014

@author: Sven
'''
import requests
import json

class User:
    
    def __init__(self):
        self.cookie=None
        self.email = "john@doe.com"
        self.password ="123"
        self.first_name = "John"
        self.last_name = "Doe"
        self.user_id = ""
        
    def get_user_id(self):
        return self.user_id
    
    def get_cookie(self):
        return self.cookie
    
    def add_user(self):
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
            
    def get_user(self):
        url = 'http://localhost:9090/coffee/users/%s' % self.user_id
        req = requests.get(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["email"] == self.email:
            print "test_get_user: OK"
        else:
            print "test_get_user: " + j_response["Message"]
    
                
    def get_all_users(self):
        url = 'http://localhost:9090/coffee/users'
        req = requests.get(url,headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if len(j_response)==2:
            print "test_get_all_users: OK"
        else:
            print "test_get_all_users: " + j_response["Message"]
            
    def update_user(self):
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
    
    def delete_user(self):
        url = 'http://localhost:9090/coffee/users/%s' % self.user_id
        req = requests.delete(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["id"] == self.user_id:
            print "test_delete_user: OK"
        else:
            print "test_delete_user: " + j_response["Message"]
            
        
    def is_logged_in(self):
        url = "http://localhost:9090/coffee/sessions"
        req = requests.get(url, headers={'Content-Type': 'application/json'}, cookies = self.cookie)
        response = req.text
        j_response = json.loads(response)
        if j_response["first_name"] == self.first_name:
            print "Is Logged in: OK"
        else:
            print "Is Logged in: " + j_response["Message"]