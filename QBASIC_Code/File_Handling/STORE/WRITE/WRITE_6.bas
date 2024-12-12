REM Create a sequential data file stu.dat to store name and marks of any three subjects also calculate total and percentages only for 5 students

CLS

OPEN "stu.dat" FOR OUTPUT AS #1

FOR I = 1 TO 5

    INPUT "Enter the name of first subject & it's mark: "; subject1$, marks1

    INPUT "Enter the name of second subject & it's mark: "; subject2$, marks2

    INPUT "Enter the name of third subject & it's mark: "; subject3$, marks3

    total = marks1 + marks2 + marks3

    percentage = total / 300 * 100

    WRITE #1, subject1$, marks1, subject2$, marks2, subject3$, marks3, total, percentage

NEXT I

CLOSE #1

END
