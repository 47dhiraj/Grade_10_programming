#include <stdio.h>		// To use scanf(), printf() & getch()
#include <stdlib.h> 	// For system standar library // Also, To use system()

int main() {
	
    #ifdef _WIN32
        system("cls");
    #endif
	
	int length, breadth, area;
    
	printf("Enter the legth and breadth of rectangle ");
	scanf("%d, %d", &length, &breadth);
	
	area = length * breadth;
	
	printf("The area of rectangle is: %d\n", area);
	
	getch();	// it holds the black screen until user press any key
	
	return 0;	// returns 0 indicates, that program executes successfully without throwing any error
	
}
