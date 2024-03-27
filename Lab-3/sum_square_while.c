//find sum of square of first ‘n’ natural numbers using while.
#include <stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("Enter no. of terms: ");
	scanf("%d", &n);
	while(i<=n)
	{
		sum=sum+(i*i);
		i++;
	}
	printf("The sum of square of first n natural number is %d.", sum);
}
