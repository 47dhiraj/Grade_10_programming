REM WAP in QBASIC that allows user to enter 3 different numbers.
REM Create a user defined function SMALL(A, B, C) that accepts three different numbers and returns the smallest number
REM and create sub procedure GREAT(A, B, C) that accepts three different numbers and returns the greatest number.


DECLARE FUNCTION SMALL(A, B, C)
DECLARE SUB GREAT(A, B, C)


CLS

INPUT "Enter 3 differnt numbers: "; A, B, C

PRINT "The smallest number among three numbers is: "; SMALL(A, B, C)

CALL GREAT(A, B, C)

END


FUNCTION SMALL (A, B, C)

    IF A <= B AND A <= C THEN

        S = A

    ELSEIF B <= A AND B <= C THEN

        S = B

    ELSE

        S = C

    END IF

    SMALL = S

END FUNCTION


SUB GREAT (A, B, C)

    IF A >= B AND A >= C THEN

        G = A

    ELSEIF B >= A AND B >= C THEN

        G = B

    ELSE

        G = C

    END IF

    PRINT "The Greatest number among three is: "; G

END SUB
