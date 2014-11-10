CREATE TABLE User (
id INTEGER PRIMARY KEY AUTOINCREMENT,
name TEXT,
lastname TEXT,
email TEXT UNIQUE,
password TEXT,
rol INTEGER,
active INTEGER
);
;
CREATE TABLE sqlite_sequence(name,seq);
CREATE TABLE Project (
id INTEGER PRIMARY KEY AUTOINCREMENT,
info TEXT
);
CREATE TABLE UserProject (
id_user INTEGER,
id_project INTEGER,
PRIMARY KEY (id_user, id_project),
FOREIGN KEY (id_user) REFERENCES User(id),
FOREIGN KEY (id_project) REFERENCES Project(id)
);
;
CREATE TABLE RolProject (
id INTEGER PRIMARY KEY AUTOINCREMENT,
type TEXT UNIQUE
);
;
CREATE TABLE RolProject_UserProject (
id_user INTEGER,
id_project INTEGER,
id_rolproject INTEGER,
PRIMARY KEY (id_user, id_project),
FOREIGN KEY (id_user) REFERENCES User(id),
FOREIGN KEY (id_project) REFERENCES Project(id),
FOREIGN KEY (id_rolproject) REFERENCES RolProject(id)
);
;
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
priority INTEGER,
duration INTEGER,
points INTEGER,
finalized INTEGER,
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
;
CREATE TABLE Requirement (
id INTEGER PRIMARY KEY AUTOINCREMENT,
estim INTEGER,
desc TEXT,
priority INTEGER,
id_project INTEGER,
FOREIGN KEY (id_project) REFERENCES Project(id)
);
