DECLARE SUB CHECK(N)

CLS

INPUT "Enter a number: "; N

CALL CHECK(N)

END


SUB CHECK (N)

    IF N MOD 4 = 0 AND N MOD 6 = 0 THEN

        PRINT N; "is exactly divisible by 4 & 6";

    ELSE

        PRINT N; "is not exactly divisible by 4 & 6";

    END IF

END SUB

