// WAP to display the smallest value/number among three numbers.

#include <stdio.h>

int main() {
	
	double num1, num2, num3;
	
	printf("Enter three numbers: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	
		
	if(num1 < num2 && num1 < num3)
	{
		printf("\n %lf is smallest number.\n", num1);
	}
	else if(num2 < num1 && num2 < num3)
	{
		printf("\n %lf is smallest number.\n", num2);
	}
	else
	{
		printf("\n %lf is smallest number.\n", num3);
	}
	
	return 0;	
}
