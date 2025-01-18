REM WAP to enter time in seconds and convert it into hours, minutes & seconds


DECLARE CONVERT(S)

CLS

INPUT "Enter Time in Seconds: "; S

CALL CONVERT(S)

END


SUB CONVERT (S)

    Hours = S \ 3600

    Seconds_Left = S MOD 3600

    Minutes = Seconds_Left \ 60

    Seconds = Seconds_Left MOD 60

    PRINT

    PRINT Hours; "Hours"; Minutes; "Minutes"; Seconds; "Seconds"

END SUB
