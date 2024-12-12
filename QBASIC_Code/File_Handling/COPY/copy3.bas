REM A sequential data file student dat contains student id, student's name, address and date of birth of some students.
REM Write a program to copy all the records of those students whose age is greater or equals to 18 to voterstu.dat file.


CLS

OPEN "student.dat" FOR INPUT AS #1
OPEN "voterstu.dat" FOR OUTPUT AS #2

CurrentYear = VAL(RIGHT$(DATE$, 4))
CurrentMonth = VAL(MID$(DATE$, 4, 2))
CurrentDay = VAL(LEFT$(DATE$, 2))

DO WHILE NOT EOF(1)

    INPUT #1, id%, name$, address$, dob$

    BirthYear = VAL(RIGHT$(dob$, 4))
    BirthMonth = VAL(MID$(dob$, 4, 2))
    BirthDay = VAL(LEFT$(dob$, 2))

    Age = CurrentYear - BirthYear

    ' Adjust age if birth date hasn't occurred yet this year
    IF (CurrentMonth < BirthMonth) OR (CurrentMonth = BirthMonth AND CurrentDay < BirthDay) THEN
        Age = Age - 1
    END IF

    IF Age >= 18 THEN
        WRITE #2, id%, name$, address$, dob$
    END IF

LOOP

CLOSE #1, #2
PRINT "Records filtered successfully !!"
END
