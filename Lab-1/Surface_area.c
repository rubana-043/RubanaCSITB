#include <stdio.h>
void main()
{
	float l,b,h,S;
	printf("Enter length, breadth and height of box: ");
	scanf("%f%f%f", &l,&b,&h);
	S= 2*(l*b+b*h+l*h);
	printf("Surface area of box is: %.2f", S);
}
