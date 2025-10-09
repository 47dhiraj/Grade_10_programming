REM A sequential data file Address.inf contains serial no, name, address, telephone and email_id WAP to record as many records as the user wants the serial number should be generated automatically like 5001 5003 5005 5007 & so on.

CLS

OPEN "Address.inf" FOR APPEND AS #1

serial_no = 5001

DO

    INPUT "Enter the name: "; name$

    INPUT "Enter the address: "; address$

    INPUT "Enter the telephone: "; telephone$

    INPUT "Enter the email id: "; email$


    ' Adding records in Address.inf
    WRITE #1, serial_no, name$, address$, telephone$, email$

    serial_no = serial_no + 1

    ' Check if the user wants to add more recoreds
    INPUT "Do you want to add more records. If Yes then press Y, else press N, & enter "; choice$

LOOP WHILE UCASE$(choice$) = "Y"

CLOSE #1

PRINT "Records have been added successfully !"

END
