REM A sequential data file contains some record of students with their id, name and class.
REM WAP to delete the records of specified students from student.dat data file.

CLS
OPEN "student.dat" FOR INPUT AS #1
OPEN "temp.dat" FOR OUTPUT AS #2

INPUT "Enter name of the students whose record is to be deleted: "; ns$

DO WHILE NOT EOF(1)

    INPUT #1, id, name$, class


    IF UCASE$(name$) <> UCASE$(ns$) THEN

        WRITE #2, id, name$, class

    ELSEIF UCASE$(name$) = UCASE$(ns$) THEN

        PRINT "Pariticular record deleted successfully !!"

    END IF

LOOP

CLOSE #1, #2

KILL "student.dat"
NAME "temp.dat" AS "student.dat"
END

