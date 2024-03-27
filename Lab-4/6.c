#include <stdio.h>
void main()
{
	int array[100],search,i,n;
	printf("Enter no. of items: ");
	scanf("%d", &n);
	printf("Enter items:\n");
	for(i=0;i<n;i++)
	{
		printf("Item %d: ", i+1);
		scanf("%d", &array[i]);
	}
	printf("Enter item to search: ");
	scanf("%d", &search);
	for(i=0;i<n;i++)
	{
		if(array[i]==search)
		{
			printf("Required item is at position %d.\n", i+1);
			break;
		}
	}
	if(i==n)
	{
		printf("Entered number is not present.", search);
	}
}
