// Write a program in C to print all the odd numbers from 1 to 100.

#include <stdio.h>

int main(){
	
	int i;
	
	for(i = 1; i < 100; i += 2)
	{
		printf("%d \t", i);
	}
	
	getch();
	return 0;
	
}
