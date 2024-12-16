// Finding smallest element in an array

#include <stdio.h>

int main() 
{
    int numbers[5] = {12, 35, 10, 7, -1};
    int min = numbers[0];
    int i;
	
	// Accessing array element using loop
    for (i=1; i < 5; i++) 
	{
		// Update value of min, if the current array element is smaller than min
        if (numbers[i] < min) 
		{
            min = numbers[i]; 		
        }
    }

    printf("Smallest element in the array: %d \n", min);
    
    getch();
    return 0;
}

