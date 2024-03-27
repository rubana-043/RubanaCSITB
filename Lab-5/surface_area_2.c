#include <stdio.h>
float area(float, float, float);
void main()
{
	float l,b,h,A;
	printf("Enter length, breadth and height of box: ");
	scanf("%f %f %f", &l,&b,&h);
	A=area(l,b,h);
	printf("Surface Area= %.2f", A);
}
float area(float l,float b, float h)
{
	float A;
	A=2*(l*b+b*h+l*h);
	return A;
}
