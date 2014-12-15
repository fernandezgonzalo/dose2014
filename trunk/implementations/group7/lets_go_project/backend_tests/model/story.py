from database_item import DatabaseItem, get_random_id_list, get_random_string, get_random_date_in_year
import random
import json


def get_random_story(sprint_id, id_=None):
    title = get_random_string(10)
    description = get_random_string(20)
    points = random.randint(1, 20)
    notes = get_random_string(20)
    return Story(title, description, points, notes, sprint_id, id_)


def get_story_from_json(json_str):
    json_dict = json.loads(json_str)
    return Story(
        title=json_dict['title'],
        description=json_dict['description'],
        points=json_dict['points'],
        notes=json_dict['notes'],
        sprint_id=json_dict['sprint_id'],
        id_=json_dict['id']
        )


class Story(DatabaseItem):

    def __init__(self, title, description, points, notes, sprint_id, id_=None):
        super(Story, self).__init__()
        self.title = title
        self.description = description
        self.points = points
        self.notes = notes
        self.sprint_id = sprint_id
        self.id = id_
        self.tasks = []
        self.database_fields = ['title', 'description', 'points', 'notes', 'sprint_id']
        self.non_database_fields = ['tasks']
        self.parent_id_name = 'sprint_id'
        self.table_name = 'stories'


if __name__ == '__main__':
    p = get_random_story(1)
    p.print_test_json()
    print p.get_insert_database_statement()