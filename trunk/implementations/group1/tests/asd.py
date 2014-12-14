import sqlite3
from faker import Factory
from test_api_rest import *
from models import *

session = requests.Session()
faker = Factory.create()

do_login(session, "bob@esponja.com", "asd")
name = faker.first_name()
lastname = faker.last_name()
email = faker.email()
password = faker.password()
rol = "1"
active = "1"

res = post_users(session, name, lastname, email, password, rol, active)
print res.status_code, email
print res.content

database = SqliteDatabase('../database.db')
database_proxy.initialize(database)
u = User.select().where(User.id == res.json().get('id')).get()
print u.email == email


# print get_users(session).json()