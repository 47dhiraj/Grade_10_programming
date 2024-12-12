// WAP in C to enter a character and check whether the entered character is vowel or consonant.

#include <stdio.h>

int main(){
	
	// NOTE: In C, single character should be quoted by single quote, not the double quote.
		
	char ch;
	
	printf("Enter a character: ");
	scanf("%c", &ch);
	
	// Convert character to lowercase or uppercase to simplify checking
    ch = tolower(ch);
    
	
	// NOTE: In C, single character should be quoted by single quote, not the double quote.
	// NOTE: In C, you only double quote string literals(arrays of characters.)
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
	{
		printf("%c is a vowel.\n", ch);
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("%c is a consonant.\n", ch);
	}
	else
	{
		printf("%c is not an alphabet character.\n", ch);
	}
	
	return 0;
}
