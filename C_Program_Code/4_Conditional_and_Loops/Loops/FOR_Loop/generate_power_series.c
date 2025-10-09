// WAP in C to generate the series as 1 4 9 16 25.. upto 10th term.

#include <stdio.h>
#include <math.h>

int main() 
{
	
    int i;
    
    
    for (i = 1; i <= 10; i++) 
	{
		printf(" %d ", i * i);
		
//        printf("%.0f ", pow(i, 2)); 	// To use pow() inbuilt function, u have to include math.h in top
    }
    
    printf("\n");

    return 0;
}
