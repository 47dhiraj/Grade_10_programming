REM To supply percentage from the keyboard and print Grade.

REM Create a sub procedure name Result(percent) and use the following conditions to display the result.


'Percentage                  Grade
'   <40                       Fail
'   >=40 to <60                C
'   >=60 to <80                B
'   >=80 to <=100              A
'   > 100                Invalid Percentage


DECLARE SUB RESULT(P)


CLS

INPUT "Enter overall percentage: "; P

CALL RESULT(P)

END



SUB RESULT (P)

    IF P < 40 THEN

        PRINT "Fail"

    ELSEIF P >= 40 AND P < 60 THEN

        PRINT "C"

    ELSEIF P >= 60 AND P < 80 THEN

        PRINT "B"

    ELSEIF P >= 80 AND P <= 100 THEN

        PRINT "A"

    ELSE

        PRINT "Invalid Percentage"

    END IF


END SUB

