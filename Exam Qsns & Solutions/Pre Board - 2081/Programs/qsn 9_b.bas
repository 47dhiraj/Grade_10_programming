CLS

OPEN "data.dat" FOR INPUT AS #1


'PRINT "Name"; TAB(15); "Quantity"; TAB(30); "Rate"; TAB(45); "Total"
'PRINT


DO WHILE NOT EOF(1)

    INPUT #1, name$, quantity, rate

    Total = quantity * rate

    PRINT name$, quantity, rate, Total

LOOP


CLOSE #1

END
