// matrix addition
#include <stdio.h>
#define MAX 5
void main()
{
	int r1,r2,c1,c2,m1[MAX][MAX], m2[MAX][MAX],s[MAX][MAX];
	int i,j;
	printf("Enter order of first matrix: ");
	scanf("%d%d", &r1,&c1);
	printf("Enter order of second matrix: ");
	scanf("%d%d", &r2,&c2);
	printf("Enter elements of first matrix:\n");
	for(i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		{
			scanf("%d", &m1[i][j]);
		}
	}
	printf("Enter elements of second matrix:\n");
	for (i=0;i<r2;i++)
	{
		for (j=0;j<c2;j++)
		{
			scanf("%d", &m2[i][j]);
		}
	}
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		{
			s[i][j]=m1[i][j]+m2[i][j];
		}
	}
	printf("Sum of matrix is:\n");
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		{
			printf("%6d", s[i][j]);
		}
		printf("\n");
	}
}
