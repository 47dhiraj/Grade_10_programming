// WAP in C to calculate the square of a number.

#include <stdio.h>
#include <conio.h>
#include <math.h>  			// for pow() function

int main() 
{
    int n, cube;

    printf("Enter a number: ");
    scanf("%d", &n);
    
    cube = pow(n, 2);		//  Calculate square using inbuilt pow() function
    
//    cube = n * n;		// Manual way of calculating square of any number

    printf("\nSquare of %d is %d \n", n, cube);
    
    
    getch();
    return 0;
}
