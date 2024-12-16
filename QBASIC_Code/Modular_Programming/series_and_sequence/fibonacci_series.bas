REM  FIBONACCI SERIES


DECLARE SUB SERIES ( )

CLS
CALL SERIES
END

SUB SERIES ()

    A = 3
    B = 5

    FOR I = 1 TO 10

        PRINT A;

        C = A + B
        A = B
        B = C

    NEXT I

END SUB

