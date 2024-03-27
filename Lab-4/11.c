//11
#include <stdio.h>
void main()
{
	int age[20],i;
	int child_count=0,adult_count=0,teen_count=0,young_count=0,old_count=0;
	for(i=0;i<20;i++)
	{
		printf("Enter age: ");
		scanf("%d", &age[i]);
	if(age[i]<13)
	child_count++;
	else if(age[i]>=13 && age[i]<20)
	teen_count++;
	else if(age[i]>=20 && age[i]<31)
	adult_count++;
	else if(age[i]>=31 && age[i]<55)
	young_count++;
	else
	old_count++;
	}
	printf("Number of people in each age group is:\n");
	printf("Child: %d\n", child_count);
	printf("Teen: %d\n", teen_count);
	printf("Adult: %d\n", adult_count);
	printf("Young: %d\n", young_count);
	printf("Old: %d\n", old_count);
	
}
