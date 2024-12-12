REM Convert Celsius to Fahrenheit

DECLARE SUB CONVERT(C)

CLS

INPUT "Enter temperature in Celsius: "; C

CALL CONVERT(C)

END


SUB CONVERT (C)

    F = 9 * C / 5 + 32

    PRINT "The temperature in Fahrenheit is: "; F;

END SUB


