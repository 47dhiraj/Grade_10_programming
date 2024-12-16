// WAP in C to generate the series as 1 2 4 8 ..... upto 10th term.

#include <stdio.h>

int main() 
{
    int i, term = 1;
    
    for (i = 1; i <= 10; i++) 
	{
        printf("%d ", term);
        
        term = term * 2;
    }
    
    
    getch();
    return 0;
}

