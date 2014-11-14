CREATE TABLE IF NOT EXISTS users (
  id                    INT PRIMARY KEY AUTOINCREMENT,
  email                 VARCHAR(128) NOT NULL,
  password              VARCHAR(32) NOT NULL,
  name                  VARCHAR(120),
  surname               VARCHAR(120),
  is_stakeholder        BOOLEAN NOT NULL
);

CREATE TABLE IF NOT EXISTS projects (
  id                    INT PRIMARY KEY AUTOINCREMENT,
  name                  VARCHAR(120) NOT NULL,
  description           VARCHAR(120) NOT NULL,
  start_date            DATETIME NOT NULL,
  end_date              DATETIME NOT NULL,
  status                INTEGER,
  owner                 INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS sprints (
  id                    INT PRIMARY KEY AUTOINCREMENT,
  name                  VARCHAR(120) NOT NULL,
  start_date            DATETIME NOT NULL,
  end_date              DATETIME NOT NULL,
  status                INTEGER,
  project_id            INTEGER NOT NULL REFERENCES projects(id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS stories (
  id                    INT PRIMARY KEY AUTOINCREMENT,
  title                 VARCHAR(120) NOT NULL,
  description           VARCHAR(120) NOT NULL,
  start_date            DATETIME NOT NULL,
  end_date              DATETIME NOT NULL,
  points                INTEGER,
  notes                 VARCHAR(120),
  sprint_id             INTEGER NOT NULL REFERENCES sprints(id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS tasks (
  id                    INT PRIMARY KEY AUTOINCREMENT,
  number                INTEGER NOT NULL,
  description           VARCHAR(120) NOT NULL,
  comments              VARCHAR(120),
  story_id              INTEGER NOT NULL REFERENCES stories(id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS project_share (
  user_id               INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE,
  project_id            INTEGER NOT NULL REFERENCES projects(id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS tasks_assignment (
  user_id               INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE,
  task_id               INTEGER NOT NULL REFERENCES projects(id) ON DELETE CASCADE
);