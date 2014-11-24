from database_item import DatabaseItem, get_random_id_list
import random
import bcrypt
import json
import hashlib


def get_hashed_password(password, id_):
    if len(password) != 64:
        m = hashlib.sha256()
        m.update(password + str(id_))
        return m.hexdigest().upper()
    else:
        return password


def get_random_user(id_=None):
    firstname = get_random_firstname()
    lastname = get_random_lastname()
    email = get_mail_address(firstname, lastname)
    password = HASHED_EXAMPLE_PASSWORD
    return User(email, password, firstname, lastname, [], [], id_)


def get_user_from_json(json_str):
    json_dict = json.loads(json_str)
    return User(
        email=json_dict['email'],
        password=json_dict['password'],
        firstname=json_dict['firstname'],
        lastname=json_dict['lastname'],
        projects=json_dict['projects'],
        assigned_tasks=json_dict['assigned_tasks'],
        id_=json_dict['id']
        )


def get_random_firstname():
    firstnames = ['Aaron', 'Abbey', 'Abbie', 'Abby', 'Abdul', 'Abe', 'Abel', 'Abigail', 'Abraham', 'Abram', 'Ada', 'Adah', 'Adalberto', 'Adaline', 'Adam', 'Adan', 'Addie', 'Adela', 'Adelaida', 'Adelaide', 'Adele', 'Adelia', 'Adelina', 'Adeline', 'Adell', 'Adella', 'Adelle', 'Adena', 'Adina', 'Adolfo', 'Adolph', 'Adria']
    return random.choice(firstnames)


def get_random_lastname():
    lastnames = ['Beirne', 'Beisch', 'Beisel', 'Beiser', 'Beish', 'Beisner', 'Beissel', 'Beisser', 'Beiswanger', 'Beiswenger', 'Beitel', 'Beiter', 'Beith', 'Beitler', 'Beitz', 'Beitzel', 'Beja', 'Bejar', 'Bejaran', 'Bejarano', 'Bejcek', 'Bejerano', 'Bejger', 'Bejil']
    return random.choice(lastnames)


def get_mail_address(firstname, lastname):
    return str.lower("%s.%s@gmail.com" % (firstname, lastname))


HASHED_EXAMPLE_PASSWORD = get_hashed_password('asdf', 1)


class User(DatabaseItem):

    def __init__(self, email, password, firstname, lastname, projects, assigned_tasks, id_=None):
        super(User, self).__init__()
        self.email = email
        self.password = password
        self.firstname = firstname
        self.lastname = lastname
        self.id = id_
        self.projects = projects
        self.assigned_tasks = assigned_tasks
        self.database_fields = ['email', 'password', 'firstname', 'lastname']
        self.non_database_fields = ['projects', 'assigned_tasks']
        self.table_name = 'users'

    def __eq__(self, other):
        hashed_password = get_hashed_password(self.password, self.id)
        other_hashed_password = get_hashed_password(other.password, other.id)

        return isinstance(other, self.__class__) and \
            self.email == other.email and \
            hashed_password == other_hashed_password and \
            self.firstname == other.firstname and \
            self.lastname == other.lastname and \
            self.id == other.id and \
            self.projects == other.projects and \
            self.assigned_tasks == other.assigned_tasks


if __name__ == '__main__':
    u = get_random_user()
    u.print_test_json()
    print u.get_insert_database_statement()

    json_str = '{"id":38,"email":"bertrand.meier@gmail.com","password":"asdf","firstname":"Bertrand","lastname":"Meier","assigned_tasks":[],"projects":[]}'
    u1 = get_user_from_json(json_str)
    u2 = get_user_from_json(json_str)
    print
    print u1 == u2
    print get_hashed_password(u1.password, u1.id)