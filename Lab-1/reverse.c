#include <stdio.h>
void main()
{
	int num, cn, u, t, h, th, rev;
	printf("Enter four digit number: ");
	scanf("%d", &num);
	cn=num;
	u=num%10;
	num=num/10;
	t=num%10;
	num=num/10;
	h=num%10;
	num=num/10;
	th=num%10;
	rev=(u*1000+t*100+h*10+th);
	printf("The reverse of %d is %d.", cn, rev);
}
