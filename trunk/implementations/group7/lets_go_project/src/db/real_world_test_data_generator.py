import sys
import os
sys.path.insert(0, os.path.join(os.path.dirname(os.path.dirname(os.path.dirname(__file__))), 'backend_tests'))

from model.user import User, HASHED_EXAMPLE_PASSWORD
from model.project import Project
from model.sprint import Sprint
from model.story import Story
from model.task import Task
from model.project_share import ProjectShare
from model.task_assignment import TaskAssignment
from model.message import Message
import sqlite3
from datetime import date

# Project status
OPEN = 0
CLOSE = 1

# Sprint status
FUTURE = 0
CLOSED = 1
IN_PROGRESS = 2
PLANNED = 3

# Task status
T_NOT_STARTED = 0
T_IN_PROGRESS = 1
T_COMPLETED = 2
T_BLOCKED = 3


def execute_sql_file(cursor, filename):
    for query in open(filename, 'r').read().split(';'):
        cursor.execute(query)


class TestDataGenerator(object):
    def __init__(self):
        super(TestDataGenerator, self).__init__()

        self.users = [
            User(email='asdf@asdf',         password=HASHED_EXAMPLE_PASSWORD, firstname='Bertrand', lastname='Meier',       projects=[], assigned_tasks=[], id_=1),
            User(email='aaron@richiger',    password=HASHED_EXAMPLE_PASSWORD, firstname='Aaron',    lastname='Richiger',    projects=[], assigned_tasks=[], id_=2),
            User(email='vimal@chellakudam', password=HASHED_EXAMPLE_PASSWORD, firstname='Vimal',    lastname='Chellakudam', projects=[], assigned_tasks=[], id_=3)
        ]

        self.projects = [
            Project(name='Project 1', description='Some description', start_date=date(2014, 1, 1), end_date=date(2015, 1, 31), status=OPEN, owner=1, invited_devs=[], sprints=[], id_=1),
            Project(name='Project 2', description='Some description', start_date=date(2014, 1, 1), end_date=date(2015, 1, 31), status=OPEN, owner=1, invited_devs=[], sprints=[], id_=2),
            Project(name='Project 3', description='Some description', start_date=date(2014, 1, 1), end_date=date(2015, 1, 31), status=OPEN, owner=2, invited_devs=[], sprints=[], id_=3)
        ]

        self.messages = [
            Message(text='Message 1', timestamp='2012-04-23T18:25:43.511Z', project_id=1, user_id=1, id_=1),
            Message(text='Message 2', timestamp='2012-04-23T18:26:43.511Z', project_id=1, user_id=2, id_=2),
            Message(text='Message 3', timestamp='2012-04-23T18:27:43.511Z', project_id=1, user_id=1, id_=3),
            Message(text='Message 4', timestamp='2012-04-23T18:28:43.511Z', project_id=1, user_id=2, id_=4),
        ]

        self.sprints = [
            Sprint(name='Sprint 1', start_date=date(2014, 1, 1), end_date=date(2014, 1, 31), status=CLOSED,         project_id=1, stories=[], id_=1),
            Sprint(name='Sprint 2', start_date=date(2014,12, 1), end_date=date(2014,12, 31), status=IN_PROGRESS,    project_id=1, stories=[], id_=2),
            Sprint(name='Sprint 3', start_date=date(2015, 1, 1), end_date=date(2015, 1, 31), status=PLANNED,        project_id=1, stories=[], id_=3),
            Sprint(name='Sprint 4', start_date=date(2014,12, 1), end_date=date(2014,12, 31), status=IN_PROGRESS,    project_id=2, stories=[], id_=4)
        ]

        self.stories = [
            Story(title='Story 1', description='Story description', points=40, notes='Some note', sprint_id=1, id_=1),
            Story(title='Story 2', description='Story description', points=50, notes='Some note', sprint_id=1, id_=2),
            Story(title='Story 3', description='Story description', points=60, notes='Some note', sprint_id=1, id_=3),
            Story(title='Story 4', description='Story description', points=70, notes='Some note', sprint_id=2, id_=4)
        ]

        self.tasks = [
            Task(nr=10, description='Task 1', comment='Some comment', status=T_COMPLETED,   progress=100, completion_date=date(2014, 1, 10), owner=1, story_id=1, assigned_devs=[], id_=1),
            Task(nr=10, description='Task 2', comment='Some comment', status=T_COMPLETED,   progress=100, completion_date=date(2014, 1, 14), owner=1, story_id=1, assigned_devs=[], id_=2),
            Task(nr=10, description='Task 3', comment='Some comment', status=T_IN_PROGRESS, progress=50,  completion_date=None,              owner=2, story_id=1, assigned_devs=[], id_=3),
            Task(nr=10, description='Task 4', comment='Some comment', status=T_NOT_STARTED, progress=0,   completion_date=None,              owner=2, story_id=2, assigned_devs=[], id_=4)
        ]

        self.project_shares = [
            ProjectShare(user_id=1, project_id=1),
            ProjectShare(user_id=1, project_id=2),
            ProjectShare(user_id=1, project_id=3),
            ProjectShare(user_id=2, project_id=1),
            ProjectShare(user_id=2, project_id=3)
        ]

        self.task_assignments = [
            TaskAssignment(user_id=1, task_id=1),
            TaskAssignment(user_id=1, task_id=2),
            TaskAssignment(user_id=2, task_id=3),
            TaskAssignment(user_id=2, task_id=1),
            TaskAssignment(user_id=2, task_id=3),
            TaskAssignment(user_id=2, task_id=4),
        ]


if __name__ == '__main__':
    print "Start generating test data..."
    g = TestDataGenerator()
    os.remove('../../letsgo.db')
    connection = sqlite3.connect('../../letsgo.db')
    with connection:
        cursor = connection.cursor()
        execute_sql_file(cursor, '../../src/db/setup_schema_if_not_exists.sql')

        for item in g.users + g.projects + g.messages + g.sprints + g.stories + g.tasks + g.project_shares + g.task_assignments:
            try:
                cursor.execute(item.get_insert_database_statement())
            except Exception as e:
                print e
                print item.get_insert_database_statement()

    print 'Done'