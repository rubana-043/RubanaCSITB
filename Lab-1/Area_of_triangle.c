#include <stdio.h>
#include <math.h>
void main()
{
	float a,b,c,s,A,Area;
	printf("Enter three sides of a triangle: ");
	scanf("%f%f%f", &a, &b, &c);
	s= (a+b+c)/2;
	A=s*(s-a)*(s-b)*(s-c);
	Area=sqrt(A);
	printf("The area of triangle is: %.2f", Area);
}
