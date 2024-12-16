// Finding largest element in an array

#include <stdio.h>

int main() 
{
    int numbers[5] = {12, 35, 7, 95, 50};
    int max = numbers[0];
    int i;

    for (i=1; i < 5; i++) 
	{
		// Update value of max if the current array element is greater than max
        if (numbers[i] > max) 
		{
            max = numbers[i]; 		
        }
    }

    printf("Largest element in the array: %d\n", max);
    
    getch();
    return 0;
}

