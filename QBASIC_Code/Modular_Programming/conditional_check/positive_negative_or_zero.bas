DECLARE SUB CHECKSIGN(N)

CLS

INPUT "Enter any number: "; N

CALL CHECKSIGN(N)

END


SUB CHECKSIGN (N)

    IF N > 0 THEN

        PRINT "The number "; N; " is positive."

    ELSEIF N < 0 THEN

        PRINT "The number "; N; " is negative."

    ELSE

        PRINT "The number is zero."

    END IF

END SUB
