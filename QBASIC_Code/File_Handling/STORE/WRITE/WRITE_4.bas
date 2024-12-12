REM WAP to create a sequential file "student.dat" to insert recrods such as student's name, roll numbers, class and dates of birth of some students.
REM The Program should allow users to insert only records of those students who belong to class 10.


CLS

OPEN "student.dat" FOR OUTPUT AS #1

DO

    INPUT "Enter studenet Name: "; name$

    INPUT "Enter student Roll No: "; r

    INPUT "Enter student Class: "; c

    INPUT "Enter student Date of Birth(y-m-d): "; dob$

    IF c = 10 THEN

        WRITE #1, name$, r, c, dob$

    END IF

    INPUT "Want to insert more records ? If yes press Y & if no press N."; choice$

LOOP WHILE UCASE$(choice$) = "Y"

CLOSE #1

END

