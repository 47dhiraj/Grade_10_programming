DECLARE SUB CHECK_ODD_EVEN(N)

CLS

INPUT "Enter any number: "; N

CALL CHECK_ODD_EVEN(N)

END



SUB CHECK_ODD_EVEN (N)

    IF N MOD 2 = 0 THEN

        PRINT N; " is even number"

    ELSE

        PRINT N; "is odd number"

    END IF

END SUB

