DECLARE FUNCTION CHECK_PRIME$ (N)

CLS

INPUT "Enter any number: "; Num

PRINT CHECK_PRIME$(Num)

END


FUNCTION CHECK_PRIME$ (N)

    FOR I = 1 TO N

        IF N MOD I = 0 THEN C = C + 1

    NEXT I


    IF C = 2 THEN
        CHECK_PRIME = "Prime number"
    ELSE
        CHECK_PRIME = "Composite number"
    END IF

END FUNCTION

