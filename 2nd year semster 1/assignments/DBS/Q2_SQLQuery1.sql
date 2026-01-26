CREATE DATABASE school;
CREATE TABLE Student(
student_no INT PRIMARY KEY,
student_name VARCHAR(50),
student_lastname VARCHAR(50),
student_Specialisation VARCHAR(4)
);

INSERT INTO students(student_no, student_name, student_lastname,student_Specialisation)
VALUES
(1224,'Peter','Josheps','DMV'),
(1225,'Nick','Saint','PRO'),
(1226,'Mpho','Mchunu','NET'),
(1227,'Thabisa','Van Niekerk','BAS'),
(1228,'Deon','Holmes','BMG');

SELECT * FROM students;

