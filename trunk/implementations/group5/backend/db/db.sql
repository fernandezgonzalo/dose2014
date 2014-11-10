CREATE  TABLE user (
  email VARCHAR(80) NOT NULL ,
  username VARCHAR(45) NOT NULL ,
  password VARCHAR(45) NOT NULL ,
  name VARCHAR(45) NULL ,
  photo BLOB NULL ,
  last_login DATE NULL ,
  PRIMARY KEY (email) );


CREATE  TABLE project (
  id INT NOT NULL AUTO_INCREMENT ,
  name VARCHAR(45) NOT NULL ,
  deadline DATE NULL ,
  client_name VARCHAR(45) NULL ,
  id_user VARCHAR(45) NULL ,
  PRIMARY KEY (id) ,
  INDEX fk1 (id_user ASC) ,
  CONSTRAINT fk1
    FOREIGN KEY (id_user )
    REFERENCES user (email )
    ON DELETE SET NULL
    ON UPDATE CASCADE);

CREATE  TABLE task (
  id INT NOT NULL AUTO_INCREMENT ,
  title VARCHAR(45) NOT NULL ,
  description VARCHAR(500) NULL ,
  status VARCHAR(45) NULL ,
  priority VARCHAR(45) NULL ,
  deadline DATE NULL ,
  estimation VARCHAR(45) NULL ,
  id_user_creator VARCHAR(80) NULL ,
  id_user_assigned VARCHAR(80) NULL ,
  id_project INT NULL ,
  PRIMARY KEY (id) ,
  INDEX fk_task_1 (id_user_creator ASC) ,
  INDEX fk_task_2 (id_project ASC) ,
  INDEX fk_task_3 (id_user_assigned ASC) ,
  CONSTRAINT fk_task_1
    FOREIGN KEY (id_user_creator )
    REFERENCES user (email )
    ON DELETE SET NULL
    ON UPDATE CASCADE,
  CONSTRAINT fk_task_2
    FOREIGN KEY (id_project )
    REFERENCES project (id )
    ON DELETE CASCADE
    ON UPDATE CASCADE,
  CONSTRAINT fk_task_3
    FOREIGN KEY (id_user_assigned )
    REFERENCES user (email )
    ON DELETE SET NULL
    ON UPDATE CASCADE);

CREATE  TABLE comment (
  id INT NOT NULL AUTO_INCREMENT ,
  text VARCHAR(500) NULL ,
  id_task INT NULL ,
  id_user VARCHAR(80) NULL ,
  PRIMARY KEY (id) ,
  INDEX fk_comment_1 (id_task ASC) ,
  INDEX fk_comment_2 (id_user ASC) ,
  CONSTRAINT fk_comment_1
    FOREIGN KEY (id_task )
    REFERENCES task (id )
    ON DELETE CASCADE
    ON UPDATE CASCADE,
  CONSTRAINT fk_comment_2
    FOREIGN KEY (id_user )
    REFERENCES user (email )
    ON DELETE SET NULL
    ON UPDATE CASCADE);