// WAP in C to generate the series as 5 10 15 20 ... upto 10th term.

#include <stdio.h>

int main() 
{
	
    int i, term = 5;
    
    
    for (i = 1; i <= 10; i++) 
	{
        printf("%d ", term);
        term += 5;				 	// Add 5 to the term, to get the next term
    }
    
    printf("\n");

    return 0;
}

