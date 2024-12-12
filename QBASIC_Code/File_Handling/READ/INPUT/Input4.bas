REM Assume that there are some records in student.dat file which consists of id, name and class of some students.
REM Write a program to search a student by its name in that data file If the data is found display whole record and if data is not found display the message as Record Not Found!

CLS

OPEN "students.dat" FOR INPUT AS #1

INPUT "Enter the name you want to search: "; n$

count = 0

WHILE NOT EOF(1)

    INPUT #1, id, name$, class

    IF UCASE$(name$) = UCASE$(n$) THEN

        count = count + 1

        PRINT id, name$, class

    END IF

WEND

IF count <> 0 THEN

    PRINT
    PRINT count; "matching records found."

ELSE

    PRINT "No Records Found !!"

END IF

END
