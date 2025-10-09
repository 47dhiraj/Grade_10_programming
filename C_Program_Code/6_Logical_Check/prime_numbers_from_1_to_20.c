// WAP in C to display prime numbers from 1 to 20.
// NOTE: A prime number has exactly 2 positive divisors, i.e (1 and itself)

#include <stdio.h>

int main() 
{
    int number, i, divisor;

    // since, to display prime numbers from 1 to 20, so, number <= 20.
    for (number = 1; number <= 20; number++) 	
	{
		
		divisor = 0;
		
		for (i = 1; i <= number; i++)
		{
			if(number % i == 0)
			{
				divisor ++;
			}
		}
		
		if (divisor == 2)
		{
	    	printf("%d  ", number);
		}
		
    }

	getch();
    return 0;
}

