// marks, pass, fail, division
#include <stdio.h>
void main()
{
	float s1,s2,s3,s4,s5, total, per;
	printf("Enter marks of IIT, DL, C, maths, physics: ");
	sacnf("%f%f%f%f%f", &s1, &s2, &s3, &s4, &s5);
	total=s1+s2+s3+s4+s5;
	per=(total)/5.0;
	printf("Total marks is %.2f", total);
	printf("Percentage is %.2f", per);
}

