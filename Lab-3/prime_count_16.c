//to count total numbers of prime number between 1 to given number ‘n’.
#include <stdio.h>
void main()
{
	int n,i,j,factor,count=0;
	printf("Enter number upto which you want prime number:");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		factor=0;
		for (j=1;j<=i;j++)
		{
			if (i%j==0)
			factor++;
		}
	if (factor==2)
	{
		printf("%6d",i);
		count++;
	}
	}
	printf("\nTotal prime numbers are %d", count);
	
}
