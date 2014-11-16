
import requests
import json


def test_add_user(email, password, first_name, last_name):
    url = 'http://localhost:9090/coffee/users'
    raw_data = {}
    raw_data["email"] = email
    raw_data["password"] = password
    raw_data["first_name"] = first_name
    raw_data["last_name"] = last_name
    data = json.dumps(raw_data)
    req = requests.post(url, data=data, headers={'Content-Type': 'application/json'})
    response = req.text
    j_response = json.loads(response)
    if j_response["Message"] == "OK":
        print "test_add_user: OK"
    else:
        print "test_add_user: " + j_response["Message"]
        
def test_update_user(user_id, email, password, first_name, last_name, cookie):
    url = 'http://localhost:9090/coffee/users/%s/edit' % str(user_id)
    raw_data = {}
    raw_data["email"] = email
    raw_data["password"] = password
    raw_data["first_name"] = first_name
    raw_data["last_name"] = last_name
    data = json.dumps(raw_data)
    req = requests.post(url, data=data, headers={'Content-Type': 'application/json'}, cookies = cookie)
    response = req.text
    j_response = json.loads(response)
    if j_response["Message"] == "OK":
        print "test_update_user: OK"
    else:
        print "test_update_user: " + j_response["Message"]

def login(email, password):
    url = "http://localhost:9090/coffee/sessions"
    raw_data = {}
    raw_data["email"] = email
    raw_data["password"] = password
    data = json.dumps(raw_data)
    req = requests.post(url, data=data, headers={'Content-Type': 'application/json'})
    response = req.text
    j_response = json.loads(response)
    if j_response["Message"] == "OK":
        print "Login: OK"
        user_id = int(j_response["id"])
        return req.cookies["_coffee_session_"], user_id
    else:
        print "Login: " + j_response["Message"]
        return None

def test_delete_user(user_id, email, cookie):
    url = 'http://localhost:9090/coffee/users'
    raw_data = {}
    raw_data["email"] = email
    raw_data["id"] = str(user_id)
    data = json.dumps(raw_data)
    req = requests.delete(url, data=data, headers={'Content-Type': 'application/json'}, cookies = cookie)
    response = req.text
    j_response = json.loads(response)
    if j_response["Message"] == "OK":
        print "test_delete_user: OK"
    else:
        print "test_delete_user: " + j_response["Message"]


if __name__ == "__main__":
    email = "john@doe.com"
    pw ="123"
    first_name = "John"
    last_name = "Doe"
    test_add_user(email, pw, first_name, last_name)
    cookie, user_id = login(email, pw)
    cookies = {"_coffee_session_" : cookie}
    if cookies:
        test_update_user(user_id, email, pw, first_name, "Brunner", cookies)
        test_delete_user(user_id, email, cookies)
        