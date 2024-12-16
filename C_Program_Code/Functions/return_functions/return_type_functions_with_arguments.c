// Return Type function (Accepting arguments)

#include <stdio.h>

// Declaring function add()
int add(int a, int b);


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


// Function Definition
int add(int a, int b) 				// here, a & b are function parameters
{
    return a + b;  					// returning the sum of a and b
}

