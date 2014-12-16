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
  user_id INTEGER NOT NULL,
  project_id INTEGER NOT NULL,
  FOREIGN KEY(user_id) REFERENCES Users(id),
  FOREIGN KEY(project_id) REFERENCES Projects(id)
);

CREATE TABLE Sprints(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL UNIQUE,
  project_id INTEGER NOT NULL,
  start_time TEXT,
  end_time TEXT,
  FOREIGN KEY(project_id) REFERENCES Projects(id)
);

CREATE TABLE SprintComments(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  сontents TEXT NOT NULL UNIQUE,
  date TEXT,
  user_id INTEGER NOT NULL,
  sprint_id INTEGER NOT NULL,
  FOREIGN KEY(user_id) REFERENCES Users(id),
  FOREIGN KEY(sprint_id) REFERENCES Sprints(id)
);

CREATE TABLE Stories(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL UNIQUE,
  sprint_id INTEGER NOT NULL,
  FOREIGN KEY(sprint_id) REFERENCES Sprints(id)
);

CREATE TABLE StoriesComments(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  сontents TEXT NOT NULL UNIQUE,
  date TEXT,
  user_id INTEGER NOT NULL,
  story_id INTEGER NOT NULL,
  FOREIGN KEY(user_id) REFERENCES Users(id),
  FOREIGN KEY(story_id) REFERENCES Stories(id)
);

CREATE TABLE Tasks(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL UNIQUE,
  story_id INTEGER NOT NULL,
  points INTEGER,
  status INTEGER,
  completeness INTEGER,
  FOREIGN KEY(story_id) REFERENCES Stories(id)
);

CREATE TABLE TasksComments(
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  сontents TEXT NOT NULL UNIQUE,
  date TEXT,
  user_id INTEGER NOT NULL,
  task_id INTEGER NOT NULL,
  FOREIGN KEY(user_id) REFERENCES Users(id),
  FOREIGN KEY(task_id) REFERENCES Tasks(id)
);


-- And now many to many relations

CREATE TABLE UsersToProjects(
  project_id INTEGER NOT NULL,
  user_id INTEGER NOT NULL,
  role INTEGER NOT NULL,
  FOREIGN KEY(project_id) REFERENCES Projects(id) ON DELETE CASCADE,
  FOREIGN KEY(user_id) REFERENCES Users(id) ON DELETE CASCADE
);

CREATE TABLE UsersToSprints(
  sprint_id INTEGER NOT NULL,
  user_id INTEGER NOT NULL,
  role INTEGER NOT NULL,
  FOREIGN KEY(sprint_id) REFERENCES Sprint(id) ON DELETE CASCADE,
  FOREIGN KEY(user_id) REFERENCES Users(id) ON DELETE CASCADE
);

CREATE TABLE UsersToStories(
  story_id INTEGER NOT NULL,
  user_id INTEGER NOT NULL,
  role INTEGER NOT NULL,
  FOREIGN KEY(story_id) REFERENCES Story(id) ON DELETE CASCADE,
  FOREIGN KEY(user_id) REFERENCES Users(id) ON DELETE CASCADE
);

CREATE TABLE UsersToTasks(
  task_id INTEGER NOT NULL,
  user_id INTEGER NOT NULL,
  role INTEGER NOT NULL,
  FOREIGN KEY(task_id) REFERENCES Tasks(id) ON DELETE CASCADE,
  FOREIGN KEY(user_id) REFERENCES Users(id) ON DELETE CASCADE
);

-- Add some users to the users table
--INSERT INTO Users(name) VALUES ('John');

-- Add some todos to the todos table
--INSERT INTO Todos(description, user_id) VALUES ('Be happy', 2);
