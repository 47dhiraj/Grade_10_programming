// WAP in C to enter a character and check whether the entered character is vowel or consonant.
#include <stdio.h>

int main() 
{
	char ch, chl;

	printf("Enter a character: ");
	scanf("%c", &ch);

	// Convert character to lowercase or uppercase to simplify checking
	chl = tolower(ch);	// converting to lowercase using tolower()

	// NOTE: In C, single character should be quoted by single quote, not the double quote.
	if(chl == 'a' || chl == 'e' || chl == 'i' || chl == 'o' || chl == 'u')
	{
		printf("\n %c is a vowel. \n", ch);
	}
	else if(chl >= 'a' && chl <= 'z')
	{
		printf("\n %c is a consonant. \n", ch);
	}
	else
	{
		printf("\n %c is not an alphabet character. \n", ch);
	}
		

	getch();
	return 0;
}

