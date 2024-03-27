// prime 9
#include <stdio.h>
int isprime(int);
void main()
{
	int n, prime;
	printf("Enter a number: ");
	scanf("%d", &n);
	prime=isprime(n);
	if(isprime(n)==2)
	{
		printf("%d is prime.", n);
	}
	else
	{
		printf("%d is not prime.", n);
	}
}
int isprime(int n)
{
	int prime,i,factor=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		factor ++;
	}
	prime=factor;
	return (prime);
}
