#include <stdio.h>
void main()
{
	int distance, m , km;
	printf("Enter distance in meter: ");
	scanf("%d", &distance);
	km=distance/1000;
	m=distance%1000;
	printf("%d m=%d km and %d m", distance,km,m);
}
