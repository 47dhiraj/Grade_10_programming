REM WAP to enter a number and then create a user defined function square(N) to calculate the square,
REM And, create a sub procedure to check whether the number is perfect square or not.



DECLARE FUNCTION SQUARE(N)
DECLARE SUB PERFECT_SQUARE(N)


CLS

INPUT "Enter any number: "; N

PRINT "Square of the number is"; SQUARE(N)

CALL PERFECT_SQUARE(N)

END


FUNCTION SQUARE (N)

    REM For finding square root: SR = SQR(N)

    S = N ^ 2

    SQUARE = S

END FUNCTION


SUB PERFECT_SQUARE (N)

    REM Finding Square root of a number
    SR = SQR(N)
    PRINT "Squre Root is: "; SR


    REM INT(SR) vannale, yedi square root float ma aako cha vane, teslai int ma type cast garcha for checking if both are equal or not
    IF SR = INT(SR) THEN

        PRINT "Number is Perfect Square"

    ELSE

        PRINT "Number is not perfect square"

    END IF

END SUB
