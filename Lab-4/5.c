// sort in ascending order using selection sot
#include <stdio.h>
void main()
{
	int i,j,temp,n,min_index;
	printf("How many numbers?");
	scanf("%d", &n);
	if(n<=0)
	{
		printf("Invalid input");
	}
	printf("Enter positive integers:\n");
	int num[n];
	for(i=0;i<n;i++)
	{
		printf("Number %d:",i+1);
		scanf("%d", &num[i]);
	}
	for(i=0;i<n;i++)
	{
		min_index=i;
		for(j=i+1;j<n;j++)
		{
			if(num[j]<num[min_index]){
				min_index=j;
			}
		}
		temp=num[i];
		num[i]=num[min_index];
		num[min_index]=temp;
	}
	printf("The numbers in ascending order are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n", num[i]);
	}
	
}
