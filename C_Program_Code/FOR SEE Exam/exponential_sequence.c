// WAP in C to generate the series as 1 4 9 16 25.. upto 10th term.

#include <stdio.h>
#include <math.h>

int main() 
{
    int i;
    
    for (i = 1; i <= 10; i++) 
	{
		printf("%d ", i * i);
		
//		printf("%d ", (int)pow(i, 2));	// pow() returns double, so type casting double to integer using (int)
	
	}
    
	getch();
    return 0;
}
