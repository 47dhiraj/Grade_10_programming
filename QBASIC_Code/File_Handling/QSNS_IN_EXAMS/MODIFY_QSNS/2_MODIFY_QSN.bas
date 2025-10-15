REM ...


OPEN "student.dat" FOR INPUT AS #1

OPEN "temp.dat" FOR OUTPUT AS #2

CLS

DO WHILE NOT EOF(1)

    INPUT #1, roll, name$, class, cmath, science, english, social, nepali, computer, optI

    obtained_marks = cmath + science + english + social + nepali + computer + optI

    percentage = (obtained_marks / 700) * 100

    WRITE #2, roll, name$, class, cmath, science, english, social, nepali, computer, optI, percentage

LOOP

CLOSE #1, #2

KILL "student.dat"

NAME "temp.dat" AS "student.dat"

PRINT "Percentage of each students calculated successfully !!"

END
