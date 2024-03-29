from database_item import DatabaseItem, get_random_id_list, get_random_string, get_random_date_in_year
import random
import datetime
import json


STATI = xrange(3)


def get_random_task(story_id, owner, id_=None):
    nr = random.randint(1, 20)
    description = get_random_string(20)
    comment = get_random_string(20)
    status = random.choice([0, 1, 2, 3])
    progress = random.randint(0, 100) if status == 1 else 0
    completion_date = get_random_date_in_year(2014) if status == 2 else None
    return Task(nr, description, comment, status, progress, completion_date, owner, story_id, [], id_)


def get_task_from_json(json_str):
    json_dict = json.loads(json_str)
    return Task(
        nr=json_dict['nr'],
        description=json_dict['description'],
        comment=json_dict['comment'],
        status=json_dict['status'],
        progress=json_dict['progress'],
        completion_date=datetime.datetime.strptime(json_dict['completion_date'], "%Y-%m-%d").date() if json_dict['completion_date'] else None,
        owner=json_dict['owner'],
        story_id=json_dict['story_id'],
        assigned_devs=json_dict['assigned_devs'],
        id_=json_dict['id']
        )


class Task(DatabaseItem):

    def __init__(self, nr, description, comment, status, progress, completion_date, owner, story_id, assigned_devs, id_=None):
        super(Task, self).__init__()
        self.nr = nr
        self.description = description
        self.comment = comment
        self.status = status
        self.progress = progress
        self.completion_date = completion_date
        self.owner = owner
        self.story_id = story_id
        self.assigned_devs = assigned_devs
        self.id = id_
        self.database_fields = ['nr', 'description', 'comment', 'status', 'owner', 'story_id']
        self.non_database_fields = ['assigned_devs']
        self.non_server_fields = ['completion_date']
        self.parent_id_name = 'story_id'
        self.table_name = 'tasks'


if __name__ == '__main__':
    p = get_random_task(1, 2)
    p.print_test_json()
    print p.get_insert_database_statement()