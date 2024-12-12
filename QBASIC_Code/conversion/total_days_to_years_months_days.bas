REM WAP to input days and convert it to years, months & days

DECLARE SUB CONVERT(D)

CLS

INPUT "Enter Total Days: "; D

CALL CONVERT(D)

END


SUB CONVERT (D)

    Years = D \ 365

    left_days = D MOD 365

    Months = left_days \ 30

    Days = left_days MOD 30

    PRINT Years; " Years, "; Months; " Months & "; Days; " Days"

END SUB
