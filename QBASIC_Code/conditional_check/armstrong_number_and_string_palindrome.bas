REM WAP to enter any string and 3-digit number and then create a sub procedure program to check whether the entered number is armstrong or not
REM and create a function procedure to check whether the entered string is palindrome or not.


DECLARE SUB ARMSTRONG(N)
DECLARE FUNCTION REVERSE$(S$)


CLS

INPUT "Enter 3-digit number: "; N

INPUT "Enter any string: "; S$


CALL ARMSTRONG(N)

PRINT "The inputed string is "; REVERSE$(S$)


END


SUB ARMSTRONG (N)


    Org = N
    Sum = 0


    WHILE N <> 0

        R = N MOD 10

        REM If the question has 4-digit number, then power 4 should be written
        Sum = Sum + R ^ 3

        N = N \ 10

    WEND


    PRINT "Power 3 raised sum: "; Sum


    IF Org = Sum THEN

        PRINT Org; " is an Armstrong number."

    ELSE

        PRINT Org; " is not an Armstrong number."

    END IF


END SUB


FUNCTION REVERSE$ (S$)

    FOR I = LEN(S$) TO 1 STEP -1

        R$ = R$ + MID$(S$, I, 1)

    NEXT I


    IF S$ = R$ THEN

        REVERSE$ = "Palindrome"

    ELSE

        REVERSE$ = "not Palindrome"

    END IF


END FUNCTION

