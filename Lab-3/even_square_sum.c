//sum of square of first n natural number
#include <stdio.h>
void main()
{
	int i,n,sum=0;
	printf("Enter no. of terms: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		sum=sum+(i*i);
	}
	printf("The required sum is %d.", sum);
}
