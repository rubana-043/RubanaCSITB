#include<stdio.h>
void main()
{
	int a;
	printf("enter age: ");
	scanf("%d", &a);
	if(a<12)
	printf("child");
	if(a<30)
	printf("adult");
	if(a<55)
	printf("young");
	else
	printf("Old");
	}
