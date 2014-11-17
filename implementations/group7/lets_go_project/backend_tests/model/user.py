from database_item import DatabaseItem, get_random_id_list
import random
import bcrypt


def get_random_user(id_=None):
    firstname = get_random_firstname()
    lastname = get_random_lastname()
    email = get_mail_address(firstname, lastname)
    password = bcrypt.hashpw('asdf', bcrypt.gensalt())
    return User(email, password, firstname, lastname, [], [], id_)


def get_random_firstname():
    firstnames = ['Aaron', 'Abbey', 'Abbie', 'Abby', 'Abdul', 'Abe', 'Abel', 'Abigail', 'Abraham', 'Abram', 'Ada', 'Adah', 'Adalberto', 'Adaline', 'Adam', 'Adan', 'Addie', 'Adela', 'Adelaida', 'Adelaide', 'Adele', 'Adelia', 'Adelina', 'Adeline', 'Adell', 'Adella', 'Adelle', 'Adena', 'Adina', 'Adolfo', 'Adolph', 'Adria']
    return random.choice(firstnames)


def get_random_lastname():
    lastnames = ['Beirne', 'Beisch', 'Beisel', 'Beiser', 'Beish', 'Beisner', 'Beissel', 'Beisser', 'Beiswanger', 'Beiswenger', 'Beitel', 'Beiter', 'Beith', 'Beitler', 'Beitz', 'Beitzel', 'Beja', 'Bejar', 'Bejaran', 'Bejarano', 'Bejcek', 'Bejerano', 'Bejger', 'Bejil']
    return random.choice(lastnames)


def get_mail_address(firstname, lastname):
    return str.lower("%s.%s@gmail.com" % (firstname, lastname))


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


if __name__ == '__main__':
    u = get_random_user()
    u.print_test_json()
    print u.get_insert_database_statement()