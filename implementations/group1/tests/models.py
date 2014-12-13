from peewee import *
import json

database_proxy = Proxy()


class BaseModel(Model):
    class Meta:
        database = database_proxy

class Project(BaseModel):
    info = TextField(null=True)
    name = TextField(null=True)

    class Meta:
        db_table = 'Project'

    def jsonify(self):
        return json.dumps({
            "info": self.info,
            "name": self.name,
            "id": str(self.id)
            })

class Requirement(BaseModel):
    desc = TextField(null=True)
    estimation = IntegerField(null=True)
    id_project = IntegerField(null=True)

    class Meta:
        db_table = 'Requirement'

    def jsonify(self):
        return json.dumps({
            "desc": self.desc,
            "estimation": str(self.estimation),
            "id_project": str(self.id_project),
            "id": str(self.id)
            })

class User(BaseModel):
    active = IntegerField(null=True)
    email = TextField(null=True)
    lastname = TextField(null=True)
    name = TextField(null=True)
    password = TextField(null=True)
    rol = IntegerField(null=True)

    class Meta:
        db_table = 'User'

    def jsonify(self):
        return json.dumps({
            "active": str(self.active),
            "email": self.email,
            "lastname": self.lastname,
            "name": self.name,
            "password": self.password,
            "rol": str(self.rol),
            "id": str(self.id)
            })

class Sprint(BaseModel):
    duration = IntegerField(null=True)
    id_project = IntegerField(null=True)

    class Meta:
        db_table = 'Sprint'

    def jsonify(self):
        return json.dumps({
            "duration": str(self.duration),
            "id_project": str(self.id_project),
            "id": str(self.id)
            })

class Task(BaseModel):
    comment = TextField(null=True)
    desc = TextField(null=True)
    duration = IntegerField(null=True)
    id_requirement = IntegerField(null=True)
    id_user = IntegerField(null=True)
    points = IntegerField(null=True)
    status = TextField(null=True)

    class Meta:
        db_table = 'Task'

    def jsonify(self):
        return json.dumps({
            "comment": self.comment,
            "desc": self.desc,
            "duration": str(self.duration),
            "id_requirement": str(self.id_requirement),
            "id_user": str(self.id_user),
            "points": str(self.points),
            "status": self.status,
            "id": str(self.id)
            })

class TaskuserSprint(BaseModel):
    id_sprint = IntegerField(null=True)
    id_task = ForeignKeyField(Task, null=True)
    id_user = ForeignKeyField(User, null=True)

    class Meta:
        db_table = 'TaskUser_Sprint'

    def jsonify(self):
        return json.dumps({
            "id_sprint": str(self.id_sprint),
            "id_task": str(self.id_task),
            "id_user": str(self.id_user)
            })

class Userproject(BaseModel):
    id_project = ForeignKeyField(Project, null=True)
    id_user = ForeignKeyField(User, null=True)
    role = TextField(null=True)

    class Meta:
        db_table = 'UserProject'

    def jsonify(self):
        return json.dumps({
            "id_project": str(self.id_project),
            "id_user": str(self.id_user),
            "role": self.role
            })
