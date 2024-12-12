DECLARE SUB SERIES ( )

CLS
CALL SERIES
END

SUB SERIES ()

    FOR I = 1 TO 5

        A = A + 10 ^ (I - 1)

        PRINT I * A;

    NEXT I

END SUB

