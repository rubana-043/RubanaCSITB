#include <stdio.h>
#include <stdlib.h>
void add(int *, int *, int *, int, int);
void main()
{
	int r,c,i,j,*a,*b, *s;
	printf("Enter order of matrix: ");
	scanf("%d %d", &r, &c);
	for(i=0;i<r;i++)
	{
		a=(int *)malloc(c*sizeof(int));
		b=(int *)malloc(c*sizeof(int));
		s=(int *)malloc(c*sizeof(int));
	}
	printf("Enter elements of matrix 1:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", (a+i*c+j));
		}
	}
	printf("Enter elements of matrix 2:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d", (b+i*c+j));
		}
	}
	add(a,b,s,r,c);
	printf("Sum of matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%6d", *(s+i*c+j));
		}
		printf("\n");
	}
}
void add(int *a, int *b, int *s, int r, int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			*(s+i*c+j)=*(a+i*c+j)+*(b+i*c+j);
		}
	}
}
