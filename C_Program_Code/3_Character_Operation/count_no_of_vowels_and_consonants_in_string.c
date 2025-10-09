// Write a C program that takes string as input and counts the number of vowels and consonants in it.

#include <stdio.h>
#include <string.h>		// For strlen function

int main() 
{
	char str[100];
	int i, length, vowels = 0, consonants = 0;

	printf("Enter a string: ");
	
	gets(str);

	// Find the length of string
	length = strlen(str);

	// Loop through each character in the string
	for (i = 0; i < length; i++) 
	{
		
		char ch = tolower(str[i]);	// tolower() converts a single character to lowercase.
//	    Alternative: char ch = toupper(str[i]);	// toupper() converts a single character to uppercase.

		if(ch >= 'a' && ch <= 'z') 
		{
			// NOTE: In C, single character should be quoted by single quote, not the double quote.
			if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			{
				vowels++;
			}
			else
			{
				consonants++;
			}
				
		}
	
	}

	printf("\n Vowels: %d \n", vowels);
	printf("\n Consonants: %d \n", consonants);

	getch();
	return 0;
}

