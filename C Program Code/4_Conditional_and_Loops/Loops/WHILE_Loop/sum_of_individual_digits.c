// WAP in C to find the sum of individual digit given by the user.

#include <stdio.h>

int main() {
	
    int num, n, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    num = abs(num);
    n = num;
    
//    // Alternative way: Handle negative numbers by getting its absolute value
//    if (num < 0) 
//	{
//        num = -num; 
//    }

    while (num > 0) 
	{
        digit = num % 10; 			// Extract(take) the last digit from num
        sum = sum + digit;     		// sum += digit; // Add the digit to the sum
        num = num / 10;        		// num /= 10;   // Remove the last digit from the num
    }

    printf("\n Sum of digits of %d is %d \n", n, sum);
    
    getch();
    return 0;
}
