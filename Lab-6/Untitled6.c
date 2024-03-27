// ascending order of salary field
#include <stdio.h>
void sort (int);
struct record {
	int employee_id;
	char name[20];
	char post[20];
	int salary;
}s[10],temp;
void main()
{
	int i,j,n;
	printf("Enter no. of employees: ");
	scanf("%d", &n);
	printf("Enter record of %d employees:\n", n);
	for (i=0;i<n;i++)
	{
		printf("Enter employee id: ");
		scanf("%d", &s[i].employee_id);
		printf("Enter name: ");
		scanf("%s", s[i].name);
		printf("Enter post: ");
		scanf("%s", s[i].post);
		printf("Enter salary: ");
		scanf("%d", &s[i].salary);
	}
	sort (n);
}
void sort (int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s[i].salary>=50000)
		{
			printf("The record of students are:\n");
			for(i=0;i<n;i++)
	{
		printf("%d %s %s %d", s[i].employee_id, s[i].name, s[i].post, s[i].salary);
	}
		}
	}
}

