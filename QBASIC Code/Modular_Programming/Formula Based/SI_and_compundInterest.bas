REM WAP in QBasic that allows user to enter principal, time, rate.
REM Create a user defined function SI(P, T, R) to calculate simple interest and sub procedure CI(P, T, R) to Compound Interest.

REM Hint: [SI = PTR/100, CI= P( (1 + R/100)^T - 1)]

REM Example: Principle = 100000, Time = 5 Years, Rate = 1


DECLARE SUB CI(P, T, R)
DECLARE FUNCTION SI(P, T, R)


CLS

INPUT "Enter Principal, Time & Rate: "; P, T, R

CALL CI(P, T, R)

PRINT "The Simple Interest is: "; SI(P, T, R)

END



SUB CI (P, T, R)

    CIS = P * ((1 + R / 100) ^ T - 1)

    PRINT "The Compound Interest is: "; CIS

END SUB


FUNCTION SI (P, T, R)

    SI = P * T * R / 100

END FUNCTION

