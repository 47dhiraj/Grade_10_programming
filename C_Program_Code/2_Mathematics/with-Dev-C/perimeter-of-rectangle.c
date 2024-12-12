// WAP in C to calculate the perimeter of a rectangular room.
// [ p = 2(l + b) ]

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	float l, b, area;
	
	printf("Enter the length & breadth of the rectangular room : ");
	scanf("%f, %f", &l, &b);
	
	area = 2 * (l + b);
	
	printf("The area of rectangular room = %.2f \n", area);
	
	getch();
	return 0;
}
