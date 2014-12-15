from database_item import DatabaseItem
import random
import datetime
import json


def get_message_from_json(json_str):
    json_dict = json.loads(json_str)
    return Message(
        text=json_dict['text'],
        timestamp=json_dict['timestamp'],
        project_id=json_dict['project_id'],
        user_id=json_dict['user_id'],
        id_=json_dict['id']
        )


class Message(DatabaseItem):

    def __init__(self, text, timestamp, project_id, user_id, id_=None):
        super(Message, self).__init__()
        self.text = text
        self.timestamp = timestamp
        self.project_id = project_id
        self.user_id = user_id
        self.id = id_
        self.database_fields = ['text', 'timestamp', 'project_id', 'user_id']
        self.non_database_fields = []
        self.parent_id_name = 'project_id'
        self.table_name = 'messages'


if __name__ == '__main__':
    m = Message(text='Some message', timestamp='2012-04-23T18:25:43.511', project_id=1, user_id=1, id_=1)
    m.print_test_json()
    print m.get_insert_database_statement()