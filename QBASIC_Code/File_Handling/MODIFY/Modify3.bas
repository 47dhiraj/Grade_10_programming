REM WAP to increase the marks of math subject of each students by 15 in student.dat file.

CLS

OPEN "student.dat" FOR INPUT AS #1
OPEN "temp.dat" FOR OUTPUT AS #2

WHILE NOT EOF(1)

    INPUT #1, name$, rollno, math, science, english, computer

    math = math + 15

    WRITE #2, name$, rollno, math, science, english, computer

WEND

PRINT "Modification of math marks successfully done!"

CLOSE #1, #2

KILL "student.dat"

NAME "temp.dat" AS "student.dat"

END

