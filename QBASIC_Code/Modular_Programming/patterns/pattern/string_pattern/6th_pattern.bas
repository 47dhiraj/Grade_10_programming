CLS

S$ = "SCIENCE"

A = 4

FOR I = 1 TO LEN(S$) STEP 2

    PRINT TAB(A); MID$(S$, A, I)

    A = A - 1

NEXT I

END

