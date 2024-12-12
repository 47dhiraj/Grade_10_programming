// Write a C program to reverse a word/string.

#include <stdio.h>
#include <string.h>

int main(){
	
	char str[100];
	int start, end, length;

    printf("Enter a string: ");
    scanf("%s", str);

	
    for (start = 0, end = strlen(str) - 1; start < end; start++, end--) 
	{
        // Logic to swap characters of a string
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }
	
	printf("\nReversed string : %s", str);
	
	getch();
	return 0;
}
