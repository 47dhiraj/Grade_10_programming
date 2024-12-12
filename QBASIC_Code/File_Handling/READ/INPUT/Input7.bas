REM A sequential data file "emp.dat" contains employees name, address, gender and salary.
REM WAP to display all information of employees whose salary is more than RS. 25000.

CLS

OPEN "emp.dat" FOR INPUT AS #1

PRINT "List of e having salary greater than NRS. 25000."
PRINT

DO WHILE NOT EOF(1)

    INPUT #1, name$, address$, gender$, salary

    IF salary > 25000 THEN

        PRINT name$, address$, gender$, salary

    END IF

LOOP


CLOSE #1

END

