#include <stdio.h>
#include <math.h>
void main()
{
	int base, power, result;
	printf("Enter base and power:");
	scanf("%d%d", &base,&power);
	result=pow(base,power);
	printf("The power of base is: %d", result);
 } 
