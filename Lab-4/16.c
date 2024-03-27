//16. Write a program to multiply matrices a A and B.
#include <stdio.h>
void main() {
	int i,j,k;
    int A[2][3] = {{1, 5, 2}, {3, 4, 6}};
    int B[3][2] = {{-1, 1}, {2, 3}, {5, 2}};
    int result[2][2] = {{0, 0}, {0, 0}};    
    // Performing matrix multiplication
    for ( i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for ( k = 0; k < 3; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    // Displaying the result matrix
    printf("Resultant matrix after multiplication:\n");
    for ( i = 0; i < 2; i++) {
        for ( j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
