REM WAP to add 3 records to the existing data file emp.dat which contains employee name, post, salary and date of join (dd/mm/y)


CLS

OPEN "emp.dat" FOR APPEND AS #1

FOR I = 1 TO 3

    INPUT "Enter employee name, post, salary and Join date (dd/mm/y)"; name$, post$, salary, d$

    WRITE #1, name$, post$, salary, d$

NEXT I

PRINT "Data added successfully !"

CLOSE #1

END
