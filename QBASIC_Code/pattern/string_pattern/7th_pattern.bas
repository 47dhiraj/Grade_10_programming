CLS

S$ = "SCIENCE"

P = 1

L = LEN(S$)

FOR I = 1 TO 4

    PRINT MID$(S$, P, L)

    P = P + 1

    L = L - 2

NEXT I

END

