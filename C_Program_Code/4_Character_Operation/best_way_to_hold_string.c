
// Best way to hold(read) user entered string in C program

#include <stdio.h>

int main()
{
	
	char name[100];
	
	printf("Enter your fullname: ");
	
	
	// Best Way: It is used to read string input (i.e multiple words)
	gets(name);
	
	
	// // It is used to read single word input(i.e won't hold characters/alphabets after space)
	//	scanf("%s", name);
	
	
	
	//	printf("\n%s\n", name);
	
	return 0;
}
