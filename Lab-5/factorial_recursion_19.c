// factorisl recursion
#include <stdio.h>
int factorial (int);
void main()
{
	int n,c;
	printf("Enter any number: ");
	scanf("%d", &n);
	c=factorial(n);
	printf("The factorial is : %d", c);
	
}
int factorial (int n)
{
	if(n<=1)
	return (1);
	else
	return (n*factorial(n-1));
}
