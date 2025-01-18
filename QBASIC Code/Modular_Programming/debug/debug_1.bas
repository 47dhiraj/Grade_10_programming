REM Rewrite the given program after correcting the bugs (Debugging)

REM Print the input integer in reverse order

'DECLARE SUB REV(N)
'CLS
'INPUT "Enter an integer number:"; NO
'CALL REV(N)
'END

'SUB REV (N)
'A = N
'WHILE A = 0
'R = A MOD 10
'S = S * 10 + R
'A = A \ 10
'NEXT
'DISPLAY "Reverse"; S
'END SUB


DECLARE SUB REV(N)


CLS

INPUT "Enter an integer number :"; N

CALL REV(N)

END


SUB REV (N)

    A = N

    WHILE A <> 0

        R = A MOD 10

        S = S * 10 + R

        A = A \ 10

    WEND

    PRINT "Reverse Order: "; S

END SUB


