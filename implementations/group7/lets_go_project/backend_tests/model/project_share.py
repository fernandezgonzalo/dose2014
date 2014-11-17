from database_item import DatabaseItem


class ProjectShare(DatabaseItem):

    def __init__(self, user_id, project_id):
        super(ProjectShare, self).__init__()
        self.user_id = user_id
        self.project_id = project_id
        self.database_fields = ['user_id', 'project_id']
        self.table_name = 'project_shares'

    def get_dict_without_id(self, d):
        return d


if __name__ == '__main__':
    p = ProjectShare(1, 2)
    print p.get_insert_database_statement()