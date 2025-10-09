REM A sequential file employee.dat contains employees names, addresses, posts, and salaries of some staff.
REM WAP to display the records of those whose post is Manager and salary is greater than 50,000.


CLS

OPEN "employee.dat" FOR INPUT AS #1

WHILE NOT EOF(1)

    INPUT #1, name$, address$, post$, salary

    IF UCASE$(post$) = "MANAGER" AND salary > 50000 THEN

        PRINT name$, address$, post$, salary

    END IF

WEND

CLOSE #1

END

