// Write a program in C to display and calculate the sum of the following series 1, 2, 3, 4, 5 ... Upto 10th term.

#include <stdio.h>

int main()
{
	
	int sum = 0, i = 1;
	
	printf("Series: ");
	
	while(i <= 10)
	{
		printf("%d ", i);
		
		sum += i;
		
		i++;
	}
	
	printf("\nSum of the given series: %d\n", sum);
	
	return 0;
}
