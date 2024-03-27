#include <stdio.h>
float power (float, int);
void main()
{
	int p;
	float b, result;
	printf("enter base: ");
	scanf("%f", &b);
	printf("Enter power: ");
	scanf("%d", &b);
	result=power(b,p);
	printf("The result is: %f", result);
}
float power (float b, int p)
{
	if(p==0)
	return (1.0);
	else if(p>0)
	return (power(b,p-1)*b);
	else
	return (power(b,p+1)/b);
}
