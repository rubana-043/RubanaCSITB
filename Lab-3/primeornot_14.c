// check whether a number is prime or not
#include <stdio.h>
void main()
{
	int n,i,factor=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		if (n%i==0)
		factor++;
	}
	if (factor==2)
	{
		printf("%d is prime.", n);
	}
	else
	{
		printf("%d is not prime.", n);
	}
}
