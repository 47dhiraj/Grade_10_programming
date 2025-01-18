'1
'1 2
'1 2 3
'1 2 3 4
'1 2 3 4 5

DECLARE SUB PATTERN

CLS

CALL PATTERN

END


SUB PATTERN

    FOR I = 1 TO 5

        FOR J = 1 TO I

            PRINT J;

        NEXT J

        PRINT

    NEXT I

END SUB
