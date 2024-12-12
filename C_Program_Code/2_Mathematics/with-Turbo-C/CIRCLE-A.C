// WAP in C language to calculate area of circle.
// area = PI * pow(radius, 2)

#include <stdio.h>
#include <conio.h>
#include <math.h>

int main() {

	const float PI = 3.14;
	float radius, area;

	clrscr();

	printf("\n Enter the radius of circle: \n");
	scanf("%f", &radius);

	area = PI * pow(radius, 2);

	printf("\n The area of circle is %2.f", area);

	getch();

	return d0;
}