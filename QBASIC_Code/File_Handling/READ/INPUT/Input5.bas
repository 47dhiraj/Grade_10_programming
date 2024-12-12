REM A sequential data file patientrec.dat contains information about some patients.
REM The records are patient id, patient's name, disease, addresses, date of admit.
REM Write a program to display the records of patients who has disease TYPHOID and address BANESHWOR.


CLS

OPEN "patientrec.dat" FOR INPUT AS #1


WHILE NOT EOF(1)

    INPUT #1, pid, pname$, disease$, address$, doa$

    IF UCASE$(disease$) = "TYPHOID" AND UCASE$(address$) = "BANESHWOR" THEN

        PRINT pid, pname$, disease$, address$, doa$

    END IF

WEND

CLOSE #1

END
