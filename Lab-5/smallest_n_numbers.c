// smallest among n numbers
#include <stdio.h>
int smallest (int a[50], int n);
void main()
{
	int n,i,result,a[50];
	printf("Enter how many numbers: ");
	scanf("%d", &n);
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	{
		printf("Num %d: ", i+1);
		scanf("%d", &a[i]);
	}
	result=smallest (a, n);
	printf("Smallest among %d numbers is %d.", n,result);
}
int smallest (int a[50], int n)
{
	int small=a[0];
	int i;
	for (i=0;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
		}
	}
	return (small);
}

