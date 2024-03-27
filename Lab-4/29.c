//29. read name of n students and display in monitor
#include <stdio.h>
#include <string.h>
void main()
{
	int i,n;
	char name[n][100];
	printf("Enter no. of students: ");
	scanf("%d", &n);
	printf("Enter the name of students:\n");
	for(i=0;i<n;i++)
	{
		printf("Student %d: ",i+1);
		scanf("%s", name[i]);
	}
	printf("The name of students are:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n", name[i]);
	}
}

