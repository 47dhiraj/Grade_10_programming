// Permanently reversing an array

#include <stdio.h>
int main() 
{
    int numbers[5] = {1, 2, 3, 4, 5};
	int n = 5;	// Size/length of the array
	
//	int numbers[6] = {1, 2, 3, 4, 5, 6};
//    int n = 6; 
    
	int i;
	
    printf("Original Array: ");
    for (i=0; i < n; i++) {
        printf("%d ", numbers[i]);
    }

    // Reversing the array elements
    for (i=0; i < n/2; i++) 
	{
		// swapping logic using temp variable
        int temp = numbers[i];
        numbers[i] = numbers[n - i - 1];
        numbers[n - i - 1] = temp;
    }

    printf("\n\nReversed Array: ");
    for (i=0; i < n; i++) 
	{
        printf("%d ", numbers[i]);
    }

	getch();
    return 0;
}

