// If no function declaration

// It is always good practice to keep function definition ahead of main() function

#include <stdio.h>

// Function Definition
int add(int a, int b) 				// here, a & b are function parameters
{
    return a + b;  					// returning the sum of a and b
}


// Main Function
int main() 
{
	int sum, num1, num2;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
    sum = add(num1, num2);  	// calling add() function with arguments num1 & num2
    
    printf("\nsum of two numbers is : %d\n", sum);
    
    getch();
    return 0;
}
