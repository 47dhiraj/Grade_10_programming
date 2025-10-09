// In implicit type casting, the compiler automatically converts a smaller ranked data type to a larger ranked data type & vice-versa.

// int ==> float ==> double
// double ==> float ==> int

// NOTE: Explicit type casting is always better/safter than implicit type casting.

#include <stdio.h>

int main() 
{
    int a = 40;
    float b = 7.0;

    // Here, implicit type casting occurs below 
    printf("\nResult: %.2f ", a + b);		// 'a' (int) is automatically converted to 'float' by C compiler.
    
    
    getch();
    return 0;
}
