REM WAP to create sequential file student.dat to store the record of students as per user's choice (until user wants) such as stu_id, name, address, date of birth.

CLS

OPEN "student.dat" FOR OUTPUT AS #1

DO
    INPUT "Enter student id"; stu_id
    INPUT "Enter student name"; name$
    INPUT "Enter student address"; address$
    INPUT "Enter date of birth(y m d)"; dob$

    WRITE #1, stu_id, name$, address$, dob$

    INPUT "Want to keep more records ? Press Y for yes & N for no. "; choice$

LOOP WHILE UCASE$(choice$) = "Y"

CLOSE #1

END

