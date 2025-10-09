
#include <stdio.h>

void main() {
	
	// Single character variable
    char ch, c;

    printf("Enter a character: ");
    scanf(" %c", &ch);
    printf("\nEntered character is: %c\n", ch);
    
    printf("\nAgain,enter a character: ");
    scanf(" %c", &c);				// should add a space before %c, if there was previous scanf() statement
    printf("\nEntered character is: %c\n", c);
    
    getch();
}
