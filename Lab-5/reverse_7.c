// revese 7
#include <stdio.h>
int reverse(int);
void main()
{
	int n,rev;
	printf("Enter a number: ");
	scanf("%d", &n);
	rev=reverse(n);
	printf("The reverse of number is %d", rev);
}
int reverse (int n)
{
	int rev=0,rem;
	while(n!=0)
	{
		rem=n%10;
	rev=rev*10+rem;
	n=n/10;
	}
	return (rev);
}
