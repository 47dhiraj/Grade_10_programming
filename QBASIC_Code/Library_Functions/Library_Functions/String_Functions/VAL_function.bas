CLS

INPUT "Enter your birth year: "; birth_year

current_year$ = MID$(DATE$, 7, 4)

c_year = VAL(current_year$)

age = c_year - birth_year

PRINT
PRINT "Your age is:"; age

END

