//31. Write a program to sort {aman, akesh, anish, anam, anil, anju} in alphabetical order.
#include <stdio.h>
#include <string.h>
void main()
{
	int i,j;
	char temp[10];
	char name[6][10]={"Aman", "Akesh", "Anish", "Anam", "Anil", "Anju"};
	int n = sizeof(name) / sizeof(name[0]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	printf("The sorted names are: \n");
	for(i=0;i<n;i++)
	{
		printf("%s\n", name[i]);
	}
}
