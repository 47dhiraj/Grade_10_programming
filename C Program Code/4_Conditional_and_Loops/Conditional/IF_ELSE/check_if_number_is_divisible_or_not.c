// WAP in C to check whether a number is divisible by 5 or not.

#include <stdio.h>

int main()
{
	
	int num;
	
	printf("Enter an integer number: ");
	scanf("%d", &num);
	
	if(num % 5 == 0)
	{
		printf("\n%d is divisible by 5", num);
	}
	else
	{
		printf("\n%d is not divisible by 5", num);
	}
	
	
	getch();
	return 0;	
}
