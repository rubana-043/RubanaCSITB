#include <stdio.h>
void main()
{
	float SI, A, R;
	int P, T;
	printf("Enter Principal, Rate and Time: ");
	scanf("%d%f%d", &P,&R,&T);
	SI= (P*T*R)/100;
	A=P+SI;
	printf("Simple Interest and Amount is: %.2f\t%.2f", SI,A);
}
