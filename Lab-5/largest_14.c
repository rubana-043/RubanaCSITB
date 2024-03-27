// largest of n number
#include <stdio.h>;
int largest (int array[50],int n);
void main()
{
	int array[50], result;
	int i,n;
	printf("Enter how many number: ");
	scanf("%d", &n);
	printf("Enter numbers:\n");
	for(i=0;i<n;i++)
	{
		printf("Num %d: ", i+1);
		scanf("%d", &array[i]);
	}
	result=largest(array,n);
	printf("The largest number among n number is %d", result);
}
int largest (int array[50], int n)
{
	int lg=array[0];
	int i;
	for (i=0;i<n;i++)
	{
		if(array[i]>lg)
		{
			lg=array[i];
		}
	}
	return (lg);
}

