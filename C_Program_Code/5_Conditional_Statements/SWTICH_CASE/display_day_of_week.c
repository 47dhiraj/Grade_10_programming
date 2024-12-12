// WAP in C to enter a number & display day according to that number.

#include <stdio.h>

void main() {

	int n;

	printf("Enter number to display the day: ");
	scanf("%d", &n);


	// Swtich Case statement
	switch(n) {

		case 1:
			printf("\n Sunday \n");
			break;

		case 2:
			printf("\n Monday \n");
			break;


		case 3:
			printf("\n Tuesday \n");
			break;

		case 4:
			printf("\n Wednesday \n");
			break;

		case 5:
			printf("\n Thursday \n");
			break;

		case 6:
			printf("\n Friday \n");
			break;

		case 7:
			printf("\n Saturday \n");
			break;
		
		default:
			printf("\n Input Error \n");

	}
	
	getch();

}
