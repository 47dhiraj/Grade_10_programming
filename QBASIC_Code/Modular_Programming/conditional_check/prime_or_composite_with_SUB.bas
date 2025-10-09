DECLARE SUB CHECKPRIME (N)

CLS

INPUT "Enter any number: "; N

CALL CHECKPRIME(N)

END


SUB CHECKPRIME (N)

    C = 0

    FOR I = 1 TO N

        IF N MOD I = 0 THEN C = C + 1

    NEXT I


    IF C = 2 THEN

        PRINT "Prime number"

    ELSE

        PRINT "Composite number"

    END IF

END SUB
