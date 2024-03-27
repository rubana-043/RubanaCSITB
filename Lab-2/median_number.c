/* find the median number */
#include <stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	if(b>a && a>c || c>a && a>b)
		printf("%d is median number.", a);
	else if(a>b && b>c || c>b && b>a)
		printf("%d is median number.", b);
	else
		printf("%d is median number.", c);
}
