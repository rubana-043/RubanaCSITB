// smallest
#include <stdio.h>
int small(int, int, int);
void main()
{
	int a,b,c,s;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a, &b, &c);
	s=small(a,b,c);
	printf("Snallest number: %d", s);
}
int small(int a, int b,int c)
{
	int s;
	if(a<b && a<c)
	s=a;
	else if(b<a && b<c)
	s=b;
	else
	s=c;
}
