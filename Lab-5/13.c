//13
#include <stdio.h>
void asterisk();
void main()
{
	asterisk();
}
void asterisk()
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
