REM Create a user defined function REVERSE$(S$) to display reverse of the input string
REM and create sub procedure PALIN(N) to check whether the entered number is palindrome or not.


DECLARE FUNCTION REVERSE$(S$)
DECLARE SUB PALIN(N)


CLS

INPUT "Enter any string: "; S$

INPUT "Enter any number: "; N

PRINT "The reverse of the string is: "; REVERSE$(S$)

CALL PALIN(N)

END



FUNCTION REVERSE$ (S$)

    FOR I = LEN(S$) TO 1 STEP -1

        R$ = R$ + MID$(S$, I, 1)

    NEXT I


    REVERSE$ = R$

END FUNCTION


SUB PALIN (N)

    Org = N

    Rev = 0


    WHILE N <> 0

        R = N MOD 10

        Rev = Rev * 10 + R

        N = N \ 10

    WEND


    IF Org = Rev THEN

        PRINT Org; " is Palindrome"

    ELSE

        PRINT Org; " is not Palindrome"

    END IF



END SUB

