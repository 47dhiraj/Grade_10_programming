// Write a program in C to display multiplication table of given number.

#include <stdio.h>

int main()
{
	int num, i;
	
	printf("Enter any number to display it's multiplication table: ");
	scanf("%d", &num);
	
	for(i=1; i <= 10; i++)
	{
		printf("\n %d x %d = %d \n", num, i, num * i);
	}	
	
	getch();
	
	return 0;
}
