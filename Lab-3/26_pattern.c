// 26 pattern
#include <stdio.h>
void main()
{
	int i,j,k;
	for (i=1;i<=4;i++)
	{
		for (j=4;j>=i;j--)
		printf(" ");
		for (k=1;k<=i;k++)
		printf("*");
		for (k=i-1;k>=1;k--)
		printf("*");
		printf("\n");
	}
}
