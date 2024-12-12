REM WAP to calculate area of a triangle using sub procedure and perimeter of triangle using function procedure,
REM [s=(a+b+c)/2, area=(s(s-a)(s-b)(s-c))], where a,b,c are three sides of a triangle, perimeter = a+b+c]


REM NOTE: s = (a + b + c) / 2 , here, s  is the semi perimeter of a triangle, used to calculate area


DECLARE SUB Area(a, b, c)
DECLARE FUNCTION Perimeter(a, b, c)


CLS

INPUT "Enter three sides of a triangle: "; a, b, c

p = Perimeter(a, b, c)

PRINT "The perimeter of the triangle is: "; p


CALL Area(a, b, c)

END



SUB Area (a, b, c)

    s = (a + b + c) / 2

    PRINT s

    REM AR = SQR(s * (s - a) * (s - b) * (s - c))

    AR = (s * (s - a) * (s - b) * (s - c)) ^ (1 / 2)

    PRINT "The Area of a triangle is: "; AR

END SUB


FUNCTION Perimeter (a, b, c)

    Perimeter = a + b + c

END FUNCTION

