//find sum of first ‘n’ natural numbers.
#include <stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter no. of terms: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("The sum of first n natural numbers: %d", sum);
}
