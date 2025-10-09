// Write a program in C to display first 10 odd numbers.

#include <stdio.h>

int main(){
	
	int i;
	
	for(i = 1; i < 20; i += 2)
	{
		printf("%d\n", i);
	}
	
	getch();
	return 0;
	
}
