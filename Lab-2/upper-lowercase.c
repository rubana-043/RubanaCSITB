/* read lowercase and convert into uppercase*/
#include <stdio.h>
void main()
{
	char c,upper;
	printf("Enter character in lowercase: ");
	scanf("%c", &c);
	upper=c-32;
	if(c>='a' && c<='z')
	{
		printf("The equivalent uppercase is %c", upper );
	}
	else
	{
		printf("Invalid input");
	}
}
