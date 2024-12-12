REM WAP to copy all the records of class.dat to a new file School.dat.


CLS

OPEN "class.dat" FOR INPUT AS #1

OPEN "school.dat" FOR OUTPUT AS #2


DO WHILE NOT EOF(1)

    INPUT #1, name$, rollno, class, address$

    WRITE #2, name$, rollno, class, address$

LOOP

PRINT "All records copied successfully !!"

CLOSE #1, #2

END
