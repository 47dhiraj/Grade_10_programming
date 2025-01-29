DECLARE FUNCTION PROD(A, B, C)
DECLARE SUB AVG(A, B, C)


CLS

INPUT "Enter three different numbers: "; A, B, C

PRINT "Product = "; PROD(A, B, C)

CALL AVG(A, B, C)

END


FUNCTION PROD (A, B, C)

    PROD = A * B * C

END FUNCTION


SUB AVG (A, B, C)

    Average = (A + B + C) / 3

    PRINT "Average = "; Average

END SUB
