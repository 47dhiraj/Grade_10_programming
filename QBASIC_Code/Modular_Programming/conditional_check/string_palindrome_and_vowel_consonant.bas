REM Create a user defined function that allows user to enter any string and checke whether the given string is palindrome or not.
REM And, create a sub procedure to count and display the vowel and constant used in that string.


DECLARE FUNCTION REV$(S$)
DECLARE SUB COUNT(S$)


CLS

INPUT "Enter any string: "; S$

R$ = REV$(S$)

PRINT R$

CALL COUNT(S$)

END


REM Function to reverse a string and check it string is palindrome or not
FUNCTION REV$ (S$)

    FOR I = LEN(S$) TO 1 STEP -1

        REM PRINT MID$(S$, I, 1)

        T$ = T$ + MID$(S$, I, 1)

    NEXT I


    IF S$ = T$ THEN

        REV$ = "String is Palindrome"

    ELSE

        REV$ = "String is not Palindrome"

    END IF

END FUNCTION




SUB COUNT (S$)

    FOR I = 1 TO LEN(S$)

        L$ = LCASE$(MID$(S$, I, 1))


        IF L$ = "a" OR L$ = "e" OR L$ = "i" OR L$ = "o" OR L$ = "u" THEN

            V = V + 1

            PRINT L$

        ELSE

            C = C + 1

            PRINT L$

        END IF

    NEXT I


    PRINT "Vowel Counts = "; V

    PRINT "Consonant Counts = "; C

END SUB
