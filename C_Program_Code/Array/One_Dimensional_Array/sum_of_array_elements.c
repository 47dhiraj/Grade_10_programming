// Finding the sum of array elements

#include <stdio.h>

int main() 
{
    int numbers[5] = {10, 20, 30, 40, 50};
    
    int i, sum = 0;
	
	printf("Elements of array : ");
	// Accessing array elements using loop
    for (i=0; i < 5; i++) 
	{
        printf("%d ", numbers[i]); 
    }
    
    
	// Adding each array element to the sum variable
    for (i = 0; i < 5; i++) 
	{
        sum = sum + numbers[i]; 	
    }

    printf("\n\nSum of array elements: %d\n", sum);
    
    getch();
    return 0;
}

