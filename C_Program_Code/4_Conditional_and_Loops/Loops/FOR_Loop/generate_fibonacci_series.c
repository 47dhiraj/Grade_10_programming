// Write a program in C to generete the fibonacci series; 1 2 3 5 8 13 upto 10th term.

#include <stdio.h>
#include <stdlib.h>

int main() {

	int first = 1, second = 2, n = 10;		// initialize the value of first two term to first & second variable.
	int i, next;
	
	system("cls");
	
	printf("\n Fibonacci Series: ");

	for (i = 1; i <= 10; i++) {
		printf("%d ", first);

		next = first + second; 		// calculate next term

		first = second; 			// update first and second for next iteration
		second = next;
	}

	printf("\n");
	
	return 0;
}
