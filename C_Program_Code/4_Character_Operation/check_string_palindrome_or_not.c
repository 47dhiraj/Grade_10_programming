// Write a C program to check if a string is palindrome or not.

#include <stdio.h>
#include <string.h>			// to use strcpy() 

void main()
{
	int compare;
	char a[100], b[100];
	
	printf("Enter a string: ");
	gets(a);
	
	// converting enterd string to uppercase or lowercase for correct(flawless) comparison
	strupr(a);
	// OR, strlwr(a);
	
	// SYNTAX of strcpy() ==> strcpy(destination_string, source_string);
	strcpy(b, a);
	
	// Reversing string a using strrev()
	strrev(a);
	
	// Comparing string a & b
	compare = strcmp(a, b);
//	printf("Comparison = %d", compare);

	if (compare == 0)
		printf("\n The string %s is palindrome. \n", b);
	else
		printf("\n The string %s is not palindrome. \n", b);
		
	
	getch();
}
