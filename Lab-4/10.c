#include <stdio.h>
void main()
{
	int i,n,c,num[100];
	printf("Enter no. of elements: ");
	scanf("%d", &n);
	if(n<=0)
	{
		printf("Enter positive number.");
	}
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	{
		printf("Number %d: ", i+1);
		scanf("%d", &num[i]);
	}
	printf("Enter constant: ");
	scanf("%d", &c);
	for(i=0;i<n;i++)
	{
		num[i]+=c;
	}
	printf("Numbers after %d increment:\n", c);
	for(i=0;i<n;i++)
	{
		printf("%d\n", num[i]);
	}
}
