#include <stdio.h>
int armstrong (int);
int main()
{
	int n, as;
	printf("Enter a number: ");
	scanf("%d", &n);
	as=armstrong(n);
	if(armstrong(n)==0)
	{
		printf("%d is not armstrong.", n);
	}
	else
	{
		printf("%d is 1armstrong.", n);
	}
	
}
int armstrong(int n)
{
	int armstrong, i, count
}
