// multiply matrix
#include <stdio.h>
#define MAX 5
void main()
{
	int r1,r2,c1,c2,i,j,k,m1[MAX][MAX],m2[MAX][MAX],p[MAX][MAX];
	printf("Enter order of first matrix: ");
	scanf("%d%d", &r1,&c1);
	printf("Enter order of second matrix: ");
	scanf("%d%d", &r2,&c2);
	if(c1!=r2)
	{
		printf("Matrix multiplication not possible.");
	}
	else
	{
		printf("Enter elements of first matrix: ");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				scanf("%d", &m1[i][j]);
			}
		}
		printf("Enter elements of second matrix: ");
		for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			{
				scanf("%d", &m2[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				p[i][j]=0;
				for (k=0;k<c1;k++)
				{
					p[i][j]+=m1[i][k]*m2[k][j];
				}
			}
		}
		printf("First matrix is \n");
		for (i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%6d", m1[i][j]);
			}
			printf("\n");
		}
		printf("Second matrix is \n");
		for (i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%6d", m2[i][j]);
			}
			printf("\n");
		}
		printf("Matrix multiplication is \n");
		for(i=0;i<r1;i++)
		{
			for (j=0;j<c2;j++)
			{
				printf("%6d", p[i][j]);
			}
			printf("\n");
		}
		
	}
}

