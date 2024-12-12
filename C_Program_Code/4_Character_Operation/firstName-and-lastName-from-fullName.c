// WAP in C to ask user to input his/her full name & display first name and last name seperate lines.

#include <stdio.h>

void main() {
	
	// Best way to hold fullname or string(multiple words having space):
	char fullName[100];

    printf("Enter fullName: ");
    // fgets(fullName, sizeof(fullName), stdin);
	gets(fullName);

    printf("\n %s \n", fullName);


//	// Alternative Way 
//    char firstName[50], middleName[50], lastName[50];
//
//    printf("Enter your fullName (firstName middleName lastName): ");
//    // Note: Both space agi & pachi ko word/characters lai accept(hold) garna lai "%s %s" (i.e bich ma space dine)
//    scanf("%s %s %s", firstName, lastName, middleName);
//    
//    // Displaying in Same line
//    printf("\n%s %s %s\n", firstName, middleName, lastName);
    
}
