// 31 b
#include <stdio.h>
void main()
{
	int sum=0,n,i;
	printf("Enter nth term: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
		sum=sum+i*11;
	printf("sum of seires 11+22+33+....upto %dth term is %d",n, sum);
}
