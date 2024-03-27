//generate first n odd numbers
#include <stdio.h>
void main ()
{
	int i,n;
	printf("Enter number of odd terms to generate: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		if(i%2==!0)
		{
			printf("%d\t", i);
		}
	}
}
