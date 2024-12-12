// WAP in C language to ask user to enter any number and find the square root and cube root of the given number.

// [sqroot = sqrt(num) | croot = pow(num, 1.0/3.0)]

#include <stdio.h>
#include <math.h>

int main() {
	
    long int number;				// long int is long integer number
	double squareRoot, cubeRoot;	// double means decimal values having precision

    // Ask the user to enter a number
    printf("Enter any number: ");
    scanf("%ld", &number);

//    // Calculate square root and cube root using inbuilt sqrt() and cbrt()
//    // Both, sqrt() and cbrt() function takes double as a input/parameter
//    squareRoot = sqrt(number);
//    cubeRoot = cbrt(number);
    
    // Alternative way: Calculate square root and cube root using inbuilt pow() function
    // 1.0/2.0  or 1.0/3.0  indicates the floating division, so giving float value. But, 1/2 gives integer value i.e 0, which we don't want.
    squareRoot = pow(number, 1.0/2.0);
    cubeRoot = pow(number, 1.0/3.0);

    // Display the results
    printf("Square root of %ld is %.2f\n", number, squareRoot);
    printf("Cube root of %ld is %.2f\n", number, cubeRoot);

    return 0;
}

