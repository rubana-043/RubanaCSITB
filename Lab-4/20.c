#include <stdio.h>
void main()
{
	int i,j;
	char str[100];
	printf("Enter a string: ");
	scanf("%s", str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]-=32;
		}
	}
	printf("Corresponding uppercase string is: %s\n", str);
}
