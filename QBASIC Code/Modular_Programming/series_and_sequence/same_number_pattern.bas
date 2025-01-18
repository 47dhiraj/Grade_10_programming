REM Pattern Generation Series

DECLARE SUB SERIES()

CLS
CALL SERIES
END

SUB SERIES

    A = 1

    FOR I = 1 TO 5

        PRINT A;

        A = A * 10 + 1

    NEXT I

END SUB
