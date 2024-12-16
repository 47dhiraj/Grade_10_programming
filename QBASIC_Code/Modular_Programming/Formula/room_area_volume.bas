REM WAP in QBasic that allows user to enter lenght, breadth and height of a room.
REM Create a user defined function to calculate area and sub program to calculate volume.
REM Hints: [A = L * B, Volume = L * B * H]

DECLARE SUB Volume(l, b, h)
DECLARE FUNCTION Area(l, b)

CLS

INPUT "Enter length, breadth & height of a room: "; l, b, h

CALL Volume(l, b, h)

PRINT "The area of the room is: "; Area(l, b)


END


SUB Volume (l, b, h)

    PRINT "The volume of the room is: "; l * b * h

END SUB


FUNCTION Area (l, b)

    Area = l * b

END FUNCTION
