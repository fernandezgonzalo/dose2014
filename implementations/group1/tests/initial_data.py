from models import *
from peewee import *
from faker import Factory
from hashlib import sha256
import logging

# Init logging
logging.basicConfig(level=logging.INFO)
logger = logging.getLogger(__name__)

# Init database for peewee
logger.info("Init database for peewee")
database = SqliteDatabase('../database.db')
database_proxy.initialize(database)

# Init factory for random data
logger.info("Init faker")
fak = Factory.create()

def clean_database():
    logger.info("Call clean database")
    User.delete().execute()
    Project.delete().execute()
    Userproject.delete().execute()
    Sprint.delete().execute()
    Requirement.delete().execute()
    Task.delete().execute()


def make_hashed_password(email, password):
    return sha256(email + password).hexdigest()

def create_random_users(num):
    logger.info("Create %d users" % num)
    for x in xrange(num):
        name = fak.first_name()
        lastname = fak.last_name()
        email = fak.email()
        password = fak.password()
        active = "1"
        rol = "1"
        user = User(name=name, lastname=lastname, email=email, password=make_hashed_password(email, password), active=active, rol=rol)
        user.save()
        create_random_projects_for_user(user.id, 2)


def create_random_projects_for_user(id_user, num):
    logger.info("Create %d projects for user %d" % (num, id_user))
    for x in xrange(num):
        name = fak.word()
        info = fak.sentence()
        project = Project.create(name=name, info=info)
        project.save()

        Userproject.raw('INSERT INTO userproject (id_user, id_project, role) VALUES (?,?,?)', id_user, project.id, "DEV").execute()


clean_database()
create_random_users(3)