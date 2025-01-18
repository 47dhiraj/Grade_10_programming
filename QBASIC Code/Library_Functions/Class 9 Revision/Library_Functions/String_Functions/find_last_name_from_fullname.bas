CLS

INPUT "Enter your full name: "; fullName$


' Find the position of the last space manually
FOR i = LEN(fullName$) TO 1 STEP -1

    IF MID$(fullName$, i, 1) = " " THEN

        lastSpace = i

        EXIT FOR

    END IF

NEXT


' Extract the last name from the position of the last space
IF lastSpace > 0 THEN

    lastName$ = MID$(fullName$, lastSpace + 1)

    PRINT "Last name: "; lastName$

ELSE

    PRINT "Error: Please enter a full name with a last name."

END IF

END
