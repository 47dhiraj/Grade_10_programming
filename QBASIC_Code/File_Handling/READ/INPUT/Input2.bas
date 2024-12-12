REM A sequential data file Student.dat contains student's names, roll numbers, addresses, classes and date of births of some students
REM WAP to display all the records of a this fil.


CLS

OPEN "Student.dat" FOR INPUT AS #1

DO WHILE NOT EOF(1)


    INPUT #1, name$, roll_no, address$, class, dob$

    PRINT name$, roll_no, address$, class, dob$

LOOP

CLOSE #1

END

