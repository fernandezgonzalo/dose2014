-- Drop tables if they exist
DROP TABLE Users;
DROP TABLE Sprints;
DROP TABLE SprintComments;
DROP TABLE Tasks;
DROP TABLE TasksComments;
DROP TABLE Projects;
DROP TABLE ProjectComments;
DROP TABLE Stories;
DROP TABLE StoriesComments;

DROP TABLE StoriesBelongToProjects;
DROP TABLE TasksBelongToStories;
DROP TABLE TasksBelongToSprints;

-- Make sure that foreign_key support is turned on
PRAGMA foreign_keys = ON;

-- At first, create tables

CREATE TABLE Users (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  login TEXT NOT NULL UNIQUE,
  password TEXT,
  name TEXT,
  email TEXT
);

CREATE TABLE Projects(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL UNIQUE
);

CREATE TABLE ProjectComments(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  сontents TEXT NOT NULL UNIQUE,
  date TEXT,
  userId INTEGER NOT NULL,
  projectId INTEGER NOT NULL,
  FOREIGN KEY(userId) REFERENCES Users(id),
  FOREIGN KEY(projectId) REFERENCES Projects(id)
);


CREATE TABLE Sprints(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL UNIQUE,
  projectId INTEGER NOT NULL,
  start_time TEXT,
  end_time TEXT,
  FOREIGN KEY(projectId) REFERENCES Projects(id)
);

CREATE TABLE SprintComments(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  сontents TEXT NOT NULL UNIQUE,
  date TEXT,
  userId INTEGER NOT NULL,
  sprintId INTEGER NOT NULL,
  FOREIGN KEY(userId) REFERENCES Users(id),
  FOREIGN KEY(sprintId) REFERENCES Sprints(id)
);

CREATE TABLE Tasks(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL UNIQUE,
  points INTEGER,
  status INTEGER,
  completeness INTEGER
);

CREATE TABLE TasksComments(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  сontents TEXT NOT NULL UNIQUE,
  date TEXT,
  userId INTEGER NOT NULL,
  taskId INTEGER NOT NULL,
  FOREIGN KEY(userId) REFERENCES Users(id),
  FOREIGN KEY(taskId) REFERENCES Tasks(id)
);

CREATE TABLE Stories(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL UNIQUE
);

CREATE TABLE StoriesComments(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  сontents TEXT NOT NULL UNIQUE,
  date TEXT,
  userId INTEGER NOT NULL,
  storyId INTEGER NOT NULL,
  FOREIGN KEY(userId) REFERENCES Users(id),
  FOREIGN KEY(storyId) REFERENCES Stories(id)
);

-- And now many to many relations

CREATE TABLE StoriesBelongToProjects(
  projectId INTEGER NOT NULL,
  storyId INTEGER NOT NULL,
  FOREIGN KEY(projectId) REFERENCES Projects(id) ON DELETE CASCADE,
  FOREIGN KEY(storyId) REFERENCES Stories(id) ON DELETE CASCADE
);

CREATE TABLE TasksBelongToStories(
  taskId INTEGER NOT NULL,
  storyId INTEGER NOT NULL,
  FOREIGN KEY(taskId) REFERENCES Tasks(id) ON DELETE CASCADE,
  FOREIGN KEY(storyId) REFERENCES Stories(id) ON DELETE CASCADE
);

CREATE TABLE TasksBelongToSprints(
  taskId INTEGER NOT NULL,
  sprintId INTEGER NOT NULL,
  FOREIGN KEY(taskId) REFERENCES Tasks(id) ON DELETE CASCADE,
  FOREIGN KEY(sprintId) REFERENCES Sprints(id) ON DELETE CASCADE
);


-- Add some users to the users table
--INSERT INTO Users(name) VALUES ('John');

-- Add some todos to the todos table
--INSERT INTO Todos(description, userId) VALUES ('Be happy', 2);
