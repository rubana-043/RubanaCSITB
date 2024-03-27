// sum of square of first n natural number using for loop
#include <stdio.h>
void main()
{
	int i,sum=0,n;
	printf("Enter no. terms: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		sum=sum+(i*i);
	}
	printf("sum ofsquare of first %d natural number=%d", n,sum);
}
