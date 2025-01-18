REM WAP in QBASIC that allows user to enter radius of a circle.
REM Create a user defined function AOC() to find area of circle and sub procedure COC() to find circumference of circle.

REM Hint: [ Area = PI*r^2, circumference of circle = 2*PI*r]



DECLARE SUB COC(r)
DECLARE FUNCTION AOC(r)


CLS


REM U can create a global variable in QBasic using COMMON SHARED   OR using DIM SHARED  keyword.
'COMMON SHARED PI
'PI = 3.14


REM Creating a Constant and it's global by default.
CONST PI = 3.14

INPUT "Enter radius of a circle: "; r

CALL COC(r)

PRINT "The area of circle is: "; AOC(r)

END


SUB COC (r)

    C = 2 * PI * r

    PRINT "The circumference of circle is: "; C

END SUB


FUNCTION AOC (r)

    AOC = PI * r ^ 2

END FUNCTION

