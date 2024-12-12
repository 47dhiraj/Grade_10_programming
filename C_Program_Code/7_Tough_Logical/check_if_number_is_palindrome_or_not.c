// WAP in C to check whether the given number is palindrome or not.

#include <stdio.h>

int main() {
	
    int num, originalNum, remainder;
    int reverse = 0; 						// declaring reverse with initial value 0
	
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) 
	{
        remainder = num % 10;				// extract/take only last digit from the number
        
        reverse = reverse * 10 + remainder;	// logic of making reverse
        
        num = num / 10;						// remove only last digit from the number
    }

    // Check if the original number is equal to its reverse
    if (originalNum == reverse) 
	{
        printf("\n %d is a palindrome.\n", originalNum);
    } else 
	{
        printf("\n %d is not a palindrome.\n", originalNum);
    }

    return 0;
}
