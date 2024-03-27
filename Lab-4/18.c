// transpose a matrix
#include <stdio.h>
#define MAX 5
void main()
{
	int c,r,m[MAX][MAX],t[MAX][MAX];
	int i,j;
	printf("Enter no. of rows: ");
	scanf("%d", &r);
	printf("Enter no. of columns: ");
	scanf("%d", &c);
	printf("Enter elements of matrix: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", &m[i][j]);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			t[i][j]=m[j][i];
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%6d", m[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of matirx is:\n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%6d", t[i][j]);
		}
		printf("\n");
	}
}
