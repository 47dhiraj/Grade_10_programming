'  P
' EPA
'NEPAL

DECLARE SUB PATTERN (S$)

CLS

S$ = "NEPAL"
CALL PATTERN(S$)

END

SUB PATTERN (S$)

    A = 3

    FOR I = 1 TO LEN(S$) STEP 2

        PRINT TAB(A); MID$(S$, A, I)
        A = A - 1

    NEXT I

END SUB
