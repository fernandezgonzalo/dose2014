PRAGMA foreign_keys = ON;

CREATE TABLE IF NOT EXISTS users (
  id                    INTEGER PRIMARY KEY AUTOINCREMENT,
  email                 VARCHAR(128) NOT NULL,
  password              VARCHAR(32) NOT NULL,
  firstname             VARCHAR(120) NOT NULL,
  lastname              VARCHAR(120) NOT NULL
);

CREATE TABLE IF NOT EXISTS projects (
  id                    INTEGER PRIMARY KEY AUTOINCREMENT,
  name                  VARCHAR(120) NOT NULL,
  description           VARCHAR(120) NOT NULL,
  start_date            DATETIME NOT NULL,
  end_date              DATETIME NOT NULL,
  status                INTEGER NOT NULL,
  owner                 INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS sprints (
  id                    INTEGER PRIMARY KEY AUTOINCREMENT,
  name                  VARCHAR(120) NOT NULL,
  start_date            DATETIME NOT NULL,
  end_date              DATETIME NOT NULL,
  status                INTEGER NOT NULL,
  project_id            INTEGER NOT NULL REFERENCES projects(id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS stories (
  id                    INTEGER PRIMARY KEY AUTOINCREMENT,
  title                 VARCHAR(120) NOT NULL,
  description           VARCHAR(120) NOT NULL,
  points                INTEGER,
  notes                 VARCHAR(120),
  sprint_id             INTEGER NOT NULL REFERENCES sprints(id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS tasks (
  id                    INTEGER PRIMARY KEY AUTOINCREMENT,
  nr                    INTEGER NOT NULL,
  description           VARCHAR(120) NOT NULL,
  comment               VARCHAR(400) NOT NULL,
  status                INTEGER NOT NULL,
  progress              INTEGER,
  completion_date       DATETIME,
  owner                 INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE,
  story_id              INTEGER NOT NULL REFERENCES stories(id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS project_shares (
  user_id               INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE,
  project_id            INTEGER NOT NULL REFERENCES projects(id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS task_assignments (
  user_id               INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE,
  task_id               INTEGER NOT NULL REFERENCES tasks(id) ON DELETE CASCADE
);

CREATE TABLE IF NOT EXISTS messages (
  id                    INTEGER PRIMARY KEY AUTOINCREMENT,
  text                  VARCHAR(400) NOT NULL,
  timestamp             DATETIME NOT NULL,
  project_id            INTEGER NOT NULL REFERENCES projects(id) ON DELETE CASCADE,
  user_id               INTEGER NOT NULL REFERENCES users(id) ON DELETE CASCADE
);