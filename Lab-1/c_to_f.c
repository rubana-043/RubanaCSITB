#include <stdio.h>
void main()
{
	float centigrade,fahernheit;
	printf("Enter temperature in Centigrade: ");
	scanf("%f", &centigrade );
	fahernheit=((centigrade*9)/5)+32;
	printf("%.2f Centigrade= %.2f Fahernheit",centigrade fahernheit);
}
