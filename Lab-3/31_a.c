// 31 a
#include <stdio.h>
void main()
{
	int n=1,i;
	float sum=0,t;
	for (i=1;i<=10;i++)
	{
		t=1.0/(n*n);
		sum=sum+t;
		n=n+2;
	}
	printf("The sum is series is %g", sum);
}
