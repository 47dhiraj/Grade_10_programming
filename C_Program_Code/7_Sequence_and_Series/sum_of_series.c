// Write a program in C to display and calculate the sum of the following series 1,2,3,4,5 ... Upto 10th term.

#include <stdio.h>

int main()
{
	int i, sum=0;
	
    printf("Series: ");
    
    for (i = 1; i <= 10; i++) 
	{
        printf("%d ", i);			// For displaying series
        
        sum = sum + i;				// For finding the sum of the series
    }


    printf("\nSum of the series up to the 10th term: %d\n", sum);
    
    getch();
    return 0;
}

