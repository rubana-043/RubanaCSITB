#include <stdio.h>
void main()
{
	float area,peri, l,b;
	int choice;
	printf("welcome and press\n1 for area of rectangle \n ");
	printf("press 2 for perimeter of rectangle\n");
	printf("Enter your choice: ");
	scanf("%d", &choice);
	switch (choice)
	{
		case 1:
			printf("Enter length and breadth: ");
			scanf("%f%f", &l, &b);
			area=l*b;
			printf("Area of rectangle is %g.", area);
			break;
		case 2:
			printf("Enter length and breadth: ");
			scanf("%f%f", &b, &l);
			peri=2*(l+b);
			printf("perimeter of rectangle is %g", peri);
			break;
		default:
			printf("Choice out of options.");
	}
}
