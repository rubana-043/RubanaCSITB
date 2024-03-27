#include <stdio.h>
void sort (int array[50], int n);
void main()
{
	int n,i;
	printf("Enter no. of elements: ");
	scanf("%d", &n);
	int array[50];
	for(i=0;i<n;i++)
	{
		printf ("number %d: ", i+1);
		scanf("%d", &array[i]);
	}
	printf("Sorted number in ascending order is:\n");
	for(i=0;i<n;i++)
	{
		printf("%6d", array[i]);
	}
}
void sort (int array[50], int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
