#include <stdio.h>
#include <string.h>
void main()
{
	char str1[100],str2[100];
	printf("Enter the string: ");
	scanf("%s", str1);
	strcpy(str2,str1);
	strrev(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("%s is palindrome.", str2);
	}
	else
	{
		printf("%s is not palindrome.",str2);
	}
}
	
