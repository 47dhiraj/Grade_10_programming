// WAP in C to check whether the given number is positive, negative or zero.

#include <stdio.h>


int main(){
	
	// Best way: Also to include floating/decinal number inputs
	float num; 
	
	// Prompting user to enter a number
	printf("Enter a number: ");
	scanf("%f", &num);
	printf("\n");
	
	if(num > 0)
	{
		printf("%.2f is positive number.\n", num);
	}
	else if(num < 0)
	{
		printf("%.2f is negative number.\n", num);
	}
	else
	{
		printf("%.2f is zero.\n", num);
	}
	
	
	
//	// Alternative: To only include integer number values
//	int num; 
//	
//	printf("Enter a number: ");
//	scanf("%d", &num);
//	printf("\n");
//	
//	if(num > 0)
//	{
//		printf("%d is positive number.\n", num);
//	}
//	else if(num < 0)
//	{
//		printf("%d is negative number.\n", num);
//	}
//	else
//	{
//		printf("%d is zero.\n", num);
//	}
	
	return 0;
}
