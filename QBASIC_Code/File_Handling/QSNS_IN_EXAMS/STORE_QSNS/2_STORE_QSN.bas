REM Create a sequential data file Price.dat to store item name, quantity and rate also calculate total amount.
REM Program should terminate according to the user's choice


CLS

OPEN "Price.dat" FOR OUTPUT AS #1


DO

    INPUT "Enter name of the item: "; item_name$

    INPUT "Enter quantity of the item: "; quantity

    INPUT "Enter the rate of the item: "; rate


    total = quantity * rate


    WRITE #1, item_name$, quantity, rate, total


    INPUT "Want to store more item records ? (Y/N) "; choice$


LOOP WHILE UCASE$(choice$) = "Y"


CLOSE #1

END

