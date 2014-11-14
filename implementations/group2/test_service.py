
import urllib2
import json


def test_add_user(email, password, first_name, last_name):
    url = 'http://localhost:9090/coffee/users'
    raw_data = {}
    raw_data["email"] = email
    raw_data["password"] = password
    raw_data["first_name"] = first_name
    raw_data["last_name"] = last_name
    data = json.dumps(raw_data)
    req = urllib2.Request(url, data, {'Content-Type': 'application/json'})
    response = urllib2.urlopen(req).read()
    j_response = json.loads(response)
    if j_response["Message"] == "OK":
        print "test_add_user: OK"
    else:
        print "test_add_user: " + response["Message"]

def test_delete_user(email):
    url = 'http://localhost:9090/coffee/users'
    raw_data = {}
    raw_data["email"] = email
    data = json.dumps(raw_data)
    req = urllib2.Request(url, data, {'Content-Type': 'application/json'})
    req.get_method = lambda: 'DELETE'
    response = urllib2.urlopen(req).read()
    j_response = json.loads(response)
    if j_response["Message"] == "OK":
        print "test_delete_user: OK"
    else:
        print "test_delete_user: " + response["Message"]



if __name__ == "__main__":
    test_add_user("john@doe.com", "123", "John", "Doe")
    test_delete_user("john@doe.com")