#include <stdio.h>
int fibonacci(int);
void main()
{
	int n,i=0,c;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("Fibonacci series upto %dth term : ", n);
	for(c=1;c<=n;c++)
	{
		printf("%d\t", fibonacci(i));
		i++;
	}
}
int fibonacci (int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return (fibonacci (n-1)+ fibonacci (n-2));
}
