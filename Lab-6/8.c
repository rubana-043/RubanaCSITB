#include <stdio.h>
#include <stdlib.h>
int main() {
    int rows, cols;
    int i,j;
    
    printf("Enter the number of rows and columns for matrices: ");
    scanf("%d %d", &rows, &cols);

    int **matrix1 = allocateMatrix(rows, cols);
    int **matrix2 = allocateMatrix(rows, cols);
    int **result = allocateMatrix(rows, cols);

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    addMatrices(matrix1, matrix2, result, rows, cols);

    printf("Resultant matrix after addition:\n");
    displayMatrix(result, rows, cols);

    // Free dynamically allocated memory
    freeMatrix(matrix1, rows);
    freeMatrix(matrix2, rows);
    freeMatrix(result, rows);

    return 0;
}
// Function to allocate memory for a matrix of size rows x cols
int **allocateMatrix(int rows, int cols) 
{
	int i;
    int **matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for ( i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed.\n");
            exit(1);
        }
    }
    return matrix;
}

// Function to free memory allocated for a matrix
void freeMatrix(int **matrix, int rows)
{
	int i;
    for ( i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
}

// Function to add two matrices
void addMatrices(int **matrix1, int **matrix2, int **result, int rows, int cols) 
{
	int i,j;
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int **matrix, int rows, int cols) 
{
	int i,j;
    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}


