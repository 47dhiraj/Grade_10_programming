REM WAP in QBASIC that allows user to enter principal, time, rate.
REM Create a user define function SI(P, T, R) to calculate simple interest and sub procedure AMT(P, I) to calculate amount.

REM Hint: [SI = PTR/100, A = P + I]




DECLARE FUNCTION SI(P, T, R)
DECLARE SUB AMT(P, I)


CLS

INPUT "Enter the Principal, Time & Rate: "; P, T, R

I = SI(P, T, R)
PRINT "The Simple Interest is: "; I

CALL AMT(P, I)

END



SUB AMT (P, I)

    PRINT "The Total Amount is: "; P + I

END SUB


FUNCTION SI (P, T, R)

    SI = P * T * R / 100

END FUNCTION

