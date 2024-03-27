#include <stdio.h>
void main()
{
	int n1,n2,s,d,p,q,r;
	printf("Enter two numbers: ");
	scanf("%d%d", &n1,&n2);
	s=n1+n2;
	d=n1-n2;
	p=n1*n2;
	q=n1/n2;
	r=n1%n2;
	printf("Sum is %d\t Difference is %d\t Product is %d\t Quotient is %d\t Remainder is %d\t", s,d,p,q,r);
}
