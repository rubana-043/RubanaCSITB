#include <stdio.h>
void main()
{
	int num, days, months, years;
	printf("Enter number of days: ");
	scanf("%d", &days);
	num=days;
	years=days/365;
	days=days%365;
	months=days/30;
	days=days%30;
	printf("No. of years, month and days is %d years, %d months, %d days.", years, months, days);
}
