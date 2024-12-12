// Write a C program that takes string as input and counts the number of vowels and consonants in it.

#include <stdio.h>
#include <string.h>		// For strlen function

int main() {

	char str[100];
	int i, length, vowels = 0, consonants = 0;

	printf("Enter a string: ");

	// Best way to read string input
	gets(str);

 	// // Another (Best safer way)
 	// fgets(str, sizeof(str), stdin);

	// Find the length of string
	length = strlen(str);

	// strlwr() converts an entire string lowercase
	strlwr(str);
	printf("\n Lowercase string: %s \n", str);

	// // strupr() converts an entire string uppercase
	// strupr(str);


	// Loop through each character in the string
	for (i = 0; i < length; i++) {

		if(str[i] >= 'a' && str[i] <= 'z') {

			// NOTE: In C, single character should be quoted by single quote, not the double quote.
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
				vowels++;
			else
				consonants++;
		}

	}


	printf("\n Vowels: %d \n", vowels);
	printf("\n Consonants: %d \n", consonants);

	return 0;
}



// // Alternative way:

//// Loop through each character in the string
//for (i = 0; i < length; i++) {
//
//	// tolower() converts a single character to lowercase.
//	char ch = tolower(str[i]);
//
////        // toupper() converts a single character to uppercase.
////        char ch = toupper(str[i]);
//
//
//	if(ch >= 'a' && ch <= 'z') {
//
//		// NOTE: In C, single character should be quoted by single quote, not the double quote.
//		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//			vowels++;
//		else
//			consonants++;
//
//	}
//
//}


