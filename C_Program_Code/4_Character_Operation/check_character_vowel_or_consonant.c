// WAP in C to enter a character and check whether the entered character is vowel or consonant.

#include <stdio.h>

int main() 
{
	// NOTE: In C, single character should be quoted by single quote, not the double quote.

	char ch, chl;

	printf("Enter a character: ");
	scanf("%c", &ch);

	// Convert character to lowercase or uppercase to simplify checking
	chl = tolower(ch);

	// NOTE: In C, single character should be quoted by single quote, not the double quote.
	// NOTE: In C, you only double quote string literals(arrays of characters.)
	
	if(chl == 'a' || chl == 'e' || chl == 'i' || chl == 'o' || chl == 'u')
		printf("%c is a vowel.\n", ch);
	else if (chl >= 'a' && chl <= 'z')
		printf("%c is a consonant.\n", ch);
	else
		printf("%c is not an alphabet character.\n", ch);

	return 0;
}
