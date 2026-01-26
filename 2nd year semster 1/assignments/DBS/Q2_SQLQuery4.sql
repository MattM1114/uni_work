EXEC sp_rename 'students.student_Specialisation', 'student_module', 'COLUMN';

SELECT COLUMN_NAME
FROM INFORMATION_SCHEMA.COLUMNS
WHERE TABLE_NAME = 'students';
