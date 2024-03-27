/* read a number and check if it is positive or negative */
#include <stdio.h>
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	if(n>0)
		printf("%d is positive.", n);
	else
		printf("%d is negative.", n);
}
