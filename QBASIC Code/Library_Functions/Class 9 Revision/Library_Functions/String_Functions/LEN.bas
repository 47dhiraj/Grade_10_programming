
REM Write a program to input two string and print longest among them

CLS

INPUT "Enter first string: "; a$
INPUT "Enter second string: "; b$

'INPUT "Enter first and second strings: "; a$, b$

IF LEN(a$) > LEN(b$) THEN

    PRINT a$; " is longest string."

ELSE

    PRINT b$; " is longest string."

END IF

END

