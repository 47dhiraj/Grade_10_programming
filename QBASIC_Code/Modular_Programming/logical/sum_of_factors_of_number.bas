REM WAP FACTOR(N) to display sum of factors of a supplied number using a function procedure.


DECLARE FUNCTION FACTOR (N)


CLS

INPUT "Enter any number: "; N

F = FACTOR(N)

PRINT "The sum of factors of given number is: "; F

END


FUNCTION FACTOR (N)

    SUM = 0

    FOR I = 1 TO N


        IF N MOD I = 0 THEN SUM = SUM + I



        'IF N MOD I = 0 THEN

        'SUM = SUM + I

        'ELSE

        'SUM = SUM

        'END IF


    NEXT I

    FACTOR = SUM

END FUNCTION
