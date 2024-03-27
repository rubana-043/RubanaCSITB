// sum of digits
#include <stdio.h>
void main()
{
	int num, sum=0, n;
	printf("Enter the number: ");
	scanf("%d", &num);
	while (num>0)
	{
		n=num%10;
		sum=sum+n;
		num=num/10;	
	}
	printf("sum is %d.", sum);
}
