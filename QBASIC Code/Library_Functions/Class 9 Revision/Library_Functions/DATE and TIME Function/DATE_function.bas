CLS

month = VAL(MID$(DATE$, 1, 2))

PRINT "Month: "; month
PRINT

SELECT CASE month

    CASE 1
        PRINT "January"
    CASE 2
        PRINT "February"
    CASE 3
        PRINT "March"
    CASE 4
        PRINT "April"
    CASE 5
        PRINT "May"
    CASE 6
        PRINT "June"
    CASE 7
        PRINT "July"
    CASE 8
        PRINT "August"
    CASE 9
        PRINT "September"
    CASE 10
        PRINT "October"
    CASE 11
        PRINT "November"
    CASE 12
        PRINT "December"
END SELECT

END



