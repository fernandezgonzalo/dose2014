from database_item import DatabaseItem, get_random_id_list, get_random_string, get_random_date_in_year
import random

STATI = xrange(3)


def get_random_sprint(project_id, id_=None):
    name = get_random_string(10)
    start_date = get_random_date_in_year(2013)
    end_date = get_random_date_in_year(2014)
    status = random.choice(STATI)
    return Sprint(name, start_date, end_date, status, project_id, id_)


class Sprint(DatabaseItem):

    def __init__(self, name, start_date, end_date, status, project_id, id_=None):
        super(Sprint, self).__init__()
        self.name = name
        self.start_date = start_date
        self.end_date = end_date
        self.status = status
        self.project_id = project_id
        self.id = id_
        self.stories = []
        self.database_fields = ['name', 'start_date', 'end_date', 'status', 'project_id']
        self.non_database_fields = ['stories']
        self.table_name = 'sprints'


if __name__ == '__main__':
    p = get_random_sprint(1)
    p.print_test_json()
    print p.get_insert_database_statement()