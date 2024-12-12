REM Check if the 3-digit number is Armstrong or not

CLS

INPUT "Enter 3-digit number: "; N

Org = N
Sum = 0


WHILE N <> 0

    R = N MOD 10

    REM 3-digit number vayera power 3 gareko, 4-digit number vako vaye power 4 garnu parthyo
    Sum = Sum + R ^ 3

    N = N \ 10

WEND


IF Org = Sum THEN
    PRINT Org; " is an Armstrong number."
ELSE
    PRINT Org; " is not an Armstrong number."
END IF


END
