// WAP in C to swap any two numbers.

#include <stdio.h>

void main(){
	
	float num1, num2, temp;
	
	printf("Enter any two numbers: ");
	scanf("%f, %f", &num1, &num2);
	
	// Before swapping
	printf("\nBefore swapping: \n");
	printf("num1 = %.2f \n", num1);
	printf("num2 = %.2f \n", num2);
	
	// Logic of swapping two numbers using help of temp variable
	temp = num1;
	num1 = num2;
	num2 = temp;
	
	// After swapping
	printf("\nAfter swapping: \n");
	printf("num1 = %.2f \n", num1);
    printf("num2 = %.2f \n", num2);
	
	getch();
}
