// quoficient of quadratic equation
#include <stdio.h>
#include <math.h>
void main()
{
int a,b,c,d;
float x1, x2,sr,rp,ip;
printf("Enter value of a,b,c: ");
scanf("%d%d%d", &a, &b, &c);
if (a==0)
{
	printf("not a quadratic equation.");
}
else
{
	d=b*b-4*a*c;
}
	if(d<0)
	{
		printf("roots are imaginary");
	}
	else if(d==0)
	{
		x1=-b/2.0*a;
		printf("Both roots are same.", x1);
	}
	else
	{
		sr=sqrt(d);
		x1=(-b+sr)/(2*a);
		x2=(-b-sr)/(2*a);
		printf("x1=%.2f\n x2=%.2f", x1,x2);	
	}
}
