DECLARE SUB CHECK_PRIME (N)

CLS

INPUT "Enter any number: "; Num

CALL CHECK_PRIME(Num)

END


SUB CHECK_PRIME (N)

    FOR I = 1 TO N

        IF N MOD I = 0 THEN C = C + 1

    NEXT I


    IF C = 2 THEN
        PRINT "Prime number"
    ELSE
        PRINT "Composite number"
    END IF

END SUB
