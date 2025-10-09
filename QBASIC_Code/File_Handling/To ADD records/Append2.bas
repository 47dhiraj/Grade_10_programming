REM WAP to store some records inside the data file Result.dat that contains roll number, name, marks in eight different subjects, total and average of some students.

CLS

' Declaring marks array of size 8
DIM marks(8) AS INTEGER

' Opening the file before doing any kind of operation
OPEN "Result.dat" FOR APPEND AS #1


DO

    ' Input roll no & name of the student
    INPUT "Enter student roll no & name: "; rollno, name$

    total = 0


    ' Input marks for 8 subjects
    FOR i = 1 TO 8

        PRINT "Enter Subject "; i; " marks:";

        INPUT marks(i)

        total = total + marks(i)

    NEXT i


    ' Calculate Average
    average = total / 8

    ' Append student record to the "Result.dat" file
    WRITE #1, rollno, name$, marks(1), marks(2), marks(3), marks(4), marks(5), marks(6), marks(7), marks(8), total, average

    ' Ask if the user want to add more records/data
    INPUT "Do you want to add more records. If Yes then press Y, if not then press N."; choice$


LOOP WHILE UCASE$(choice$) = "Y"

' Close the File
CLOSE #1

PRINT "Records have been successfully added in Result.dat file !"

END

