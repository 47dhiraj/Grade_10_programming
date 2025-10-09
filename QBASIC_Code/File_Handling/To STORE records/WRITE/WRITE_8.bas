REM Create a sequential data file EXAM.TRY to store name, address, age and date of birth(mm-dd--yyyy).
REM Program should prompt for continuation after each and every record.


CLS

OPEN "EXAM.TRY" FOR OUTPUT AS #1

DO

    INPUT "Enter name, address, age & dob(mm-dd-yyyy): "; name$, address$, age, dob$

    WRITE #1, name$, address$, age, dob$


    INPUT "Do you want to continue to store records ? Press Y if yes, N if no."; choice$

LOOP WHILE UCASE$(choice$) = "Y"

CLOSE #1

PRINT
PRINT "Records successfully stored in EXAM.TRY !"

END
