//4 
#include <stdio.h>
#include <string.h>
struct employee{
	int id;
	char name[20];
	char post[20];
	int salary;
}s[10],t;
void main()
{
	int n,i,j;
	printf("Enter no. of employee: ");
	scanf("%d", &n);
	printf("Enter records of employees:\n");
	for(i=0;i<n;i++)
	{
		printf("Employee id: ");
		scanf("%d", &s[i].id);
		fflush(stdin);
		printf("Name: ");
		gets(s[i].name);
		printf("Post: ");
		gets(s[i].post);
		printf("Salary: ");
		scanf("%d", &s[i].salary);
	}
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(s[i].name,s[j].name)>0)
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	printf("Sorted data:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%s\t%d\n", s[i].id, s[i].name, s[i].post, s[i].salary);
	}
}
