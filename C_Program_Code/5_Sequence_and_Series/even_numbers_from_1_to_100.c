// Write a program in C to display all the even numbers from 1 to 100.

#include <stdio.h>

int main()
{
	
	int i;
	
	for(i = 2; i <= 100; i = i + 2)
	{
		printf("%d ", i);
	}
	
	
	getch();
	return 0;
}
