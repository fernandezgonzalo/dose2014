DROP TABLE IF EXISTS User;
DROP TABLE IF EXISTS Project;
DROP TABLE IF EXISTS UserProject;
DROP TABLE IF EXISTS RolProject;
DROP TABLE IF EXISTS RolProject_UserProject;
DROP TABLE IF EXISTS Sprint;
DROP TABLE IF EXISTS Task;
DROP TABLE IF EXISTS TaskUser_Sprint;
DROP TABLE IF EXISTS Requirement;

CREATE TABLE User (
id INTEGER PRIMARY KEY AUTOINCREMENT,
name TEXT,
lastname TEXT,
email TEXT UNIQUE,
password TEXT,
rol INTEGER,
active INTEGER
);


CREATE TABLE Project (
id INTEGER PRIMARY KEY AUTOINCREMENT,
name TEXT,
info TEXT
);
CREATE TABLE UserProject (
id_user INTEGER,
id_project INTEGER,
PRIMARY KEY (id_user, id_project),
FOREIGN KEY (id_user) REFERENCES User(id),
FOREIGN KEY (id_project) REFERENCES Project(id)
);

CREATE TABLE RolProject (
id INTEGER PRIMARY KEY AUTOINCREMENT,
type TEXT UNIQUE
);

CREATE TABLE RolProject_UserProject (
id_user INTEGER,
id_project INTEGER,
id_rolproject INTEGER,
PRIMARY KEY (id_user, id_project),
FOREIGN KEY (id_user) REFERENCES User(id),
FOREIGN KEY (id_project) REFERENCES Project(id),
FOREIGN KEY (id_rolproject) REFERENCES RolProject(id)
);

CREATE TABLE Sprint (
id INTEGER PRIMARY KEY AUTOINCREMENT,
duration INTEGER,
id_project INTEGER,
FOREIGN KEY (id_project) REFERENCES Project(id)
);
CREATE TABLE Task (
id INTEGER PRIMARY KEY AUTOINCREMENT,
desc TEXT,
comment TEXT,
duration INTEGER,
points INTEGER,
status TEXT,
id_user INTEGER,
id_requirement INTEGER,
FOREIGN KEY (id_requirement ) REFERENCES Requirement (id),
FOREIGN KEY (id_user) REFERENCES User(id)
);
CREATE TABLE TaskUser_Sprint (
id_user INTEGER,
id_task INTEGER,
id_sprint INTEGER,
PRIMARY KEY (id_user, id_task),
FOREIGN KEY (id_user) REFERENCES User(id),
FOREIGN KEY (id_task) REFERENCES Task(id),
FOREIGN KEY (id_sprint) REFERENCES Sprint(id)
);

CREATE TABLE Requirement (
id INTEGER PRIMARY KEY AUTOINCREMENT,
estimation INTEGER,
desc TEXT,
id_project INTEGER,
FOREIGN KEY (id_project) REFERENCES Project(id)
);