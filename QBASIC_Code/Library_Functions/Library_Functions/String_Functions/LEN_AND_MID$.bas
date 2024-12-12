
REM WAP to count occurences of 'R' and 'S' in given sentence/string.

CLS

INPUT "Enter a sentence (string): "; s$

s$ = UCASE$(s$)


FOR I = 1 TO LEN(s$)

    IF MID$(s$, I, 1) = "R" THEN r = r + 1

    IF MID$(s$, I, 1) = "S" THEN s = s + 1

NEXT I

PRINT "Total occurences of R: "; r

PRINT "Total occurences of S: "; s

END

