#include <stdio.h>
void main()
{
	int n,cn,u,t,h,s;
	printf("Enter a number: ");
	scanf("%d", &n);
	cn=n;
	u=n%10;
	n=n/10;
	t=n%10;
	n=n/10;
	h=n%10;
	s=u+t+h;
	printf("The sum of %d is %d", cn,s);
}
