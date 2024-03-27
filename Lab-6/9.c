#include <stdio.h>
void reverse(char []);
void main()
{
	char str[20];
	printf("Enter string to reverse: ");
	gets (str);
	reverse (str);
	printf("String after reverse:%s\n", str);
}
void reverse (char str[])
{
	int l,i;
	char c;
	l=0;
	while(str[l]!='\0')
	{
		l++;
	}
	for(i=0;i<l/2;i++)
	{
		c=str[i];
		str[i]=str[l-1-i];
		str[l-1-i]=c;
	}
}
