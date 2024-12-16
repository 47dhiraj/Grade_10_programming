// Matrix Multiplication

#include <stdio.h>

// For matrix multiplication to be valid, the number of columns in matrix A must be equal to the number of rows in matrix B.

int main() 
{
    int m, n, p, i, j, k;

    // Input dimensions for Matrix A (m x n) and Matrix B (n x p)
    printf("Enter the number of rows and columns for Matrix A (m x n): ");
    scanf("%d %d", &m, &n);
    
    printf("Enter the number of rows and columns for Matrix B (n x p): ");
    scanf("%d %d", &n, &p);  // Note that the number of rows of B must be n.

    // Declare 2D Array (i.e A, B, C)
    int A[m][n], B[n][p], C[m][p];

    // Input elements for Matrix A
    printf("Enter the elements of Matrix A:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements for Matrix B
    printf("Enter the elements of Matrix B:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Matrix multiplication: C = A * B
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];  		// Perform multiplication and addition
            }
        }
    }

    // Output the result of multiplication
    printf("The result of Matrix Multiplication (Matrix C):\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
	
	getch();
    return 0;
}

