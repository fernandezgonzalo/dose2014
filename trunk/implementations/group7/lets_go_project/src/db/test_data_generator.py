import sys
import os
sys.path.insert(0, os.path.join(os.path.dirname(os.path.dirname(os.path.dirname(__file__))), 'backend_tests'))

from model.user import get_random_user
from model.project import get_random_project
from model.sprint import get_random_sprint
from model.story import get_random_story
from model.task import get_random_task
from model.project_share import ProjectShare
from model.task_assignment import TaskAssignment
import random
import sqlite3
import os


def get_max_n_items_from_list(n, lst):
    lst = lst[:]
    random.shuffle(lst)
    return sorted(lst[0:random.randint(1,n)])


def execute_sql_file(cursor, filename):
    for query in open(filename, 'r').read().split(';'):
        cursor.execute(query)


class TestDataGenerator(object):
    def __init__(self, user_count, project_count, max_sprint_count, max_story_count, max_task_count, max_invited_devs, max_assigned_devs):
        super(TestDataGenerator, self).__init__()
        self.user_count = user_count
        self.project_count = project_count
        self.max_sprint_count = max_sprint_count
        self.max_story_count = max_story_count
        self.max_task_count = max_task_count
        self.max_invited_devs = max_invited_devs
        self.max_assigned_devs = max_assigned_devs

        self.user_ids = []
        self.users = []
        self.user_mapping = {}

        self.project_ids = []
        self.projects = []
        self.project_mapping = {}

        self.sprint_ids = []
        self.sprints = []
        self.sprint_mapping = {}

        self.story_ids = []
        self.stories = []
        self.story_mapping = {}

        self.task_ids = []
        self.tasks = []
        self.task_mapping = {}

        self.project_shares = []
        self.task_assignments = []

        self.generate_users()
        self.generate_projects()
        self.generate_sprints()
        self.generate_stories()
        self.generate_tasks()

    def generate_users(self):
        self.user_ids = [i for i in xrange(1, self.user_count + 1)]
        self.users = [get_random_user(id_) for id_ in self.user_ids]
        self.user_mapping = {user.id: user for user in self.users}

        # One of the users should have always the same credentials for testing.
        self.users[0].email = 'asdf'
        self.users[0].password = 'asdf'

    def generate_projects(self):
        self.project_ids = [i for i in xrange(1, self.project_count + 1)]
        self.projects = [get_random_project(random.choice(self.user_ids), id_) for id_ in self.project_ids]
        self.project_mapping = {project.id: project for project in self.projects}

        for project in self.projects:
            user_ids_without_owner = self.user_ids[:]
            user_ids_without_owner.remove(project.owner)
            project.invited_devs = get_max_n_items_from_list(self.max_invited_devs, user_ids_without_owner)

            for dev in project.invited_devs:
                self.user_mapping[dev].projects.append(project.id)
                self.project_shares.append(ProjectShare(dev, project.id))

    def generate_sprints(self):
        sprint_id = 1
        for project in self.projects:
            sprint_count = random.randint(0, self.max_sprint_count)
            sprint_ids = [i for i in xrange(sprint_id, sprint_id + sprint_count)]
            sprints = [get_random_sprint(project.id, id_) for id_ in sprint_ids]
            project.sprints = sprint_ids

            self.sprint_ids.extend(sprint_ids)
            self.sprints.extend(sprints)
            self.sprint_mapping.update({sprint.id: sprint for sprint in sprints})
            sprint_id += sprint_count

    def generate_stories(self):
        story_id = 1
        for project in self.projects:
            for sprint_id in project.sprints:
                print sprint_id
                print self.sprint_mapping
                sprint = self.sprint_mapping[sprint_id]
                story_count = random.randint(0, self.max_story_count)
                story_ids = [i for i in xrange(story_id, story_id + story_count)]
                stories = [get_random_story(sprint.id, id_) for id_ in story_ids]
                sprint.stories = story_ids

                self.story_ids.extend(story_ids)
                self.stories.extend(stories)
                self.story_mapping.update({story.id: story for story in stories})
                story_id += story_count

    def generate_tasks(self):
        task_id = 1
        for project in self.projects:
            for sprint_id in project.sprints:
                sprint = self.sprint_mapping[sprint_id]
                for story_id in sprint.stories:
                    story = self.story_mapping[story_id]
                    task_count = random.randint(0, self.max_task_count)
                    task_ids = [i for i in xrange(task_id, task_id + task_count)]
                    tasks = [get_random_task(story.id, random.choice(project.invited_devs), id_) for id_ in task_ids]
                    story.tasks = task_ids

                    self.task_ids.extend(task_ids)
                    self.tasks.extend(tasks)
                    self.task_mapping.update({task.id: task for task in tasks})
                    task_id += task_count

                    for task in tasks:
                        dev_ids_without_owner = project.invited_devs[:]
                        dev_ids_without_owner.remove(task.owner)
                        task.assigned_devs = get_max_n_items_from_list(self.max_assigned_devs, dev_ids_without_owner)

                        for dev in task.assigned_devs:
                            self.user_mapping[dev].assigned_tasks.append(task.id)
                            self.task_assignments.append(TaskAssignment(dev, task.id))


if __name__ == '__main__':
    print "Start generating test data..."
    g = TestDataGenerator(user_count=10, project_count=10, max_sprint_count=10, max_story_count=10, max_task_count=10, max_invited_devs=5, max_assigned_devs=5)
    os.remove('../../letsgo.db')
    connection = sqlite3.connect('../../letsgo.db')
    with connection:
        cursor = connection.cursor()
        execute_sql_file(cursor, '../../src/db/setup_schema_if_not_exists.sql')

        for item in g.users + g.projects + g.sprints + g.stories + g.tasks + g.project_shares + g.task_assignments:
            try:
                cursor.execute(item.get_insert_database_statement())
            except Exception as e:
                print e
                print item.get_insert_database_statement()

    print 'Generated %d users.' % len(g.users)
    print 'Generated %d projects.' % len(g.projects)
    print 'Generated %d sprints.' % len(g.sprints)
    print 'Generated %d stories.' % len(g.stories)
    print 'Generated %d tasks.' % len(g.tasks)