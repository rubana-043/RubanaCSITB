/* profit or loss */
#include <stdio.h>
void main()
{
	int cp, sp;
	printf("Enter cost price of good: ");
	scanf("%d", &cp);
	printf("Enter selling price of good: ");
	scanf("%d", &sp);
	if(sp>cp)
		printf("There is profit.");
	else
		printf("There is loss.");
}
