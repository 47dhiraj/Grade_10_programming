// WAP in C to calculate the cube of a number.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>  		// Include <math.h> for pow() function

int main() {
	
    float n, cube;
    
    system("cls");

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%f", &n);

    //  Calculate the cube using inbuilt pow() function
    cube = pow(n, 3);  		// pow() will automatically type cast float to double data type
    
    // // Alternative custom way of calculating cube of any number
    // cube = n * n * n;

    // Display the result
    printf("The cube of %.2f = %.2f \n", n, cube);
    
    getch();

    return 0;
}
