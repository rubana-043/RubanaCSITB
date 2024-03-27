// ,maximum 3
#include <stdio.h>
int max(int, int);
void main()
{
	int a,b, maximum;
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	maximum=max(a,b);
	printf("The maximum among two numbers is: %d", maximum);
}
int max(int a, int b)
{
	int maximum=0;
	if(a>b)
	maximum=a;
	else
	maximum=b;
	return maximum;
}
