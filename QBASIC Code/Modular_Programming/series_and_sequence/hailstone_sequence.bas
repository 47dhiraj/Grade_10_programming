DECLARE SUB SERIES ( )

CLS
CALL SERIES
END

SUB SERIES

    A = 7

    FOR I = 1 TO 10

        PRINT A;

        IF A MOD 2 = 0 THEN
            A = A \ 2
        ELSE
            A = A * 3 + 1
        END IF

    NEXT I

END SUB

