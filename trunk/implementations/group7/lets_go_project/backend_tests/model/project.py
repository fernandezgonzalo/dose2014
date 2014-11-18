from database_item import DatabaseItem, get_random_id_list, get_random_string, get_random_date_in_year
import random
import json
import datetime


STATI = xrange(3)


def get_random_project(owner, id_=None):
    name = get_random_string(10)
    description = get_random_string(20)
    start_date = get_random_date_in_year(2013)
    end_date = get_random_date_in_year(2014)
    status = random.choice(STATI)
    return Project(name, description, start_date, end_date, status, owner, [], id_)


def get_project_from_json(json_str):
    json_dict = json.loads(json_str)
    return Project(
        name=json_dict['name'],
        description=json_dict['description'],
        start_date=datetime.datetime.strptime(json_dict['start_date'], "%Y-%m-%d").date(),
        end_date=datetime.datetime.strptime(json_dict['end_date'], "%Y-%m-%d").date(),
        status=json_dict['status'],
        owner=json_dict['owner'],
        invited_devs=json_dict['invited_devs'],
        id_=json_dict['id']
        )


class Project(DatabaseItem):

    def __init__(self, name, description, start_date, end_date, status, owner, invited_devs, id_=None):
        super(Project, self).__init__()
        self.name = name
        self.description = description
        self.start_date = start_date
        self.end_date = end_date
        self.status = status
        self.owner = owner
        self.id = id_
        self.invited_devs = invited_devs
        self.sprints = []
        self.database_fields = ['name', 'description', 'start_date', 'end_date', 'status', 'owner']
        self.non_database_fields = ['invited_devs', 'sprints']
        self.table_name = 'projects'


if __name__ == '__main__':
    p = get_random_project(1)
    p.print_test_json()
    print p.get_insert_database_statement()