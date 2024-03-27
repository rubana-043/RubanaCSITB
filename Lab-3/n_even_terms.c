//generate first n even numbers
#include <stdio.h>
void main ()
{
	int i,n,sum=0;
	printf("Enter number of terms: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\t", i);
			sum=sum+i;
		}
	}
	printf("\nSum = %d", sum);
}
