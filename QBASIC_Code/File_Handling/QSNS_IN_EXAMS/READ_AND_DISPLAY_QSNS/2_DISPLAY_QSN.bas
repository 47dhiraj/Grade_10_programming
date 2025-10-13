REM A sequential data file called "data.dat" has stored data under the filed heading item_name, quantity and rate.
REM Write a program to display all the records with total.


CLS

OPEN "data.dat" FOR INPUT AS #1

PRINT "List of Item records with total: "
PRINT

DO WHILE NOT EOF(1)


    INPUT #1, itemName$, quantity, rate

    total = quantity * rate

    PRINT itemName$; quantity; rate; total

LOOP

CLOSE #1

END