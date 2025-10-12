REM Create a sequential data file "stu.dat" to store name and marks of any three subjects also calculate total and percentages.
REM Program should terminate according to the user's choice


CLS

OPEN "stu.dat" FOR OUTPUT AS #1

DO

    INPUT "Enter the name & marks of first subject: "; subject1$, marks1
    INPUT "Enter the name & marks of second subject: "; subject2$, marks2
    INPUT "Enter the name & marks of third subject: "; subject3$, marks3

    total = marks1 + marks2 + marks3

    percentage = total / 300 * 100

    WRITE #1, subject1$, marks1, subject2$, marks2, subject3$, marks3, total, percentage


    INPUT "Want to store more exam records ? (Y/N) "; choice$

LOOP WHILE UCASE$(choice$) = "Y"


CLOSE #1

END