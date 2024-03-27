// multipilcation table
#include <stdio.h>
int main()
{
	int i,n,a,res;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Enter the number till which you want table: ");
	scanf("%d", &a);
	for(i=1;i<=a;i++)
	{
		res=n*i;
		printf("%d*%d=%d\n", n,i,res);
	}
}
