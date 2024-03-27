// sum of cube of first 10 natural numbers
#include <stdio.h>
void main()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		sum=sum+(i*i*i);
	}
	printf("The required sum is %d.", sum);
}
