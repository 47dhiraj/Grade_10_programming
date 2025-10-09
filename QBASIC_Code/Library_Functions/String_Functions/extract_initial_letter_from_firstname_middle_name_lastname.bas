CLS

INPUT "Enter your full name (First Middle Last): "; name$


' Logic to extract firstName letter, middleName letter and lastName letter

firstLetter$ = MID$(name$, 1, 1)

name$ = MID$(name$, INSTR(name$, " ") + 1)

middleLetter$ = MID$(name$, 1, 1)

lastLetter$ = MID$(name$, INSTR(name$, " ") + 1, 1)


PRINT "Your name short form : "; firstLetter$; "."; middleLetter$; "."; lastLetter$

END

