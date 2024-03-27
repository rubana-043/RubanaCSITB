#include <stdio.h>
#include <stdlib.h>
void main()
{
	int *p;
	int n,i,j,temp;
	printf("Enter no. of elements: ");
	scanf("%d", &n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Memory Allocation Failed.");
		exit (1);
	}
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d", &p[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
	printf("Sorted data in ascending order:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t", p[i]);
	}
	free (p);
}
