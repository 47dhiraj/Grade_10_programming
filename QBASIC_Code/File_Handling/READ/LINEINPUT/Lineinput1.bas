REM A sequential data file "Student.dat" contains student's names, roll numbers, addresses, classes and date of births of some students.
REM WAP to display a single records of this file.


CLS

OPEN "Student.dat" FOR INPUT AS #1

LINE INPUT #1, record$

PRINT record$

CLOSE #1

END

