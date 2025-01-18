// WAP in C to calculate the cube of a number.

#include <stdio.h>
#include <conio.h>
#include <math.h>  				// for pow() function

int main() 
{
    int n, cube;

    // Ask the user for input
    printf("Enter a number: ");
    scanf("%d", &n);

    //  Calculate the cube using inbuilt pow() function
    cube = pow(n, 3); 
    
    // // Alternative custom way of calculating cube of any number
    // cube = n * n * n;

    // Display the result
    printf("The cube of %d = %d \n", n, cube);
    
    getch();
    return 0;
}
