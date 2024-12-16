// Void Function (with accepting arguments)

#include <stdio.h>

// Function Declaration
void add(int a, int b);


// Main Function
int main() 
{
	int num1, num2, sum;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	
    add(num1, num2);  // calling function add() with arguments num1 and num2
    
    getch();
    return 0;
}


// Function Definition
void add(int a, int b) 
{
    int sum = a + b;
    
    printf("\nsum of two numbers is : %d\n", sum);
}

