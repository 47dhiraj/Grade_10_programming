DECLARE FUNCTION SUM()

CLS

result = SUM

PRINT "The sum of the first 10 natural numbers is: "; result

END


FUNCTION SUM

    S = 0

    FOR I = 1 TO 10

        S = S + I

    NEXT I

    SUM = S

END FUNCTION




' ALTERNATIVE WAY: using WHILE .. WEND loop

'DECLARE FUNCTION SUM()

'CLS

'PRINT "The sum of the first 10 natural numbers is: "; SUM

'END


'FUNCTION SUM

'S = 0
'I = 1

'WHILE I <= 10

'S = S + I

'I = I + 1

'WEND

'SUM = S

'END FUNCTION
