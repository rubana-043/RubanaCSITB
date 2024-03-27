#include <stdio.h>
void main()
{
	int a,b,c,s;
	printf("Enter three numbers: ");
	scanf("%d%d%d", &a,&b,&c);
	s=a<b?a:b;
	s=s<c?s:c;
	printf("The smallest number is %d", s);
}
