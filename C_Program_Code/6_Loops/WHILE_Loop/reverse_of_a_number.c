// WAP in C to find reverse of a given number by user.

#include <stdio.h>

int main() {
	
    int num, reverse=0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to reverse the number
    while (num != 0) 
	{
        remainder = num % 10;         			// Get the last digit
        reverse = reverse * 10 + remainder;  	// Shift reverse left and add the digit
        num /= 10;                    			// Remove the last digit from num
    }

    printf("\nReversed number: %d\n", reverse);
    
    getch();
    return 0;
}
