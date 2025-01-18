REM One way

DECLARE SUB DISP()

CLS
CALL DISP
END

SUB DISP ()

    A = 1
    B = 1

    FOR I = 1 TO 10

        PRINT A; ",";

        A = A + B
        B = B + 1

    NEXT I

END SUB
