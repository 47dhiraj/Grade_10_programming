// Understanding the working of % (Modulus operator)

// NOTE: %  only works with integers, not with float or double numbers.

// If you want to use % for any calculation, u must use int (integer number)

#include <stdio.h>

int main()
{
	int num;
	
	printf("Enter an integer number: ");
	scanf("%d", &num);
	
	if(num % 4 == 0)
	{
		printf("\n%d is divisible by 4", num);
	}
	else
	{
		printf("\n%d is not divisible by 4", num);
	}
	
	
	getch();
	return 0;	
}
