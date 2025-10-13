REM Write a program to read data from the sequential data filename "std.dat" which contains student's name, roll no and marks of English, Nepali, Maths and Computer of few students.
REM Display the result with all the information of those students whose marks in computer is more than 40.


CLS

OPEN "std.dat" FOR INPUT AS #1

PRINT "List of studdents whose has more than 40 mark in computer: "
PRINT

DO WHILE NOT EOF(1)

    INPUT #1, name$, rollno, english, nepali, maths, computer


    IF computer > 40 THEN

        PRINT name$; rollno; english; nepali; maths; computer

    END IF

LOOP

CLOSE #1

END