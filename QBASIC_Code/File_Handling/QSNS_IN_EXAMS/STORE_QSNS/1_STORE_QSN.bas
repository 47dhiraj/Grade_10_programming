REM WAP to create a sequential data file "salary.dat" to store name, salary and post according to the need of the user.

CLS

OPEN "salary.dat" FOR OUTPUT AS #1



DO

    INPUT "Enter employee name, salary and post: "; name$, salary, post$

    WRITE #1, name$, salary, post$


    INPUT "Want to store more employee records ? (Y/N) "; choice$

LOOP WHILE UCASE$(choice$) = "Y"



CLOSE #1


PRINT "Employee records successfully stored !!"

END