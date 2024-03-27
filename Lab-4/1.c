// to initialize 10 numbers in an array and display them
#include <stdio.h>
void main()
{
	int a[10],i;
	printf("Enter 10 integer numbers: ");
	for (i=1;i<=10;i++)
	scanf("%d", &a[i]);
	for (i=1;i<=10;i++)
	{
		printf("a[%d]=%d\n",i, a[i]);
	}
}
