#include <stdio.h>
void armstrong (int);
void main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	armstrong(n);
}
void armstrong(int n)
{
	int temp,num,sum=0;
	temp=n;
	while(temp!=0)
	{
		num=temp%10;
		sum=sum+(num*num*num);
		temp=temp/10;
	}
	if(n==sum)
	printf("%d is armstrong", n);
	else
	printf("%d is not armstrong.", n);
}
