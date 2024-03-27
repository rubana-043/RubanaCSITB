#include <stdio.h>
int sum (int);
void main()
{
	int n, result;
	printf("Enter how many numbers: ");
	scanf("%d", &n);
	result=sum(n);
	printf("sum of first %d natural number is: %d",n, result);
}
int sum (int n)
{
	if(n<=0)
	return 0;
	else
	return (n+sum(n-1));
}
