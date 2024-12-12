// WAP in C to calculate the area of four walls of a room.
// [ A = 2H(L + B ) ]

#include <stdio.h>
#include <stdlib.h>


int main() {
	
	float length, breadth, height, area;
	
	printf("Enter the length, breadth & height of room: ");
	scanf("%f, %f, %f", &length, &breadth, &height);
	
	area = 2 * height * (length + breadth);
	
	printf("The area of four walls of room = %.2f\n", area);
	
	getch();
	
	return 0;
	
}
