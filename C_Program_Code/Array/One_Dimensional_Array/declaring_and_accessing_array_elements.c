// Declaring and accessing array elements

#include <stdio.h>

int main() 
{
    int i, numbers[5] = {10, 20, 30, 40, 50}; 	// Declaring & initializing the array
    
    // Accessing array elements using loop
    for (i=0; i < 5; i++) 
	{
        printf("%d ", numbers[i]); 
    }
    
    
    getch();
    return 0;
}

