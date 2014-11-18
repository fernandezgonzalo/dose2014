from database_item import DatabaseItem, get_random_id_list, get_random_string, get_random_date_in_year
import random
import json


STATI = xrange(3)


def get_random_task(story_id, owner, id_=None):
    nr = random.randint(1, 20)
    description = get_random_string(20)
    return Task(nr, description, owner, story_id, id_)


def get_task_from_json(json_str):
    json_dict = json.loads(json_str)
    return Task(
        nr=json_dict['nr'],
        description=json_dict['description'],
        owner=json_dict['owner'],
        story_id=json_dict['story_id'],
        assigned_devs=json_dict['assigned_devs'],
        id_=json_dict['id']
        )


class Task(DatabaseItem):

    def __init__(self, nr, description, owner, story_id, id_=None):
        super(Task, self).__init__()
        self.nr = nr
        self.description = description
        self.owner = owner
        self.story_id = story_id
        self.id = id_
        self.database_fields = ['nr', 'description', 'owner', 'story_id']
        self.table_name = 'tasks'


if __name__ == '__main__':
    p = get_random_task(1, 2)
    p.print_test_json()
    print p.get_insert_database_statement()