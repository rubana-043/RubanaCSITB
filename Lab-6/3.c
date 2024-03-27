//3
#include <stdio.h>
struct employee{
	int id;
	char name[20];
	char post[20];
	int salary;
}s[10];
void main()
{
	int i, n;
	printf("Enter no. of employee: ");
	scanf("%d", &n);
	printf("Records of employee\n");
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
	printf("Details of employee:\n");
	for(i=0;i<n;i++)
	{
		if(s[i].salary>40000 && s[i].salary<60000)
		{
			printf("%d\t%s\t%s\t%d\t\n", s[i].id, s[i].name, s[i].post, s[i].salary);
		}
	}
}
