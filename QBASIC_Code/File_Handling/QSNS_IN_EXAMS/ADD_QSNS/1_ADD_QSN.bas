REM Write a program to open data file "new.dat" which may contain name, address, phone no and salary.
REM The program should allow user to add few records on it.

CLS

OPEN "new.dat" FOR APPEND AS #1

DO

    INPUT "Enter the name: "; name$

    INPUT "Enter the address: "; address$

    INPUT "Enter the phone no. "; phone$

    INPUT "Enter the salary: "; salary


    WRITE #1, name$, address$, phone$, salary


    INPUT "Want to add more records ? (Y/N) "; c$


LOOP WHILE LCASE$(c$) = "y"


CLOSE #1

PRINT "Records have be added successfully !!"

END