// factorial 5
#include <stdio.h>
int fact(int);
void main()
{
	int n,factorial;
	printf("Enter a number: ");
	scanf("%d", &n);
	factorial=fact(n);
	printf("%d ! = %d", n,factorial);
}
int fact(int n)
{
	int factorial=1,i;
	for(i=1;i<=n;i++)
	factorial=factorial*i;
	return (factorial);
}
