// Write a C program to enter 3 digit number and check whether the given number is armstrong or not.

#include <stdio.h>
#include <math.h> 						//  math.h for using pow() function

int main() 
{
    int num, originalNum, remainder;
    int result = 0;						// Declaring result with initial value 0

    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    
    originalNum = num;

    if (num < 100 || num > 999) {
        printf("\n can only enter 3-digit number !! \n");
        return 1;						// terminating the program from here
    }

	
    while (num != 0) 
	{
        remainder = num % 10;   				// extract/take only the last digit from number
		           
        result = result + pow(remainder, 3);   	// 3 because of 3-digit number. if 4-digit number then it has to be 4.
        
        num = num / 10;      					// only remove last digit from number             
    }

    // Check if the result matches the original number
    if (originalNum == result){
    	printf("\n%d is an Armstrong number.\n", originalNum);
	}
    else{
    	printf("\n%d is not an Armstrong number.\n", originalNum);
	}
        
	
	getch();
    return 0;
}
