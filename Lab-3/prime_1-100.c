//to count total numbers of prime number between 1 to 100.
#include <stdio.h>
void main()
{
	int i,j,factor;
	for (i=1;i<=100;i++)
	{
		factor=0;
		for (j=1;j<=i;j++)
		{
			if (i%j==0)
			factor++;
		}
		if (factor==2)
		{
			printf("%6d",i);
		}
	}
}
