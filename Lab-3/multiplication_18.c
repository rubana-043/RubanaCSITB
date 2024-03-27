// multiplication table upto n
#include <stdio.h>
void main()
{
	int i,j,n;
	printf("Enter the number: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
		printf("%d\t", i*j);
		printf("\n");
	}
}
