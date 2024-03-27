#include <stdio.h>
void main()
{
	float centigrade,fahernheit;
	printf("Enter temperature in Fahernheit: ");
	scanf("%f", &fahernheit);
	centigrade=(5*(fahernheit-32))/9;
	printf("%.2f Fahrenheit = %.2f Centigrade", fahernheit, centigrade);
}
