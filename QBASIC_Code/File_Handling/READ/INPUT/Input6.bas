REM A sequential data file employee.dat contains some records under the fields name employee name, posts, dates of joining and salaries.
REM Write a program to display the records of those employees whose month of join date is the current month of the system.


CLS

OPEN "employee1.dat" FOR INPUT AS #1


WHILE NOT EOF(1)


    INPUT #1, emp_name$, post$, doj$, salary

    IF LEFT$(DATE$, 2) = LEFT$(doj$, 2) THEN

        PRINT emp_name$, post$, doj$, salary

    END IF

WEND

CLOSE #1

END

