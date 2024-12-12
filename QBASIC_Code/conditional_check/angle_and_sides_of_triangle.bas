REM WAP to enter three angles and three sides of a triangle and create sub procedure to display if it is acute angle, obtuse angle or right-angled triangle.
REM AND, create a function procedure which utilizes three sides of a triangle to display whether the triangle is equilateral, isosceles or scalene triangle or not.


DECLARE SUB CHECK (A, B, C)
DECLARE FUNCTION CHECK$(SA, SB, SC)



CLS

INPUT "Enter three angles of a triangle: "; A, B, C

INPUT "Enter three sides of a triangle: "; SA, SB, SC

CALL CHECK(A, B, C)

C$ = CHECK$(SA, SB, SC)

PRINT C$

END


SUB CHECK (A, B, C)


    IF A + B + C <> 180 THEN

        PRINT "These angles doesn't form a valid traingle."

    ELSE


        IF A < 90 AND B < 90 AND C < 90 THEN

            PRINT "All angles less than 90. So, it is acute angled triangle."

        ELSEIF A = 90 OR B = 90 OR C = 90 THEN

            PRINT "One angle is exactly 90. So, it right angled triangle."

        ELSE

            PRINT "One angle is greater than 90. So, it is obtuse angled triangle."

        END IF


    END IF


END SUB


FUNCTION CHECK$ (SA, SB, SC)


    IF SA <= 0 OR SB <= 0 OR SC <= 0 THEN

        O$ = "Since all sides must be greater than 0. So, it doesn't form a valid triangle."

    ELSE

        IF SA = SB AND SB = SC THEN

            O$ = "Equilateral Triangle"

        ELSEIF SA = SB OR SB = SC OR SC = SA THEN

            O$ = "Isosceles Triangle"

        ELSEIF SA <> SB AND SB <> SC THEN

            O$ = "Scalene Triangle"

        END IF


    END IF


    CHECK$ = O$

END FUNCTION



