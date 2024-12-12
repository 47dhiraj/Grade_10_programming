REM Convert Fahrenheit to Celsius

DECLARE SUB CONVERT(F)

CLS

INPUT "Enter temperature in Fahrenheit: "; F

CALL CONVERT(F)

END


SUB CONVERT (F)

    C = (F - 32) * (5 / 9)

    PRINT "The temperature in Celsius is: "; C;

END SUB
