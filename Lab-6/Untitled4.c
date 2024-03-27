#include <stdio.h>
struct student {
	int roll;
	char name[20];
	char gender[10];
	float comp;
	float maths; 
}s[10];
void main()
{
	int i,j,n;
	printf("Enter no. of students: ");
	scanf("%d", &n);
	printf("Enter student records:\n");
	for(i=0;i<n;i++)
	{
		printf("Enter roll: ");
		scanf("%d", &s[i].roll);
		printf("Enter name: ");
		scanf("%s", s[i].name);
		printf("Enter gender: ");
		scanf("%s", s[i].gender);
		printf("Enter marks in computer: ");
		scanf("%f", &s[i].comp);
		printf("Enter marks in maths: ");
		scanf("%f", &s[i].maths);
	}
	printf("Records of students are \n");
	for (i=0;i<n;i++)
	{
		printf("%d %s %s %.2f %.2f",s[i].roll, s[i].name, s[i].gender, s[i].comp, s[i].maths);
	}
}
