#include <stdio.h>
void main()
{
	int i,j,k;
	for (i=5;i>=1;i--)
	{
		for (j=4;j>=i;j--)
		printf(" ");
		for (k=1;k<=i;k++)
		printf("%d", k);
		for (k=i-1;k>=1;k--)
		printf("%d", k);
		printf("\n");
	}
}
