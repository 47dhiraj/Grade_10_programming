// WAP in C to display first 20 prime numbers.
// NOTE: A prime number has exactly two positive divisors, i.e (1 and itself)

#include <stdio.h>

int main() {
	
    int i, divisor, number=2, count=0;
    
    while (count < 20) 
    {
    	
        divisor = 0;

        for (i = 1; i <= number; i++)
        {
        	if (number % i == 0){
        		divisor++;
			}
		}
             
        if (divisor == 2)
		{
            printf("%d  ", number);
            count++;		// Increases the count, only if prime number is found.
        }


        number++;			// moving to next number, regardless of prime number found or not.
    }

	getch();
    return 0;
}

