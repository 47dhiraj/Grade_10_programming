REM Write a Program in QBASIC that allows user to enter radius and height.
REM Create a user defined function to calculate area of the base of cylinder and sub program to calculate volume of cylinder.

REM HINT: [ Area = Pi*r^2, Volume = Pi*r^2*h ]




DECLARE SUB Volume(r, h)
DECLARE FUNCTION Area(r)


CLS

REM: PI! = 3.14 only makes PI a float/decimal variable, it doesn't make PI a constant/global variable.

CONST PI = 3.14

INPUT "Enter radius and height of a Cylinder: "; r, h

PRINT "The area of base of cylinder is: "; Area(r)

CALL Volume(r, h)

END



SUB Volume (r, h)

    V = PI * r ^ 2 * h

    PRINT "The volume of a cylinder is: "; V

END SUB



FUNCTION Area (r)

    Area = PI * r ^ 2

END FUNCTION


