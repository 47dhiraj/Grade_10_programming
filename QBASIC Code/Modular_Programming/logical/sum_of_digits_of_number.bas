DECLARE SUB SUM(N)

CLS

INPUT "Enter a number: "; N

CALL SUM(N)

END


SUB SUM (N)

    S = 0
    Num = N

    WHILE N <> 0

        R = N MOD 10

        S = S + R

        N = N \ 10

    WEND

    PRINT "Sum of digits of "; Num; " is: "; S

END SUB
