CLS

INPUT "Enter a number : "; N

REM Org mean, original user inputed value
Org = N

REM Rev mean, in reverse order
Rev = 0


REM N ko value 0 navaye samma loop run garne

WHILE N <> 0

    R = N MOD 10

    Rev = Rev * 10 + R

    REM \ means, integer type division (i.e not float division)
    N = N \ 10

WEND


IF Org = Rev THEN
    PRINT Org; " is Palindrome"
ELSE
    PRINT Org; " is not Palindrome"
END IF


END
