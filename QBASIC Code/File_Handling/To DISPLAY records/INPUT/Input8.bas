REM A sequential data file "STAFF.DAT" has several records related with name, post and salary.
REM WAP to display all the records as well as count and display total number of records.


CLS

count = 0

OPEN "STAFF.DAT" FOR INPUT AS #1

DO WHILE NOT EOF(1)

    INPUT #1, name$, post$, salary

    PRINT
    PRINT name$, post$, salary

    count = count + 1

LOOP

PRINT
PRINT "Total number of records = "; count

CLOSE #1

END

