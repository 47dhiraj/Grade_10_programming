// WAP in C to display the largest number/value among the 3 numbers.

#include <stdio.h>

int main(){
	
	// BEST WAY (also allows to input floating/decimal/precision values)
	double num1, num2, num3;
	
	printf("Enter three values/numbers: ");
	scanf("%lf %lf %lf", &num1, &num2, &num3);
	
	printf("\n");	

	if(num1 > num2 && num1 > num3)
	{
		printf("%lf is greatest value/number.\n", num1);
	}
	else if(num2 > num1 && num2 > num3)
	{
		printf("%lf is greatest value/number.\n", num2);
	}
	else
	{
		printf("%lf is greatest value/number.\n", num3);
	}
	
	return 0;
}
