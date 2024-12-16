REM WAP to create a user defined function CHECKER$(N) to check whether the entered number is positive, negative or zero.
REM And, Create a sub program name OECHECK(N) to check whether the entered number is odd or even.


DECLARE FUNCTION CHECKER$(N)
DECLARE SUB OECHECK(N)


CLS

INPUT "Enter any number: "; N

CALL OECHECK(N)

PRINT "The given number is "; CHECKER$(N)

END


SUB OECHECK (N)

    IF N MOD 2 = 0 THEN

        PRINT "The given number is even."

    ELSE

        PRINT "The given number is odd."

    END IF

END SUB


FUNCTION CHECKER$ (N)

    IF N > 0 THEN

        CHECKER$ = "Positive Number"

    ELSEIF N < 0 THEN

        CHECKER$ = "Negative number"

    ELSE

        CHECKER$ = "Zero"

    END IF

END FUNCTION


