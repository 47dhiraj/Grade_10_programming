// Write a program in C to print sum of numbers from 1 to 10.
// Write a program in C to print sum of first 10 natural numbers.

#include <stdio.h>

int main()
{
	int i, sum=0;
	
	for(i=1; i <= 10; i++)
	{
		sum = sum + i;
	}
	
	
	printf("\nSum of numbers from 1 to 10 = %d \n", sum);
	
	getch();
	return 0;
}
