/******************************************************************
现需要构建一个简易的成绩管理系统的数据库，来记录几门课程的学生成绩。
数据库中有三张表分别用于记录学生信息、课程信息和成绩信息。
学生表(student)：学生 id 、学生姓名和性别
课程表：课程 id 和课程名
成绩表：成绩 id 、学生 id 、课程 id 和分数
******************************************************************/

CREATE DATABASE gradesystem;

use gradesystem;

CREATE TABLE student
(
sid int(10) AUTO_INCREMENT PRIMARY KEY,
sname char(20),
gender ENUM('male','female')
);

CREATE TABLE course
(
cid int(10) AUTO_INCREMENT PRIMARY KEY,
cname char(20)
);

CREATE TABLE mark
(
mid int(10) AUTO_INCREMENT PRIMARY KEY,
sid int(10),
cid int(10),
score int(10),
CONSTRAINT FOREIGN KEY(sid) REFERENCES student(sid),
CONSTRAINT FOREIGN KEY(cid) REFERENCES course(cid)
);

INSERT INTO student(sname,gender) VALUES('Tom','male'),('Jack','male'),('Rose','female');
INSERT INTO course(cname) VALUES('math'),('physics'),('chemistry');
INSERT INTO mark(sid,cid,score) VALUES(1,1,80),(2,1,85),(3,1,90),(1,2,60),(2,2,90),(3,2,75),(1,3,95),(2,3,75),(3,3,85);
