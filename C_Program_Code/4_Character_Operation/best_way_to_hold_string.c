
// Best way & multiple ways to hold string in C program

#include <stdio.h>

int main()
{
	char name[100];
	
	printf("Enter your fullname: ");
	
	// Best way to read string input
	fgets(name, sizeof(name), stdin);
	
// // Alternative; It is used to read string input (i.e multiple words)
//	gets(name);
	
// // It is used to read single word input
//	scanf("%s", name);
	
	printf("\n%s\n", name);

// // It is used to output string
//	puts(name);
	
	return 0;
}
