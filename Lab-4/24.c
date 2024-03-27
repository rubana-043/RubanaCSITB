//24. palindrome or not 
#include <stdio.h>
void main()
{
	char word[80];
	int i,l;
	printf("Enter a word: ");
	scanf("%s", word);
	l=0;
	while(word[l]!='\0')
	{
		l++;
	}
	for(i=0;i<l/2;i++)
	{
		if(word[i]!=word[l-1-i])
		break;
	}
	if(i<l/2)
	printf("Word in not palindrome.");
	else
	printf("Word is palindrome.");
}
 
