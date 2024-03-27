// base and power
#include <stdio.h>
#include <conio.h>
float power(float,int);
void main()
{
	float b,res;
	int pow;
	printf("Enter base: ");
	scanf("%f", &b);
	printf("enter power: ");
	scanf("%d", &pow);
	res=power(b,pow);
	printf("Result= %.2f", res);
}
float power(float b, int pow)
{
	int i;
	float res=1;
	if(pow>0)
	{
		for(i=1;i<=pow;i++)
		res=res*b;
	}
	else
	{
		for(i=0;i<=-pow;i++)
		res=res/b;
	}
	return res;
}
