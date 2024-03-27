// digit, alphabet or character
#include <stdio.h>
void main()
{
	char ch;
	printf("Enter a character: ");
	scanf("%c", &ch);
	if (ch>='a' && ch<='z' || ch>='A' && ch<='Z')
		printf("%c is a letter.", ch);
	else if(ch>='0' && ch<='9')
		printf("%c is a digit.", ch);
	else
		printf("%c is other character.", ch);
}
