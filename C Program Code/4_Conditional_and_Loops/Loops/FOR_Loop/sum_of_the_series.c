// Write a program in C to display and calculate the sum of the following series 1,2,3,4,5 ... Upto 10th term.

#include <stdio.h>

int main(){
	
	int sum = 0;
	
	int i;
	
    printf("Series: ");
    
    for (i = 1; i <= 10; i++) 
	{
        printf("%d ", i);
        
        sum += i;
    }

    printf("\nSum of the series up to the 10th term: %d\n", sum);
    
    return 0;
    
}
