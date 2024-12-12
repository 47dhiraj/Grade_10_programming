// Write a C program to check if a string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main(){
	
	char str[100], rev_str[100];
	int start, end, length;
	
    printf("Enter a string: ");
    gets(str);

	length = strlen(str);
	
	// string reverse logic
    for (start=0, end=length-1; start < length; start++, end--) {
        rev_str[start] = str[end];
    }
	
	// string comparing logic
	if(strcmp(str, rev_str) == 0)
	{
		printf("\n%s is palindrome\n", str);
	} else {
		printf("\n%s is not palindrome\n", str);
	}
	
	getch();
	return 0;
}
