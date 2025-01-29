DECLARE SUB TEST(A$)


CLS

A$ = "PABSON"

CALL TEST(A$)

END


SUB TEST (A$)

    FOR I = 1 TO LEN(A$)

        B$ = MID$(A$, I, 1)

        C$ = C$ + B$

    NEXT I

    PRINT C$

END SUB
