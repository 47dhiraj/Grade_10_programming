' QBASIC program to count number of vowels, consonants in a string/word.


CLS

vowels = 0
consonants = 0

INPUT "Enter a string/word: "; s$

s$ = LCASE$(s$)


FOR i = 1 TO LEN(s$)

    ch$ = MID$(s$, i, 1)

    IF ch$ >= "a" AND ch$ <= "z" THEN

        IF ch$ = "a" OR ch$ = "e" OR ch$ = "i" OR ch$ = "o" OR ch$ = "u" THEN

            vowels = vowels + 1

        ELSE
            consonants = consonants + 1

        END IF

    END IF

NEXT i

PRINT "Vowels Count: "; vowels
PRINT "Consonants Count: "; consonants

END

