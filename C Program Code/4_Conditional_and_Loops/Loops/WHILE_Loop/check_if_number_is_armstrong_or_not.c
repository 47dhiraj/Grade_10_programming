// Write a C program to enter 3 digit number and check whether the given number is armstrong or not.

#include <stdio.h>
//#include <math.h> 						// Include math.h for inbuilt pow() function

int main() 
{
    int num, originalNum, remainder;
    int result = 0;							// we want to make sure the initial value of result is always 0.

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    
    originalNum = num;

    if (num < 100 || num > 999) 
	{
        printf("Please only enter a 3-digit number.\n");
        return 1;							// generally returning 1 indicates, program didn't execute as expected.
    }

    // Calculate the sum of the cubes of each digit
    while (num != 0) 
	{
        remainder = num % 10;              // Getting last digit
        
//        result += pow(remainder, 3);   	// Adding cube of digit to result
        // Alternative
        result += remainder * remainder * remainder;
        printf("\n %d \n", result);
        
        num /= 10;                         // Removing last digit
    }

    // Check if the result matches the original number
    // No curly brackets is requied if there is only a single statement following each condition
    if (originalNum == result)
        printf("\n %d is an Armstrong number.\n", originalNum);
    else
        printf("\n %d is not an Armstrong number.\n", originalNum);


    return 0;						// return 0 indicates, program executed as expected.
}
