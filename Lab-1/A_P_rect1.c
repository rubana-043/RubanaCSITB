#include <stdio.h>
void main()
{
	float l,b,A,P;
	printf("Enter length and breadth of rectangle: ");
	scanf("%f%f", &l,&b);
	//Area of the Rectangle
	A=l*b;
	//Perimeter of the Rectangle
	P=2*(l+b);
	//Print Area and Perimeter
	printf("Area of rectangle is: %.2f", A);
	printf("\nPerimeter of rectangle is: %.2f", P);
}
