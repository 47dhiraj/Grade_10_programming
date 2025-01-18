// WAP in C to enter a number and check whether the given number is positive, negative or zero.

#include <stdio.h>

int main(){
	
	float num;
	
	printf("Enter any number: ");
	scanf("%f", &num);
	
	
	if(num > 0)
	{
		printf("%.2f is positive number.", num);
	}
	else if(num < 0)
	{
		printf("%.2f is negative number.", num);
	}
	else
	{
		printf("%.2f is zero.", num);
	}
	
	return 0;
}
