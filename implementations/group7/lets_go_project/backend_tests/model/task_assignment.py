from database_item import DatabaseItem


class TaskAssignment(DatabaseItem):

    def __init__(self, user_id, task_id):
        super(TaskAssignment, self).__init__()
        self.user_id = user_id
        self.task_id = task_id
        self.database_fields = ['user_id', 'task_id']
        self.table_name = 'task_assignments'

    def get_dict_without_id(self, d):
        return d


if __name__ == '__main__':
    p = TaskAssignment(1, 2)
    print p.get_insert_database_statement()