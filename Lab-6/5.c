#include <stdio.h>
#include <stdlib.h>
struct student{
	int roll;
	char name[20];
	float marks_c;
	float marks_iit;
	float total;
	float avg;
};
void main()
{
	struct student *p;
	int i, n;
	printf("Enter no. of students: ");
	scanf("%d", &n);
	p=(struct student *)malloc(n*sizeof(struct student));
	
	if (p==NULL)
	{
		printf("Memory allocation failed");
		exit (1);
	}
	
	for(i=0;i<n;i++)
	{
		printf("Enter roll, name and marks of student in C and IIT:\n");
		scanf("%d %s %f %f",&(p+i)->roll, (p+i)->name, &(p+i)->marks_c, &(p+i)->marks_iit);
		p[i].total=p[i].marks_c+p[i].marks_iit;
		p[i].avg=p[i].total/2;
		
	}
	printf("Details of students:\n");
	for(i=0;i<n;i++)
	{
		printf("Roll=%d\tName=%s\tC=%g\tIIT=%g\tAverage=%g\n", (p+i)->roll, (p+i)->name, (p+i)->marks_c, (p+i)->marks_iit, (p+i)->avg);
	}
	free(p);
}
