// factorial of given number
#include <stdio.h>
void main()
{
	int i,n,fact=1;
	printf("Enter the number you want factorial of: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("The factorial of %d is %d.", n,fact);
}
