// Write a program in C to enter a string and display it's reverse.

#include <stdio.h>
#include <string.h>


int main(){
	
	char a[100];
	
	printf("Enter a string: ");
	gets(a);
	
	printf("\nReverse is: %s \n", strrev(a));
	
	getch();
	return 0;
}
