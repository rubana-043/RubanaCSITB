// sum of rows and columns
#include <stdio.h>
#define MAX 5
void main()
{
	int r,c,m [MAX][MAX];
	int i,j;
	printf("Enter no. of rows: ");
	scanf("%d", &r);
	printf("Enter no. of columns: ");
	scanf("%d", &c);
	printf("Enter elements of matrix:\n");
	for ( i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            printf("Element (%d, %d): ", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }
	printf("The sum of rows:\n");
	for(i=0;i<r;i++){
		int row_sum=0;
	for(j=0;j<c;j++)
	{
		row_sum+=m[i][j];
	}
	printf("Sum of row %d: %d\n", i+1,row_sum);
}
printf("\nSum of columns:\n");
    for (j = 0; j < c; j++) {
        int col_sum = 0;
        for (i = 0; i < r; i++) {
            col_sum += m[i][j];
        }
        printf("Sum of column %d: %d\n", j + 1, col_sum);
    }
}
