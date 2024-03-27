// read the person's age
#include <stdio.h>
void main()
{
	int age;
	printf("Enter age: ");
	scanf("%d", &age);
	if(age<12)
		printf("CHILD");
	else if(age<20 && age>=12)
		printf("TEEN");
	else if(age<30 && age>=20)
		printf("ADULT");
	else if(age<55 && age>=30)
		printf("YOUNG");
	else
		printf("OLD");
	
}
