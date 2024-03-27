// 31 c
#include <stdio.h>
void main()
{
	int sum=0,n,i;
	printf("Enter nth term: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i*i;
	}
	printf("sum of square of first %d natural number is %d.",n, sum);
}
