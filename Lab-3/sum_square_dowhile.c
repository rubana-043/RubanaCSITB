//find sum of square of first ‘n’ natural numbers using do-while.
#include <stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("Enter no. of terms: ");
	scanf("%d", &n);
	do
	{
		sum=sum+(i*i);
		i++;
	}while(i<=n);
	printf("The sum of square of first n natural number is %d.", sum);
}
