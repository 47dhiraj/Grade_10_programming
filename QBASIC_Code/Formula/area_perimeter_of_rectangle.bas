REM Write a program in QBASIC that allows user to enter length and breadth of a rectangular room.
REM Create a user defined function to calculate area and sub program/procedure to calculate Permiter.

REM HINT: [ A = L * B, P = 2 (L + B) ]


REM we can also declare function in the top of CLS, like below:
REM DECLARE FUNCTION Area(L, B)
REM DECLARE SUB Perimeter(L, B)


CLS

DECLARE FUNCTION Area(L, B)
DECLARE SUB Perimeter(L, B)

INPUT "Enter length and breadth of a rectangle: "; L, B

REM CALL Perimeter(L, B)

A = Area(L, B)
PRINT "The area is : "; A


CALL Perimeter(L, B)

END


SUB Perimeter (L, B)

    P = 2 * (L + B)

    PRINT "The perimeter is: "; P

END SUB


FUNCTION Area (L, B)

    Area = L * B

END FUNCTION
