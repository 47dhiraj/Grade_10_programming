// WAP in c to enter a string and display the lenght of the string.

#include <stdio.h>
#include <string.h>				// string.h is included for strlen() function.

int main(){
	
	int length;
	char str[100];
	
	printf("Enter a string: ");
	
	gets(str);
//	fgets(str, sizeof(str), stdin);
	
	length = strlen(str);
	
	printf("\nLength of string is %d.\n", length);
	
	return 0;
}
