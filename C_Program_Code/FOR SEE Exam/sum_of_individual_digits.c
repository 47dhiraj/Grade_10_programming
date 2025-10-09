// WAP in C to find the sum of individual digit given by the user.

#include <stdio.h>

int main() {
	
    int num, n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    num = abs(num);			// changes to postive number, if negative number is entered by user.

    while (num != 0) 
	{
        digit = num % 10; 		// Only extract(take) last digit from num
        
        sum = sum + digit;     	// Adding extracted digit to sum
        
        num = num / 10;        	// Remove only last digit from the num
    }

    printf("\nSum of digits = %d \n", sum);
    
    getch();
    return 0;
}

