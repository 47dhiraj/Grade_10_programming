REM Write a program in QBASIC that ask user to enter length, breadth and height of a cuboid.
REM Create a user defined function to find total surface area of cuboid and sub procedure to find volume of cuboid.

REM HINT: [ TSA = 2(lb + bh), V = lbh ]


DECLARE SUB Volume(l, b, h)
DECLARE FUNCTION T.S.A(l, b, h)


CLS

INPUT "Enter length, breadth & height of a Cuboid: "; l, b, h

CALL Volume(l, b, h)

PRINT "The Total Surface Area (TSA) of a cuboid is : "; T.S.A(l, b, h)

END



SUB Volume (l, b, h)

    V = l * b * h

    PRINT "The volume of cuboid is: "; V

END SUB



FUNCTION T.S.A (l, b, h)

    T.S.A = 2 * (l * b + b * h)

END FUNCTION

