// WAP in C to check whether the given number is prime or composite.
// NOTE: A prime number has exactly two positive divisors, i.e (1 and itself)

#include <stdio.h>

int main() 
{
    int number, i, divisor=0;

    printf("Enter any positive number: ");
    scanf("%d", &number);


    // Counting positive divisors of the given number
    for (i = 1; i <= number; i++) 	
	{
        if (number % i == 0){
            divisor ++;
        }
    }

    if (divisor == 2)
	{
    	printf("\n %d is a prime number\n", number);
	}
    else if(divisor > 2)
	{
    	printf("\n %d is a composite number\n", number);
	}	
	else
	{
		printf("\n %d is neither prime nor composite number\n", number);
	}
	
	
	getch();
    return 0;
}

