REM WAP to check whether the supplied number is prime or not using a function procedure.


DECLARE FUNCTION PRIME$(N)


CLS

INPUT "Enter any number: "; N

PRINT "The given number is "; PRIME$(N)

END


FUNCTION PRIME$ (N)

    REM C means counter

    C = 0

    FOR I = 1 TO N

        IF N MOD I = 0 THEN C = C + 1

    NEXT I


    IF C = 2 THEN

        PRIME = "Prime"

    ELSE

        PRIME = "Composite"

    END IF

END FUNCTION
