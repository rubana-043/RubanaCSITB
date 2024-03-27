#include <stdio.h>
void main()
{
	float l,b,A,P;
	printf("Enter length and breadth of rectangle: ");
	scanf("%f%f", &l,&b);
	A=l*b;
	P=2*(l+b);
	printf("Area of rectangle is: %.2f", A);
	printf("\nPerimeter of rectangle is: %.2f", P);
}
