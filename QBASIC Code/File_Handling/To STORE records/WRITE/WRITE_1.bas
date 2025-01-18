REM WAP to create a sequential file "emp.txt" to store the record of a single employee such as emp_id, name, date of birth.


CLS


OPEN "emp.txt" FOR OUTPUT AS #1


INPUT "Enter employee id "; emp_id

INPUT "Enter employee name "; name$

INPUT "Enter date of birth(y-m-d) "; dob$


WRITE #1, emp_id, name$, dob$

CLOSE #1

END


