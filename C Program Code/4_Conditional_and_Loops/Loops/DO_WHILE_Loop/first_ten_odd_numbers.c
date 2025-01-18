// Write a program in C to display first 10 odd numbers.

#include <stdio.h>

int main(){
	
	int i = 1;
	
	do {
		
		printf("%d\n", i);
		
		i += 2;
		
	} while(i <= 20);
	
	getch();
	
	return 0;
}
