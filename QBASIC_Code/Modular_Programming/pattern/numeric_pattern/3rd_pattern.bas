'1 2 3 4 5
'2 3 4 5
'3 4 5
'4 5
'5

DECLARE SUB Pattern

CLS

CALL Pattern

END


SUB Pattern

    FOR I = 1 TO 5

        FOR J = I TO 5

            PRINT J;

        NEXT J

        PRINT

    NEXT I

END SUB
