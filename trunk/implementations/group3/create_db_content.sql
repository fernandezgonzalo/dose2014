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

DROP TABLE UsersToProjects;
DROP TABLE UsersToSprints;
DROP TABLE UsersToStories;
DROP TABLE UsersToTasks;

-- Make sure that foreign_key support is turned on
PRAGMA foreign_keys = ON;

-- At first, create tables

CREATE TABLE Users (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  email TEXT NOT NULL UNIQUE,
  password TEXT,
  name TEXT
);

CREATE TABLE Projects(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  start_time TEXT,
  end_time TEXT,
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

CREATE TABLE Stories(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL UNIQUE,
  sprintId INTEGER NOT NULL,
  FOREIGN KEY(sprintId) REFERENCES Sprints(id)
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

CREATE TABLE Tasks(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL UNIQUE,
  storyId INTEGER NOT NULL,
  points INTEGER,
  status INTEGER,
  completeness INTEGER,
  FOREIGN KEY(storyId) REFERENCES Stories(id)
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


-- And now many to many relations

CREATE TABLE UsersToProjects(
  projectId INTEGER NOT NULL,
  userId INTEGER NOT NULL,
  role INTEGER NOT NULL,
  FOREIGN KEY(projectId) REFERENCES Projects(id) ON DELETE CASCADE,
  FOREIGN KEY(userId) REFERENCES Users(id) ON DELETE CASCADE
);

CREATE TABLE UsersToSprints(
  sprintId INTEGER NOT NULL,
  userId INTEGER NOT NULL,
  role INTEGER NOT NULL,
  FOREIGN KEY(sprintId) REFERENCES Sprint(id) ON DELETE CASCADE,
  FOREIGN KEY(userId) REFERENCES Users(id) ON DELETE CASCADE
);

CREATE TABLE UsersToStories(
  storyId INTEGER NOT NULL,
  userId INTEGER NOT NULL,
  role INTEGER NOT NULL,
  FOREIGN KEY(storyId) REFERENCES Story(id) ON DELETE CASCADE,
  FOREIGN KEY(userId) REFERENCES Users(id) ON DELETE CASCADE
);

CREATE TABLE UsersToTasks(
  taskId INTEGER NOT NULL,
  userId INTEGER NOT NULL,
  role INTEGER NOT NULL,
  FOREIGN KEY(taskId) REFERENCES Tasks(id) ON DELETE CASCADE,
  FOREIGN KEY(userId) REFERENCES Users(id) ON DELETE CASCADE
);

-- Add some users to the users table
--INSERT INTO Users(name) VALUES ('John');

-- Add some todos to the todos table
--INSERT INTO Todos(description, userId) VALUES ('Be happy', 2);
