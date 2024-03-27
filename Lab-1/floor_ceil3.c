#include <stdio.h>
#include <math.h>
void main()
{
	float n, f, c;
	printf("Enter a real number:");
	scanf("%f", &n);
	f=floor(n);
	c=ceil(n);
	printf("The floor value of the number is: %.2f", f);
	printf("\nThe ceiling value of the number is: %.2f", c);
 } 
