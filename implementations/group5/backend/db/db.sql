# Make sure that foreign_key support is turned on
PRAGMA foreign_keys = ON;

CREATE  TABLE user (
  email TEXT PRIMARY KEY ,
  username TEXT NOT NULL ,
  password TEXT NOT NULL ,
  name TEXT ,
  photo BLOB ,
  last_login DATE NULL);

CREATE  TABLE project (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  name TEXT NOT NULL ,
  deadline DATE NULL ,
  client_name TEXT NULL ,
  id_user TEXT NULL REFERENCES user (email ) ON DELETE SET NULL ON UPDATE CASCADE);

CREATE  TABLE task (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  title TEXT NOT NULL ,
  description TEXT NULL ,
  status TEXT NULL ,
  priority TEXT NULL ,
  deadline DATE NULL ,
  estimation TEXT NULL ,
  id_user_creator TEXT NULL  REFERENCES user (email ) ON DELETE SET NULL ON UPDATE CASCADE,
  id_user_assigned TEXT NULL REFERENCES user (email ) ON DELETE SET NULL ON UPDATE CASCADE,
  id_project INTEGER NULL REFERENCES project (id ) ON DELETE CASCADE ON UPDATE CASCADE);

CREATE  TABLE comment (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  commentary TEXT NULL ,
  id_task INTEGER NULL REFERENCES task (id ) ON DELETE CASCADE ON UPDATE CASCADE,
  id_user TEXT NULL REFERENCES user (email ) ON DELETE SET NULL ON UPDATE CASCADE);