/* check whether given number is odd or even */
#include <stdio.h>
void main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d", &n);
	if(n%2==0)
	{
		printf("%d is even number.", n);
	}
	else
	{
		printf("%d is odd number.", n);
	}
}
