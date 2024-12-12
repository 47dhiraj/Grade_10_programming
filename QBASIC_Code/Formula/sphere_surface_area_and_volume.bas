REM WAP to create a user defined function named AS() to receive radius entered by user to display surface area of sphere and sub program name VS() to display volume of a sphere.
REM Hint: [A = 4*PI*r^2, V=4/3*PI*r^3]



DECLARE SUB VS(r)
DECLARE FUNCTION SAS(r)


CLS

CONST PI = 3.14

INPUT "Enter radius of a sphere: "; r

PRINT "The surface area of the sphere is: "; SAS(r)

CALL VS(r)

END



SUB VS (r)

    PRINT "The volume of the sphere is: "; 4 / 3 * PI * r ^ 3

END SUB


FUNCTION SAS (r)

    SAS = 4 * PI * r ^ 2

END FUNCTION
