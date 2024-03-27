//find the sum of digits of a given number.
#include <stdio.h>
void main()
{
	int n,cn,d,sum=0;
	printf("Enter an integer number= ");
	for (scanf("%d", &n); n != 0; n = n/10)
	{
		d=n%10;
		sum=sum+d;
		n=n/10;
	}
	printf("The sum of digits is %d.", sum);
}
