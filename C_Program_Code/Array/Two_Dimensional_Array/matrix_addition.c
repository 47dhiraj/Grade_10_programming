// Two Dimensional Array
// Matrix Addition

#include <stdio.h>

int main() 
{
	int i, j;
    int A[2][2] = {{1, 2}, {3, 4}};		// 2 rows, 2 columns (i.e 2 * 2)
    int B[2][2] = {{5, 6}, {7, 8}};		// 2 rows, 2 columns (i.e 2 * 2)
    
    int C[2][2]; 						// Resultant matrix (i.e 2 * 2)

    // Add corresponding elements of A and B
    for (i=0; i < 2; i++) 
	{
        for (j=0; j < 2; j++) 
		{
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resultant Matrix:\n\n");
    
    for (i=0; i < 2; i++) 
	{
        for (j=0; j < 2; j++) 
		{
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    
    getch();
    return 0;
}

