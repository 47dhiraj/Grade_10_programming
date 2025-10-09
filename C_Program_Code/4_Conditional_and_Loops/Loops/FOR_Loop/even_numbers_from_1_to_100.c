// Write a program in C to print all the even numbers from 1 to 100.

#include <stdio.h>

int main(){
	
	int i;
	
	for(i = 2; i <= 100; i += 2)
	{
		printf("%d \t", i);
	}
	
	getch();
	return 0;
	
}
