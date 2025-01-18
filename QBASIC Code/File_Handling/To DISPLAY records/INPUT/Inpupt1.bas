REM A sequential data file "Student.dat" contains student's names, roll numbers, addresses, classes and date of births of some students.
REM WAP to display a single records of this file.


CLS

OPEN "Student.dat" FOR INPUT AS #1

INPUT #1, name$, roll_no, address$, class, dob$

PRINT name$, roll_no, address$, class, dob$

CLOSE #1

END

