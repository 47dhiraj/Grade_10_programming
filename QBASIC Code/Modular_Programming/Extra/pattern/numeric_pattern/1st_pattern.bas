'1 2 3 4 5
'1 2 3 4
'1 2 3
'1 2
'1

DECLARE SUB PATTERN()

CLS

CALL PATTERN

END


SUB PATTERN ()

    FOR I = 5 TO 1 STEP -1

        FOR J = 1 TO I

            PRINT J;

        NEXT J

        PRINT

    NEXT I


END SUB
