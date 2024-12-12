REM A sequential data file student dat contains student id, student's name, address and date of birth of some students.
REM Write a program to copy all the records of those students whose age is greater than 15 to newstu.dat file.


CLS

OPEN "student.dat" FOR INPUT AS #1
OPEN "newstu.dat" FOR OUTPUT AS #2

currentYear = VAL(RIGHT$(DATE$, 4)) ' Extract current year from DATE$


DO WHILE NOT EOF(1)

    dobYear = VAL(RIGHT$(dob$, 4)) ' Extract current year from dob$

    INPUT #1, id, name$, address$, dob$

    'calculating age of the person
    age = currentYear - dobYear


    IF age > 15 THEN

        WRITE #2, id, name$, address$, dob$

    END IF

LOOP

CLOSE #1, #2

PRINT "Records filtered successfully !!"

END
