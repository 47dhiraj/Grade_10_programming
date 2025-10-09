' QBASIC program to check if a character is a vowel or consonant

CLS


INPUT "Enter a string/word: "; ch$

' Convert character to lowercase using LCASE$
chl$ = LCASE$(ch$)

' Check if the character is a vowel
IF chl$ = "a" OR chl$ = "e" OR chl$ = "i" OR chl$ = "o" OR chl$ = "u" THEN

    PRINT ch$; " is a vowel."

ELSEIF chl$ >= "a" AND chl$ <= "z" THEN

    PRINT ch$; " is a consonant."

ELSE
    PRINT ch$; " is not an alphabet character."

END IF


END

