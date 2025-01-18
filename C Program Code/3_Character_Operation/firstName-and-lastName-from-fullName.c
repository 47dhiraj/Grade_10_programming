// WAP in C to ask user to input his/her full name & display.

#include <stdio.h>

void main() {
	
	
	// Best way
	
	char fullName[100];

    printf("Enter fullName: ");
    
	gets(fullName);

    printf("\n %s \n", fullName);

	

//	// Alternative Way 
//    char firstName[50], middleName[50], lastName[50];
//
//    printf("Enter your fullName (firstName middleName lastName): ");
//    
//    scanf("%s %s %s", firstName, middleName, lastName);
//    
//    printf("\n%s %s %s\n", firstName, middleName, lastName);
    
    
    getch();
    
}
