// WAP in C language to ask user to enter any number and find the square root and cube root of the given number.
// [sqroot = sqrt(num) | croot = pow(num, 1.0/3.0)]

#include <stdio.h>
#include <conio.h>
#include <math.h>


int main() {

	long int number;
	double squareRoot, cubeRoot;

	clrscr();

	// Ask the user to enter a number
	printf("Enter any number: ");
	scanf("%ld", &number);

	// Calculate square root and cube root using inbuilt sqrt() and cbrt()
	// Both, sqrt() and cbrt() function takes double as a input/parameter
	squareRoot = sqrt(number);
	cubeRoot = pow(number, 1.0 / 3.0);

	// Display the results
	printf("Square root of %ld is %.2f\n", number, squareRoot);
	printf("Cube root of %ld is %.2f\n", number, cubeRoot);

	getch();	// it holds the screen

	return 0;
}
