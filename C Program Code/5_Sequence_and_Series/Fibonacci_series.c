// Write a program in C to generete the Fibonacci series  1 2 3 5 8 13 upto 10th term.

#include <stdio.h>
#include <conio.h>

int main() 
{

	int i, first=1, second=2, next;		
	
	printf("\nFibonacci Series: ");

	for (i=1; i <= 10; i++) 
	{
		printf("%d ", first);

		next = first + second; 		// calculate next term
		first = second; 			// assign second as first term
		second = next;				// assign next as second term
	}
	
	getch();
	return 0;
}

