// WAP in C to display the profit amount whne selling price & cost price is given.
// [ P = SP - CP ]

#include <stdio.h>
#include <conio.h>

int main() {
	
	float SP, CP, Profit;
	
	printf("Enter the selling price and cost price of an item: ");
	scanf("%f, %f", &SP, &CP);
	
	Profit = SP - CP;
	
	printf("\nThe profit amount = %.2f \n", Profit);
	
	getch();
	return 0;
}
