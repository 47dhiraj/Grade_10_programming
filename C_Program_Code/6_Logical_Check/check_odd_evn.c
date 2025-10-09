// WAP in C to check whether the user given number is odd or even.

#include <stdio.h>

int main(){
	
	// NOTE: the % (modulus) operator only works with int/integer in C programming language.
	// Odd/even concepts only works with integer number in mathematics.
	// since, numbers like 1.2,2.3 etc are not integer, they are whole numbers. So, odd/even concept doesn't work for floating/precision/decimal values.
	
	int num;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if(num % 2 == 0)
	{
		printf("\n %d is even number. \n", num);
	}
	else {
		printf("\n %d is odd number. \n", num);
	}
	
	return 0;
}
