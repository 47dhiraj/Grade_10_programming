REM WAP to convert USD into NPR

DECLARE SUB CONVERT(USD, R)


CLS

INPUT "Enter USD amount: "; USD

INPUT "Enter current money exchange rate: "; R

CALL CONVERT(USD, R)

END


SUB CONVERT (USD, R)

    NPR = USD * R

    PRINT "The Nepalese currency value is: "; NPR

END SUB
