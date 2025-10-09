DECLARE FUNCTION CHECKPRIME$ (N)

CLS

INPUT "Enter any number: "; N

PRINT CHECKPRIME$(N)

END


FUNCTION CHECKPRIME$ (N)

    C = 0

    FOR I = 1 TO N

        IF N MOD I = 0 THEN C = C + 1

    NEXT I


    IF C = 2 THEN

        CHECKPRIME = "Prime number"

    ELSE

        CHECKPRIME = "Composite number"

    END IF

END FUNCTION

