#include <stdio.h>
void main()
{
	int i,first,last,mid,n,search,array[100];
	printf("Enter no. of items: ");
	scanf("%d", &n);
	printf("Enter items:\n");
	for(i=0;i<n;i++)
	{
		printf("Item [%d]: ", i);
		scanf("%d", &array[i]);
	}
	printf("Enter item to search: ");
	scanf("%d", &search);
	first=0;
	last=n-1;
	mid=(first+last)/2;
	while (first<=last)
	{
		if(array[mid]<search)
		first=mid+1;
		else if(array[mid]==search)
		{
			printf("Required item is at index [%d].\n", mid);
			break;
		}
		else
		last=mid-1;
		mid=(first+last)/2;
	}
	if(first>last)
	printf("Entered item is not present.");
}
