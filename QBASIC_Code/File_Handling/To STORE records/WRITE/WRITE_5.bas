REM Create a sequential data file Price.dat to store item name, quantity and rate also calculate total amount (total quantity x rate) Program should terminate according to the user's choice

CLS

OPEN "Price.dat" FOR OUTPUT AS #1

DO

    INPUT "Enter name of the item: "; name$

    INPUT "Enter quantity of the item: "; quantity

    INPUT "Enter the rate of the item: "; rate

    total = quantity * rate


    WRITE #1, name$, quantity, rate, total


    INPUT "Do u want more records to insert ? If Yes press Y, if not press N.0"; choice$

LOOP WHILE UCASE$(choice$) = "Y"

CLOSE #1

END


