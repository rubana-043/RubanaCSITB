// 2
#include <stdio.h>
struct marks {
	float c;
	float iit;
	float phy;
	float maths;
	float dl;
};
struct student {
	int roll;
	char name[20];
	float total;
	float per;
	struct marks sub;
}s[10];
void main()
{
	int n,i;
	printf("Enter no. of students: ");
	scanf("%d", &n);
	printf("Enter details of student\n");
	for(i=0;i<n;i++)
	{
		printf("Roll: ");
		scanf("%d", &s[i].roll);
		fflush(stdin);
		printf("Name: ");
		gets(s[i].name);
		printf("Marks of 5 subject: ");
		scanf("%f %f %f %f %f", &s[i].sub.c, &s[i].sub.dl, &s[i].sub.iit, &s[i].sub.maths, &s[i].sub.phy);
		s[i].total=s[i].sub.c+s[i].sub.dl+s[i].sub.iit+s[i].sub.maths+s[i].sub.phy;
		s[i].per=s[i].total/5;
	}
	printf("Details of student:\n");
	printf("--------------------------------------------------------------------------------------\n");
	printf("Roll\tName\tC\tDL\tIIT\tMaths\tPhy\tTotal\tPercentage\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t%g\t%g\t%g\t%g\t%g\t%g\t%g\n", s[i].roll, s[i].name, s[i].sub.c, s[i].sub.dl, 
		s[i].sub.iit, s[i].sub.maths, s[i].sub.phy, s[i].total, s[i].per);
	}
	printf("---------------------------------------------------------------------------------------");
}
