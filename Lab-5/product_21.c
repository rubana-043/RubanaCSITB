// product 21
#include <stdio.h>
int product (int,int);
void main()
{
	int a,b, result;
	printf("Enter two natural numbers: ");
	scanf("%d %d", &a, &b);
	result=product(a,b);
	printf("product of two natural numbers is : %d", result);
}
int product (int a, int b)
{
	if(a<=0 || b<=0)
	return 0;
	else
	return (a*b);
} 
