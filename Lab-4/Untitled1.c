// read n names of student and display in monitor
#include <stdio.h>
#include <string.h>
void main()
{
	int i,n;
	char temp[100];
	printf("Enter no. of names: ");
	scanf("%d", &n);
	printf("Names of students are:\n");
	for (i=0;i<n;i++)
	{
		char name[n][100];
		scanf("%s", name[i]);
		printf("Name:%s\n",name);
	}
}
