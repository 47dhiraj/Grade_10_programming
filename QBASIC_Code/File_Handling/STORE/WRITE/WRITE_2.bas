REM WAP to create sequential file "student.dat" to store the records of 5 students such as stu_id, name, address, date of birth and phone.


CLS

OPEN "student.dat" FOR OUTPUT AS #1

FOR I = 1 TO 2

    INPUT "Enter student ID: "; stu_id

    INPUT "Enter student Name: "; name$

    INPUT "Enter student Address: "; address$

    INPUT "Enter date of birth(y-m-d): "; dob$

    INPUT "Enter phone no. of student: "; phone$

    WRITE #1, stu_id, name$, address$, dob$, phone$

NEXT I

CLOSE #1

END

