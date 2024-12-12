// WAP in C calculate sum and average of given three numbers.
// [ avg = (num1 + num2 + num3) / 100 ]

#include <stdio.h>

int main() {
	
	float num1, num2, num3, avg, sum;
	
	printf("Enter three numbers: ");
	scanf("%f, %f, %f", &num1, &num2, &num3);
	
	// Sum Calculatioin
	sum = num1 + num2 + num3;
	printf("\nThe sum of %.2f, %.2f, and %.2f = %.2f\n", num1, num2, num3, sum);
	// Alternative: single liner
//	printf("\nThe sum of %.2f, %.2f, and %.2f = %.2f\n", num1, num2, num3, num1 + num2 + num3);
	
	// Average calculation
	avg = (num1 + num2 + num3) / 3.0;
	printf("\nThe average of %.2f, %.2f, and %.2f = %.2f\n", num1, num2, num3, avg);
	// Alternative: single liner
//	printf("\nThe average of %.2f, %.2f, and %.2f = %.2f\n", num1, num2, num3, (num1 + num2 + num3) / 3.0);
	
	getch();
	return 0;
}

