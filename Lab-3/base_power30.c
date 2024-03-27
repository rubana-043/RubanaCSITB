// base to the given power
#include <stdio.h>
void main()
{
	float base, result;
	int p,i;
	printf("Enter base: ");
	scanf("%f", &base);
	printf("Enter power: ");
	scanf("%d", &p);
	result=1.0;
	if(p>0)
	{
		for(i=1;i<=p;i++)
		{
			result*=base;
		}
	}
		else
		{
			for(i=1;i<=-p;i++)
			{
				result/=base;
			}
		}
		printf("%g raised to power %d = %g", base,p,result);
	
}
